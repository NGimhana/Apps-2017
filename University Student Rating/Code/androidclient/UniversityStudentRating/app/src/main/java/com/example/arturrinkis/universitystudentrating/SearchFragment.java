package com.example.arturrinkis.universitystudentrating;

import android.content.pm.ActivityInfo;
import android.os.AsyncTask;
import android.os.Bundle;
import android.support.design.widget.TabLayout;
import android.app.Fragment;
import android.app.FragmentTransaction;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ImageButton;
import android.widget.ListView;
import android.widget.RelativeLayout;
import android.widget.TextView;

import com.example.arturrinkis.universitystudentrating.CacheData.ProfileCache;
import com.example.arturrinkis.universitystudentrating.CustomControls.Adapters.SearchResultAdapter;
import com.example.arturrinkis.universitystudentrating.DTO.UserProfile;
import com.example.arturrinkis.universitystudentrating.ServerServiceAPI.Interfaces.IServerAPIManager;
import com.example.arturrinkis.universitystudentrating.ServerServiceAPI.ServerAPIManager;

import java.util.ArrayList;

public class SearchFragment extends Fragment {
    private String SEARCH_FRAGMENT_TAG = "SEARCH_FRAGMENT_TAG";
    private View view = null;
    private IServerAPIManager serverAPIManager = null;
    private SettingSearchFragment settingSearchFragment = new SettingSearchFragment();
    private SearchUsersAsyncTask searchUsersAsyncTask = null;

    public SearchFragment() {
        // Required empty public constructor
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        getActivity().setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_FULL_SENSOR);
        view = inflater.inflate(R.layout.fragment_search, container, false);
        serverAPIManager = new ServerAPIManager(getActivity().getApplicationContext());

        initMainHeaderTextView();
        hideMainContent();
        showLoadingAnimation();

        searchUsersAsyncTask = new SearchUsersAsyncTask();
        searchUsersAsyncTask.execute();

        return view;
    }

    @Override
    public void onDetach() {
        super.onDetach();
        cancelSearchUsersAsyncTask();
    }

    private void initMainHeaderTextView(){
        TextView main_header_tv = (TextView)getActivity().findViewById(R.id.main_header_tv);
        main_header_tv.setText("Search result");
    }

    private void initControls(){
        try {
            if(getActivity().getClass() != GuestActivity.class) hideTabLayout();
            initPrevButton();
            initNextButton();
            initSettingButton();
            initSearchResultListView();
            hideLoadingAnimation();
            showMainContent();
        }
        catch (Exception e){
            Log.d("async task", "activity has been destroyed");
        }
    }

    private void hideTabLayout(){
        TabLayout tabLayout = (TabLayout)getActivity().findViewById(R.id.main_tab);
        tabLayout.setVisibility(View.GONE);
    }

    private void initPrevButton(){
        ImageButton settingButton = (ImageButton)view.findViewById(R.id.prev_btn);
        settingButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(ProfileCache.getInstance().getSearchModel().getSkipCount() >= ProfileCache.getInstance().getTakeCount()){
                    int skipCount = ProfileCache.getInstance().getSearchModel().getSkipCount();

                    ProfileCache.getInstance().getSearchModel().setSkipCount(skipCount - ProfileCache.getInstance().getTakeCount());
                    ProfileCache.getInstance().getSearchModel().setTakeCount(ProfileCache.getInstance().getTakeCount());

                    hideMainContent();
                    showLoadingAnimation();
                    searchUsersAsyncTask = new SearchUsersAsyncTask();
                    searchUsersAsyncTask.execute();
                }
            }
        });
    }

    private void initNextButton(){
        ImageButton settingButton = (ImageButton)view.findViewById(R.id.next_btn);
        settingButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                final SearchResultAdapter searchResultAdapter = new SearchResultAdapter(view.getContext(), ProfileCache.getInstance().getSearchUserResult());
                if(searchResultAdapter.getCount() == ProfileCache.getInstance().getTakeCount()){
                    int skipCount = ProfileCache.getInstance().getSearchModel().getSkipCount();

                    ProfileCache.getInstance().getSearchModel().setSkipCount(skipCount + ProfileCache.getInstance().getTakeCount());
                    ProfileCache.getInstance().getSearchModel().setTakeCount(ProfileCache.getInstance().getTakeCount());

                    hideMainContent();
                    showLoadingAnimation();
                    searchUsersAsyncTask = new SearchUsersAsyncTask();
                    searchUsersAsyncTask.execute();
                }
            }
        });
    }

    private void initSettingButton(){
        ImageButton settingButton = (ImageButton)view.findViewById(R.id.setting_btn);
        settingButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                getActivity().setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_PORTRAIT);
                FragmentTransaction fragmentTransaction = getActivity().getFragmentManager().beginTransaction();
                fragmentTransaction.replace(R.id.tab_container, settingSearchFragment);
                fragmentTransaction.addToBackStack(SEARCH_FRAGMENT_TAG);
                fragmentTransaction.commit();
            }
        });
    }

    private void initSearchResultListView(){
        final SearchResultAdapter searchResultAdapter = new SearchResultAdapter(view.getContext(), ProfileCache.getInstance().getSearchUserResult());

        ListView search_result_lv = (ListView) view.findViewById(R.id.search_result_lv);
        search_result_lv.setAdapter(searchResultAdapter);

        search_result_lv.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                UserProfile profile = (UserProfile)searchResultAdapter.getItem(position);
                if(ProfileCache.getInstance().getAuthUser() == null || profile.getId() != ProfileCache.getInstance().getAuthUser().getUserProfileId()) {
                    Fragment showProfileFragment = profile.getStatusId() == 1 ? new ShowStudentProfileFragment() : new ShowProfessorProfileFragment();
                    Bundle bundle = new Bundle();
                    bundle.putInt("ShowingUserId", profile.getId());
                    showProfileFragment.setArguments(bundle);
                    FragmentTransaction fragmentTransaction = getActivity().getFragmentManager().beginTransaction();

                    fragmentTransaction.replace(R.id.tab_container, showProfileFragment);
                    fragmentTransaction.addToBackStack(SEARCH_FRAGMENT_TAG);
                    fragmentTransaction.commit();
                }
            }
        });
    }

    private void showLoadingAnimation() {
        RelativeLayout loading_layout = (RelativeLayout) getActivity().findViewById(R.id.loading_layout);
        loading_layout.setVisibility(View.VISIBLE);
    }

    private void hideMainContent() {
        RelativeLayout search_layout = (RelativeLayout) view.findViewById(R.id.search_layout);
        search_layout.setVisibility(View.GONE);
    }

    private void hideLoadingAnimation() {
        RelativeLayout loading_layout = (RelativeLayout) getActivity().findViewById(R.id.loading_layout);
        loading_layout.setVisibility(View.GONE);
    }

    private void showMainContent(){
        RelativeLayout search_layout = (RelativeLayout) view.findViewById(R.id.search_layout);
        search_layout.setVisibility(View.VISIBLE);
    }

    //
    //
    //database async task

    class SearchUsersAsyncTask extends AsyncTask<Void, Void, Void> {
        @Override
        protected Void doInBackground(Void... params) {
            ArrayList<UserProfile> searchedUsers = serverAPIManager.getSearchService().searchUsers(ProfileCache.getInstance().getSearchModel());
            ProfileCache.getInstance().setSearchUserResult(searchedUsers);
            return null;
        }

        protected void onPostExecute(Void result) {
            try {
                initControls();
            }
            catch(Exception e){
                Log.e("async task exeption", e.getMessage());
            }
        }
    }

    private void cancelSearchUsersAsyncTask() {
        if (searchUsersAsyncTask == null) return;
        searchUsersAsyncTask.cancel(false);
    }
}
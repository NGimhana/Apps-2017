/*
created with obj2opengl.pl

source file    : flecha.obj
vertices       : 31
faces          : 62
normals        : 21
texture coords : 112


// include generated arrays
#import "flecha.h"

// set input data to arrays
glVertexPointer(3, GL_FLOAT, 0, flechaVerts);
glNormalPointer(GL_FLOAT, 0, flechaNormals);
glTexCoordPointer(2, GL_FLOAT, 0, flechaTexCoords);

// draw data
glDrawArrays(GL_TRIANGLES, 0, flechaNumVerts);
*/

unsigned int flechaNumVerts = 186;


#ifndef _QCAR_flecha_OBJECT_H_
#define _QCAR_flecha_OBJECT_H_
#define NUM_flecha_OBJECT_VERTEX 186



static const float flechaVertices [558] = {
  // f 4/1/1 5/2/1 6/3/1 7/4/1
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  0.235570986080285 , 0.0659952970107219 , -0.158711609362832 ,
  0.235570986080285 , -0.153202242716092 , -0.158711609362832 ,
  // f 4/1/1 5/2/1 6/3/1 7/4/1
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  0.235570986080285 , -0.153202242716092 , -0.158711609362832 ,
  // f 5/5/2 4/6/2 8/7/2 9/8/2
  0.235570986080285 , 0.0659952970107219 , -0.158711609362832 ,
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  // f 5/5/2 4/6/2 8/7/2 9/8/2
  0.235570986080285 , 0.0659952970107219 , -0.158711609362832 ,
  0.207372455580591 , 0.0796951432436477 , -0.170969957775129 ,
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  // f 15/9/3 10/10/3 4/11/3 7/12/3
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  -0.209078484174061 , 0.0659952970107219 , -0.135691894736109 ,
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  // f 15/9/3 10/10/3 4/11/3 7/12/3
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  // f 11/13/4 10/14/4 15/15/4 16/16/4
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  -0.209078484174061 , 0.0659952970107219 , -0.135691894736109 ,
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  // f 11/13/4 10/14/4 15/15/4 16/16/4
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  // f 11/17/5 17/18/5 18/19/5 10/20/5
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  -0.0827523390587141 , 0.0796951432436477 , -0.155950131357661 ,
  -0.182296517774852 , 0.0796951432436477 , -0.150796523201759 ,
  // f 11/17/5 17/18/5 18/19/5 10/20/5
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  -0.209078484174061 , 0.0659952970107219 , -0.135691894736109 ,
  -0.182296517774852 , 0.0796951432436477 , -0.150796523201759 ,
  // f 17/21/6 11/22/6 12/23/6 19/24/6
  -0.0827523390587141 , 0.0796951432436477 , -0.155950131357661 ,
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  // f 17/21/6 11/22/6 12/23/6 19/24/6
  -0.0827523390587141 , 0.0796951432436477 , -0.155950131357661 ,
  -0.157987099623762 , 0.0796951432436477 , 0.544316138853722 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  // f 20/25/7 12/26/7 11/27/7 16/28/7
  -0.173132279634261 , -0.153202242716092 , 0.558645493021051 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  // f 20/25/7 12/26/7 11/27/7 16/28/7
  -0.173132279634261 , -0.153202242716092 , 0.558645493021051 ,
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  // f 21/29/4 13/30/4 12/31/4 20/32/4
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  // f 21/29/4 13/30/4 12/31/4 20/32/4
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  -0.173132279634261 , -0.153202242716092 , 0.558645493021051 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  // f 14/33/8 13/34/8 21/35/8 22/36/8
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  // f 14/33/8 13/34/8 21/35/8 22/36/8
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  // f 13/37/9 14/38/9 23/39/9 24/40/9
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
  0.107828550861377 , 0.0796951432436477 , -0.165816486617689 ,
  // f 13/37/9 14/38/9 23/39/9 24/40/9
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  0.254973393307666 , 0.0796951432436477 , 0.52293684381493 ,
  0.107828550861377 , 0.0796951432436477 , -0.165816486617689 ,
  // f 9/41/10 23/42/10 14/43/10 5/44/10
  0.207372455580591 , 0.0796951432436477 , -0.170969957775129 ,
  0.107828550861377 , 0.0796951432436477 , -0.165816486617689 ,
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
  // f 9/41/10 23/42/10 14/43/10 5/44/10
  0.207372455580591 , 0.0796951432436477 , -0.170969957775129 ,
  0.235570986080285 , 0.0659952970107219 , -0.158711609362832 ,
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
  // f 10/45/11 18/46/11 8/47/11 4/48/11
  -0.209078484174061 , 0.0659952970107219 , -0.135691894736109 ,
  -0.182296517774852 , 0.0796951432436477 , -0.150796523201759 ,
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  // f 10/45/11 18/46/11 8/47/11 4/48/11
  -0.209078484174061 , 0.0659952970107219 , -0.135691894736109 ,
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  // f 24/49/12 19/50/12 12/51/12 13/52/12
  0.254973393307666 , 0.0796951432436477 , 0.52293684381493 ,
  -0.157987099623762 , 0.0796951432436477 , 0.544316138853722 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  // f 24/49/12 19/50/12 12/51/12 13/52/12
  0.254973393307666 , 0.0796951432436477 , 0.52293684381493 ,
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  // f 5/53/4 14/54/4 22/55/4 6/56/4
  0.235570986080285 , 0.0659952970107219 , -0.158711609362832 ,
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  // f 5/53/4 14/54/4 22/55/4 6/56/4
  0.235570986080285 , 0.0659952970107219 , -0.158711609362832 ,
  0.235570986080285 , -0.153202242716092 , -0.158711609362832 ,
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  // f 6/57/13 25/58/13 26/59/13 7/60/13
  0.235570986080285 , -0.153202242716092 , -0.158711609362832 ,
  0.207372455580591 , -0.166902088949018 , -0.170969957775129 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  // f 6/57/13 25/58/13 26/59/13 7/60/13
  0.235570986080285 , -0.153202242716092 , -0.158711609362832 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  // f 22/61/14 27/62/14 25/63/14 6/64/14
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  0.107828550861377 , -0.166902088949018 , -0.165816486617689 ,
  0.207372455580591 , -0.166902088949018 , -0.170969957775129 ,
  // f 22/61/14 27/62/14 25/63/14 6/64/14
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  0.235570986080285 , -0.153202242716092 , -0.158711609362832 ,
  0.207372455580591 , -0.166902088949018 , -0.170969957775129 ,
  // f 27/65/15 22/66/15 21/67/15 28/68/15
  0.107828550861377 , -0.166902088949018 , -0.165816486617689 ,
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  // f 27/65/15 22/66/15 21/67/15 28/68/15
  0.107828550861377 , -0.166902088949018 , -0.165816486617689 ,
  0.254973393307666 , -0.166902088949018 , 0.52293684381493 ,
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  // f 29/69/16 28/70/16 21/71/16 20/72/16
  -0.157987099623762 , -0.166902088949018 , 0.544316138853722 ,
  0.254973393307666 , -0.166902088949018 , 0.52293684381493 ,
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  // f 29/69/16 28/70/16 21/71/16 20/72/16
  -0.157987099623762 , -0.166902088949018 , 0.544316138853722 ,
  -0.173132279634261 , -0.153202242716092 , 0.558645493021051 ,
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  // f 20/73/17 16/74/17 30/75/17 29/76/17
  -0.173132279634261 , -0.153202242716092 , 0.558645493021051 ,
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  -0.0827523390587141 , -0.166902088949018 , -0.155949994359199 ,
  // f 20/73/17 16/74/17 30/75/17 29/76/17
  -0.173132279634261 , -0.153202242716092 , 0.558645493021051 ,
  -0.157987099623762 , -0.166902088949018 , 0.544316138853722 ,
  -0.0827523390587141 , -0.166902088949018 , -0.155949994359199 ,
  // f 31/77/18 30/78/18 16/79/18 15/80/18
  -0.182296517774852 , -0.166902088949018 , -0.150796523201759 ,
  -0.0827523390587141 , -0.166902088949018 , -0.155949994359199 ,
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  // f 31/77/18 30/78/18 16/79/18 15/80/18
  -0.182296517774852 , -0.166902088949018 , -0.150796523201759 ,
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  // f 15/81/19 7/82/19 26/83/19 31/84/19
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  // f 15/81/19 7/82/19 26/83/19 31/84/19
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  -0.182296517774852 , -0.166902088949018 , -0.150796523201759 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  // f 28/85/20 29/86/20 30/87/20
  0.254973393307666 , -0.166902088949018 , 0.52293684381493 ,
  -0.157987099623762 , -0.166902088949018 , 0.544316138853722 ,
  -0.0827523390587141 , -0.166902088949018 , -0.155949994359199 ,
  // f 30/87/20 31/88/20 26/89/20
  -0.0827523390587141 , -0.166902088949018 , -0.155949994359199 ,
  -0.182296517774852 , -0.166902088949018 , -0.150796523201759 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  // f 28/85/20 30/87/20 26/89/20
  0.254973393307666 , -0.166902088949018 , 0.52293684381493 ,
  -0.0827523390587141 , -0.166902088949018 , -0.155949994359199 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  // f 28/85/20 26/89/20 27/90/20
  0.254973393307666 , -0.166902088949018 , 0.52293684381493 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  0.107828550861377 , -0.166902088949018 , -0.165816486617689 ,
  // f 27/90/20 26/89/20 25/91/20
  0.107828550861377 , -0.166902088949018 , -0.165816486617689 ,
  -0.000807393808779627 , -0.166902088949018 , -0.418663725660278 ,
  0.207372455580591 , -0.166902088949018 , -0.170969957775129 ,
  // f 21/92/20 20/93/20 16/94/20
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  -0.173132279634261 , -0.153202242716092 , 0.558645493021051 ,
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  // f 16/94/20 15/95/20 7/96/20
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  -0.209078484174061 , -0.153202242716092 , -0.135691894736109 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  // f 21/92/20 16/94/20 7/96/20
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  -0.0979160138616282 , -0.153202242716092 , -0.141446789143174 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  // f 21/92/20 7/96/20 22/97/20
  0.271517190620085 , -0.153202242716092 , 0.535625778394328 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  // f 22/97/20 7/96/20 6/98/20
  0.124408652766314 , -0.153202242716092 , -0.152956714955767 ,
  -0.00198215562325302 , -0.153202242716092 , -0.441354506978949 ,
  0.235570986080285 , -0.153202242716092 , -0.158711609362832 ,
  // f 17/99/21 19/100/21 24/101/21
  -0.0827523390587141 , 0.0796951432436477 , -0.155950131357661 ,
  -0.157987099623762 , 0.0796951432436477 , 0.544316138853722 ,
  0.254973393307666 , 0.0796951432436477 , 0.52293684381493 ,
  // f 8/102/21 18/103/21 17/99/21
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  -0.182296517774852 , 0.0796951432436477 , -0.150796523201759 ,
  -0.0827523390587141 , 0.0796951432436477 , -0.155950131357661 ,
  // f 8/102/21 17/99/21 24/101/21
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  -0.0827523390587141 , 0.0796951432436477 , -0.155950131357661 ,
  0.254973393307666 , 0.0796951432436477 , 0.52293684381493 ,
  // f 23/104/21 8/102/21 24/101/21
  0.107828550861377 , 0.0796951432436477 , -0.165816486617689 ,
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  0.254973393307666 , 0.0796951432436477 , 0.52293684381493 ,
  // f 9/105/21 8/102/21 23/104/21
  0.207372455580591 , 0.0796951432436477 , -0.170969957775129 ,
  -0.000807393808779627 , 0.0796951432436477 , -0.418663725660278 ,
  0.107828550861377 , 0.0796951432436477 , -0.165816486617689 ,
  // f 11/106/21 12/107/21 13/108/21
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  -0.173132279634261 , 0.0659952970107219 , 0.558645493021051 ,
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  // f 4/109/21 10/110/21 11/106/21
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  -0.209078484174061 , 0.0659952970107219 , -0.135691894736109 ,
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  // f 4/109/21 11/106/21 13/108/21
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  -0.0979160138616282 , 0.0659952970107219 , -0.141446789143174 ,
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  // f 14/111/21 4/109/21 13/108/21
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  0.271517190620085 , 0.0659952970107219 , 0.535625778394328 ,
  // f 5/112/21 4/109/21 14/111/21
  0.235570986080285 , 0.0659952970107219 , -0.158711609362832 ,
  -0.00198215562325302 , 0.0659952970107219 , -0.441354506978949 ,
  0.124408652766314 , 0.0659952970107219 , -0.152956714955767 ,
};

static const float flechaNormals [558] = {
  // f 4/1/1 5/2/1 6/3/1 7/4/1
  0.765527379648853, 0, -0.643403319083731,
  0.765527379648853, 0, -0.643403319083731,
  0.765527379648853, 0, -0.643403319083731,
  // f 4/1/1 5/2/1 6/3/1 7/4/1
  0.765527379648853, 0, -0.643403319083731,
  0.765527379648853, 0, -0.643403319083731,
  0.765527379648853, 0, -0.643403319083731,
  // f 5/5/2 4/6/2 8/7/2 9/8/2
  0.541308212018559, 0.70710827695881, -0.454954178195578,
  0.541308212018559, 0.70710827695881, -0.454954178195578,
  0.541308212018559, 0.70710827695881, -0.454954178195578,
  // f 5/5/2 4/6/2 8/7/2 9/8/2
  0.541308212018559, 0.70710827695881, -0.454954178195578,
  0.541308212018559, 0.70710827695881, -0.454954178195578,
  0.541308212018559, 0.70710827695881, -0.454954178195578,
  // f 15/9/3 10/10/3 4/11/3 7/12/3
  -0.827875294984852, 0, -0.560912199861747,
  -0.827875294984852, 0, -0.560912199861747,
  -0.827875294984852, 0, -0.560912199861747,
  // f 15/9/3 10/10/3 4/11/3 7/12/3
  -0.827875294984852, 0, -0.560912199861747,
  -0.827875294984852, 0, -0.560912199861747,
  -0.827875294984852, 0, -0.560912199861747,
  // f 11/13/4 10/14/4 15/15/4 16/16/4
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  // f 11/13/4 10/14/4 15/15/4 16/16/4
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  // f 11/17/5 17/18/5 18/19/5 10/20/5
  0.0365579971369971, 0.707107944623551, 0.706159944697792,
  0.0365579971369971, 0.707107944623551, 0.706159944697792,
  0.0365579971369971, 0.707107944623551, 0.706159944697792,
  // f 11/17/5 17/18/5 18/19/5 10/20/5
  0.0365579971369971, 0.707107944623551, 0.706159944697792,
  0.0365579971369971, 0.707107944623551, 0.706159944697792,
  0.0365579971369971, 0.707107944623551, 0.706159944697792,
  // f 17/21/6 11/22/6 12/23/6 19/24/6
  -0.70749190198797, 0.702621902662633, -0.0760109894698563,
  -0.70749190198797, 0.702621902662633, -0.0760109894698563,
  -0.70749190198797, 0.702621902662633, -0.0760109894698563,
  // f 17/21/6 11/22/6 12/23/6 19/24/6
  -0.70749190198797, 0.702621902662633, -0.0760109894698563,
  -0.70749190198797, 0.702621902662633, -0.0760109894698563,
  -0.70749190198797, 0.702621902662633, -0.0760109894698563,
  // f 20/25/7 12/26/7 11/27/7 16/28/7
  -0.994278052391992, 0, -0.106823005628878,
  -0.994278052391992, 0, -0.106823005628878,
  -0.994278052391992, 0, -0.106823005628878,
  // f 20/25/7 12/26/7 11/27/7 16/28/7
  -0.994278052391992, 0, -0.106823005628878,
  -0.994278052391992, 0, -0.106823005628878,
  -0.994278052391992, 0, -0.106823005628878,
  // f 21/29/4 13/30/4 12/31/4 20/32/4
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  // f 21/29/4 13/30/4 12/31/4 20/32/4
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  // f 14/33/8 13/34/8 21/35/8 22/36/8
  0.977931681072572, 0, -0.208924931864472,
  0.977931681072572, 0, -0.208924931864472,
  0.977931681072572, 0, -0.208924931864472,
  // f 14/33/8 13/34/8 21/35/8 22/36/8
  0.977931681072572, 0, -0.208924931864472,
  0.977931681072572, 0, -0.208924931864472,
  0.977931681072572, 0, -0.208924931864472,
  // f 13/37/9 14/38/9 23/39/9 24/40/9
  0.695862079209985, 0.702620079979248, -0.148664016922426,
  0.695862079209985, 0.702620079979248, -0.148664016922426,
  0.695862079209985, 0.702620079979248, -0.148664016922426,
  // f 13/37/9 14/38/9 23/39/9 24/40/9
  0.695862079209985, 0.702620079979248, -0.148664016922426,
  0.695862079209985, 0.702620079979248, -0.148664016922426,
  0.695862079209985, 0.702620079979248, -0.148664016922426,
  // f 9/41/10 23/42/10 14/43/10 5/44/10
  0.0365579972061649, 0.707105945961552, 0.706161946033694,
  0.0365579972061649, 0.707105945961552, 0.706161946033694,
  0.0365579972061649, 0.707105945961552, 0.706161946033694,
  // f 9/41/10 23/42/10 14/43/10 5/44/10
  0.0365579972061649, 0.707105945961552, 0.706161946033694,
  0.0365579972061649, 0.707105945961552, 0.706161946033694,
  0.0365579972061649, 0.707105945961552, 0.706161946033694,
  // f 10/45/11 18/46/11 8/47/11 4/48/11
  -0.585395109157173, 0.707108131852698, -0.396624073957506,
  -0.585395109157173, 0.707108131852698, -0.396624073957506,
  -0.585395109157173, 0.707108131852698, -0.396624073957506,
  // f 10/45/11 18/46/11 8/47/11 4/48/11
  -0.585395109157173, 0.707108131852698, -0.396624073957506,
  -0.585395109157173, 0.707108131852698, -0.396624073957506,
  -0.585395109157173, 0.707108131852698, -0.396624073957506,
  // f 24/49/12 19/50/12 12/51/12 13/52/12
  0.0367889869031782, 0.702609749872027, 0.710623747019057,
  0.0367889869031782, 0.702609749872027, 0.710623747019057,
  0.0367889869031782, 0.702609749872027, 0.710623747019057,
  // f 24/49/12 19/50/12 12/51/12 13/52/12
  0.0367889869031782, 0.702609749872027, 0.710623747019057,
  0.0367889869031782, 0.702609749872027, 0.710623747019057,
  0.0367889869031782, 0.702609749872027, 0.710623747019057,
  // f 5/53/4 14/54/4 22/55/4 6/56/4
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  // f 5/53/4 14/54/4 22/55/4 6/56/4
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  0.0517009798115468, 0, 0.998662610037307,
  // f 6/57/13 25/58/13 26/59/13 7/60/13
  0.541308212018559, -0.70710827695881, -0.454954178195578,
  0.541308212018559, -0.70710827695881, -0.454954178195578,
  0.541308212018559, -0.70710827695881, -0.454954178195578,
  // f 6/57/13 25/58/13 26/59/13 7/60/13
  0.541308212018559, -0.70710827695881, -0.454954178195578,
  0.541308212018559, -0.70710827695881, -0.454954178195578,
  0.541308212018559, -0.70710827695881, -0.454954178195578,
  // f 22/61/14 27/62/14 25/63/14 6/64/14
  0.0365579972061649, -0.707105945961552, 0.706161946033694,
  0.0365579972061649, -0.707105945961552, 0.706161946033694,
  0.0365579972061649, -0.707105945961552, 0.706161946033694,
  // f 22/61/14 27/62/14 25/63/14 6/64/14
  0.0365579972061649, -0.707105945961552, 0.706161946033694,
  0.0365579972061649, -0.707105945961552, 0.706161946033694,
  0.0365579972061649, -0.707105945961552, 0.706161946033694,
  // f 27/65/15 22/66/15 21/67/15 28/68/15
  0.695861590283427, -0.702620586303796, -0.148663912468126,
  0.695861590283427, -0.702620586303796, -0.148663912468126,
  0.695861590283427, -0.702620586303796, -0.148663912468126,
  // f 27/65/15 22/66/15 21/67/15 28/68/15
  0.695861590283427, -0.702620586303796, -0.148663912468126,
  0.695861590283427, -0.702620586303796, -0.148663912468126,
  0.695861590283427, -0.702620586303796, -0.148663912468126,
  // f 29/69/16 28/70/16 21/71/16 20/72/16
  0.0367890127514787, -0.702609243532135, 0.710624246310223,
  0.0367890127514787, -0.702609243532135, 0.710624246310223,
  0.0367890127514787, -0.702609243532135, 0.710624246310223,
  // f 29/69/16 28/70/16 21/71/16 20/72/16
  0.0367890127514787, -0.702609243532135, 0.710624246310223,
  0.0367890127514787, -0.702609243532135, 0.710624246310223,
  0.0367890127514787, -0.702609243532135, 0.710624246310223,
  // f 20/73/17 16/74/17 30/75/17 29/76/17
  -0.707490905432881, -0.702622906083564, -0.0760109898399537,
  -0.707490905432881, -0.702622906083564, -0.0760109898399537,
  -0.707490905432881, -0.702622906083564, -0.0760109898399537,
  // f 20/73/17 16/74/17 30/75/17 29/76/17
  -0.707490905432881, -0.702622906083564, -0.0760109898399537,
  -0.707490905432881, -0.702622906083564, -0.0760109898399537,
  -0.707490905432881, -0.702622906083564, -0.0760109898399537,
  // f 31/77/18 30/78/18 16/79/18 15/80/18
  0.0365579971716175, -0.707106945293259, 0.706160945366448,
  0.0365579971716175, -0.707106945293259, 0.706160945366448,
  0.0365579971716175, -0.707106945293259, 0.706160945366448,
  // f 31/77/18 30/78/18 16/79/18 15/80/18
  0.0365579971716175, -0.707106945293259, 0.706160945366448,
  0.0365579971716175, -0.707106945293259, 0.706160945366448,
  0.0365579971716175, -0.707106945293259, 0.706160945366448,
  // f 15/81/19 7/82/19 26/83/19 31/84/19
  -0.585395109157173, -0.707108131852698, -0.396624073957506,
  -0.585395109157173, -0.707108131852698, -0.396624073957506,
  -0.585395109157173, -0.707108131852698, -0.396624073957506,
  // f 15/81/19 7/82/19 26/83/19 31/84/19
  -0.585395109157173, -0.707108131852698, -0.396624073957506,
  -0.585395109157173, -0.707108131852698, -0.396624073957506,
  -0.585395109157173, -0.707108131852698, -0.396624073957506,
  // f 28/85/20 29/86/20 30/87/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 30/87/20 31/88/20 26/89/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 28/85/20 30/87/20 26/89/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 28/85/20 26/89/20 27/90/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 27/90/20 26/89/20 25/91/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 21/92/20 20/93/20 16/94/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 16/94/20 15/95/20 7/96/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 21/92/20 16/94/20 7/96/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 21/92/20 7/96/20 22/97/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 22/97/20 7/96/20 6/98/20
  0, -1, 0,
  0, -1, 0,
  0, -1, 0,
  // f 17/99/21 19/100/21 24/101/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 8/102/21 18/103/21 17/99/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 8/102/21 17/99/21 24/101/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 23/104/21 8/102/21 24/101/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 9/105/21 8/102/21 23/104/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 11/106/21 12/107/21 13/108/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 4/109/21 10/110/21 11/106/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 4/109/21 11/106/21 13/108/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 14/111/21 4/109/21 13/108/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
  // f 5/112/21 4/109/21 14/111/21
  0, 1, 0,
  0, 1, 0,
  0, 1, 0,
};

static const float flechaTexCoords [372] = {
  // f 4/1/1 5/2/1 6/3/1 7/4/1
  0.979656, 0.030229,
  0.888804, 0.038097,
  0.861393, 0.948434,
  // f 4/1/1 5/2/1 6/3/1 7/4/1
  0.979656, 0.030229,
  0.978079, 0.937566,
  0.861393, 0.948434,
  // f 5/5/2 4/6/2 8/7/2 9/8/2
  0.951562, 0.597608,
  0.973141, 0.597041,
  0.977959, 0.410924,
  // f 5/5/2 4/6/2 8/7/2 9/8/2
  0.951562, 0.597608,
  0.953929, 0.410924,
  0.977959, 0.410924,
  // f 15/9/3 10/10/3 4/11/3 7/12/3
  0.849836, 0.030002,
  0.830636, 0.959905,
  0.989576, 0.967905,
  // f 15/9/3 10/10/3 4/11/3 7/12/3
  0.849836, 0.030002,
  0.983176, 0.014002,
  0.989576, 0.967905,
  // f 11/13/4 10/14/4 15/15/4 16/16/4
  0.994108, 0.50129,
  0.938980, 0.50129,
  0.938980, 0.609851,
  // f 11/13/4 10/14/4 15/15/4 16/16/4
  0.994108, 0.50129,
  0.994108, 0.609851,
  0.938980, 0.609851,
  // f 11/17/5 17/18/5 18/19/5 10/20/5
  0.994873, 0.514707,
  0.996701, 0.371453,
  0.960904, 0.340389,
  // f 11/17/5 17/18/5 18/19/5 10/20/5
  0.994873, 0.514707,
  0.951720, 0.551964,
  0.960904, 0.340389,
  // f 17/21/6 11/22/6 12/23/6 19/24/6
  0.996342, 0.48618,
  0.998021, 0.404976,
  0.005947, 0.420072,
  // f 17/21/6 11/22/6 12/23/6 19/24/6
  0.996342, 0.48618,
  0.004030, 0.486939,
  0.005947, 0.420072,
  // f 20/25/7 12/26/7 11/27/7 16/28/7
  0.005106, 0.990374,
  0.009790, 0.00382000000000005,
  0.993700, 0.0140439999999999,
  // f 20/25/7 12/26/7 11/27/7 16/28/7
  0.005106, 0.990374,
  0.996078, 0.987608,
  0.993700, 0.0140439999999999,
  // f 21/29/4 13/30/4 12/31/4 20/32/4
  0.164416, 0.959597,
  0.156669, 0.021374,
  0.020426, 0.013012,
  // f 21/29/4 13/30/4 12/31/4 20/32/4
  0.164416, 0.959597,
  0.013629, 0.967182,
  0.020426, 0.013012,
  // f 14/33/8 13/34/8 21/35/8 22/36/8
  1.002615, 0.022709,
  0.004449, -0.00157099999999999,
  0.006894, 0.990538,
  // f 14/33/8 13/34/8 21/35/8 22/36/8
  1.002615, 0.022709,
  1.007097, 0.981898,
  0.006894, 0.990538,
  // f 13/37/9 14/38/9 23/39/9 24/40/9
  -0.010488, 0.503919,
  0.977360, 0.503919,
  0.999862, 0.476907,
  // f 13/37/9 14/38/9 23/39/9 24/40/9
  -0.010488, 0.503919,
  0.011770, 0.476907,
  0.999862, 0.476907,
  // f 9/41/10 23/42/10 14/43/10 5/44/10
  0.987207, 0.259154,
  0.916133, 0.259154,
  0.901068, 0.511707,
  // f 9/41/10 23/42/10 14/43/10 5/44/10
  0.987207, 0.259154,
  0.990627, 0.498907,
  0.901068, 0.511707,
  // f 10/45/11 18/46/11 8/47/11 4/48/11
  0.973707, 0.570941,
  0.974131, 0.431381,
  0.966802, 0.431381,
  // f 10/45/11 18/46/11 8/47/11 4/48/11
  0.973707, 0.570941,
  0.965840, 0.570941,
  0.966802, 0.431381,
  // f 24/49/12 19/50/12 12/51/12 13/52/12
  0.050606, 0.441099,
  0.010022, 0.430859,
  0.006462, 0.542102,
  // f 24/49/12 19/50/12 12/51/12 13/52/12
  0.050606, 0.441099,
  0.041879, 0.531862,
  0.006462, 0.542102,
  // f 5/53/4 14/54/4 22/55/4 6/56/4
  0.984831, 0.33467,
  0.924838, 0.33467,
  0.924838, 0.45281,
  // f 5/53/4 14/54/4 22/55/4 6/56/4
  0.984831, 0.33467,
  0.984831, 0.45281,
  0.924838, 0.45281,
  // f 6/57/13 25/58/13 26/59/13 7/60/13
  0.975434, 0.409036,
  0.977673, 0.54237,
  0.989497, 0.541672,
  // f 6/57/13 25/58/13 26/59/13 7/60/13
  0.975434, 0.409036,
  0.988682, 0.410432,
  0.989497, 0.541672,
  // f 22/61/14 27/62/14 25/63/14 6/64/14
  0.893468, 0.44351,
  0.858651, 0.551116,
  0.986850, 0.545996,
  // f 22/61/14 27/62/14 25/63/14 6/64/14
  0.893468, 0.44351,
  0.965447, 0.44863,
  0.986850, 0.545996,
  // f 27/65/15 22/66/15 21/67/15 28/68/15
  1.000184, 0.441276,
  0.978064, 0.414723,
  0.006992, 0.414723,
  // f 27/65/15 22/66/15 21/67/15 28/68/15
  1.000184, 0.441276,
  0.028873, 0.441276,
  0.006992, 0.414723,
  // f 29/69/16 28/70/16 21/71/16 20/72/16
  0.007794, 0.672966,
  0.040784, 0.679459,
  0.047776, 0.581461,
  // f 29/69/16 28/70/16 21/71/16 20/72/16
  0.007794, 0.672966,
  0.014364, 0.577365,
  0.047776, 0.581461,
  // f 20/73/17 16/74/17 30/75/17 29/76/17
  0.003105, 0.562597,
  0.990801, 0.543401,
  0.995396, 0.484927,
  // f 20/73/17 16/74/17 30/75/17 29/76/17
  0.003105, 0.562597,
  0.000891, 0.512477,
  0.995396, 0.484927,
  // f 31/77/18 30/78/18 16/79/18 15/80/18
  0.914297, 0.767577,
  0.988868, 0.783202,
  0.980768, 0.213542,
  // f 31/77/18 30/78/18 16/79/18 15/80/18
  0.914297, 0.767577,
  0.886219, 0.197917,
  0.980768, 0.213542,
  // f 15/81/19 7/82/19 26/83/19 31/84/19
  0.990058, 0.645704,
  0.987475, 0.437989,
  0.980626, 0.448322,
  // f 15/81/19 7/82/19 26/83/19 31/84/19
  0.990058, 0.645704,
  0.982889, 0.630353,
  0.980626, 0.448322,
  // f 28/85/20 29/86/20 30/87/20
  0.004441, 0.141996,
  0.008478, 0.735165,
  0.986621, 0.577952,
  // f 30/87/20 31/88/20 26/89/20
  0.986621, 0.577952,
  0.995459, 0.717658,
  0.991583, 0.410927,
  // f 28/85/20 30/87/20 26/89/20
  0.004441, 0.141996,
  0.986621, 0.577952,
  0.991583, 0.410927,
  // f 28/85/20 26/89/20 27/90/20
  0.004441, 0.141996,
  0.991583, 0.410927,
  0.990001, 0.291098,
  // f 27/90/20 26/89/20 25/91/20
  0.990001, 0.291098,
  0.991583, 0.410927,
  0.989027, 0.141562,
  // f 21/92/20 20/93/20 16/94/20
  0.002087, 0.192898,
  0.009721, 0.82039,
  0.991521, 0.676545,
  // f 16/94/20 15/95/20 7/96/20
  0.991521, 0.676545,
  0.990176, 0.833515,
  1.408232, 0.525136,
  // f 21/92/20 16/94/20 7/96/20
  0.002087, 0.192898,
  0.991521, 0.676545,
  1.408232, 0.525136,
  // f 21/92/20 7/96/20 22/97/20
  0.002087, 0.192898,
  1.408232, 0.525136,
  0.994211, 0.362606,
  // f 22/97/20 7/96/20 6/98/20
  0.994211, 0.362606,
  1.408232, 0.525136,
  0.995556, 0.205636,
  // f 17/99/21 19/100/21 24/101/21
  0.997018, 0.342664,
  0.010655, 0.184749,
  0.010655, 0.771248,
  // f 8/102/21 18/103/21 17/99/21
  0.989519, 0.482979,
  0.918506, -0.000234000000000067,
  0.997018, 0.342664,
  // f 8/102/21 17/99/21 24/101/21
  0.989519, 0.482979,
  0.997018, 0.342664,
  0.010655, 0.771248,
  // f 23/104/21 8/102/21 24/101/21
  0.997018, 0.613333,
  0.989519, 0.482979,
  0.010655, 0.771248,
  // f 9/105/21 8/102/21 23/104/21
  0.926894, 0.956231,
  0.989519, 0.482979,
  0.997018, 0.613333,
  // f 11/106/21 12/107/21 13/108/21
  50.750000, -23.375,
  0.000000, -31.5,
  0.000000, 1,
  // f 4/109/21 10/110/21 11/106/21
  72.250000, -15.25,
  50.750000, -31.5,
  50.750000, -23.375,
  // f 4/109/21 11/106/21 13/108/21
  72.250000, -15.25,
  50.750000, -23.375,
  0.000000, 1,
  // f 14/111/21 4/109/21 13/108/21
  50.750000, -7.125,
  72.250000, -15.25,
  0.000000, 1,
  // f 5/112/21 4/109/21 14/111/21
  50.750000, 1,
  72.250000, -15.25,
  50.750000, -7.125,
};

#endif
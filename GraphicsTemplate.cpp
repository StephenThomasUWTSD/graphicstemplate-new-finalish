// GraphicsTemplate.cpp
// 
//////////////////////////////////////////////////////////////////////////////////////////
// includes 
//////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"

//#include "cMyMatrix.h"
//////////////////////////////////////////////////////////////////////////////////////////
// externals 
//////////////////////////////////////////////////////////////////////////////////////////
extern cRenderClass graphics;
vector<cRenderClass::Point> cloud;
//////////////////////////////////////////////////////////////////////////////////////////
// update() - update function
//////////////////////////////////////////////////////////////////////////////////////////
 void renderScene()
 {
	// set pixel size..
	 graphics.setPointSize(4);
	 
	// set a colour
	graphics.setColour(1, 1, 1);

	//graphics.runOnce = 0;
	//vector<cRenderClass::Point> cloud = graphics.pointCloud(200);
	
	graphics.drawCloud(cloud);
	//graphics.runOnce = 1;
	/*
	cRenderClass::Point leftMostX(graphics.points);
	cRenderClass::Point jarvisMarchHull2(graphics.points);
	cRenderClass::Point turnParam(graphics.points);
	cRenderClass::Point drawConvex(graphics.points);
	cRenderClass::Point generateConvex2(graphics.points);
	*/
	// draw to an off screen buffer
	//graphics.drawPixel( 250, 250 );
	//graphics.midPoint(222, 222, 50);
	//
	// render the scene

	graphics.render();
}
//extern void update();
void update()
{
	// add any update code here...

	// always re-render the scene..
	renderScene();
}

//////////////////////////////////////////////////////////////////////////////////////////
// _tmain() - program entry point
//////////////////////////////////////////////////////////////////////////////////////////
int _tmain(int argc, _TCHAR* argv[])
{
	// init glut stuff..
	graphics.create(argc, argv);
	cloud = graphics.pointCloud(200);
	//graphics.setColour(1, 1, 1);
	//vector<cRenderClass::Point> cloud = graphics.pointCloud(200);
	//graphics.drawCloud(cloud); 
	// good place for one-off initialisations and objects creation..
	
	// enter game loop..
	graphics.loop();	

	return 0;
}





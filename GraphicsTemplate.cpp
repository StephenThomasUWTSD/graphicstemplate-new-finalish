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
//cMyMatrix MyMatrix;
cMyMatrix matrix;
vector<cRenderClass::Point> cloud,points;
//////////////////////////////////////////////////////////////////////////////////////////
// update() - update function
//////////////////////////////////////////////////////////////////////////////////////////
 void renderScene()
 {
	// set pixel size..
	 graphics.setPointSize(4);
	 
	// set a colour
	graphics.setColour(1, 1, 1);
	//matrix.identity();
	//matrix.translation();
	//graphics.bresenhamTriangleAlgorithm(400, 20, 360, 200, 480, 100);
	//matrix.matrixByVector();

	//graphics.runOnce = 0;
	//vector<cRenderClass::Point> cloud = graphics.pointCloud(200);
	//graphics.DDALine(10, 30, 50, 20);
	//graphics.drawCloud(cloud);
	//graphics.jarvisMarchHull2(vector<cRenderClass::Point>&points);
	graphics.jarvisMarchHull2(points);
	// draw to an off screen buffer
	//graphics.drawPixel( 250, 250 );
	//graphics.midPoint(222, 222, 50);
	//
	// render the scene
	
	
	//graphics.orientation(points);
	//graphics.jarvisMarchHull2(points);
	//MyMatrix.uScale(2.0);
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
	points = graphics.pointCloud(200);
	//graphics.setColour(1, 1, 1);
	//vector<cRenderClass::Point> cloud = graphics.pointCloud(200);
	//graphics.drawCloud(cloud); 
	// good place for one-off initialisations and objects creation..
	
	// enter game loop..
	graphics.loop();	

	return 0;
}





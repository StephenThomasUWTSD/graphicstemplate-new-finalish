//http://www.sanfoundry.com/cpp-program-implement-jarvis-march-find-convex-hull/
//http://rosettacode.org/wiki/Bitmap/Midpoint_circle_algorithm
#include <vector>
using std::vector;

class cRenderClass // be nice if it said redefinition from where
{
public:
	float Dx;
	float Dy;
	float M;

	struct Point
	{
		GLfloat x, y, z, w, xe, ye;
	} points, hull, cloud;

	cRenderClass(const int, const int);
	~cRenderClass();

	void create(int argc, _TCHAR* argv[]);
	void loop();

	void clear();
	void render();
	void setColour(float, float, float);
	void setPointSize(int);
	void drawPixel(int, int);
	void line(int,int,int,int);
	void bresenhamsLine(float x1, float y1, float x2, float y2);
	void bresenhamsLineorig(int x1, int y1, int x2, int y2);
	void DDALine(float, float, float, float);
	void midPoint(int Radius, int xC, int yC);
	void draw(int, int, int, int);
	void generateConvex2(vector<Point>& points);
	void leftMostX(vector<Point>& points);
	void turnParam(vector<Point>& points);
	int orientation(Point p, Point q, Point r);
	void generateConvex(vector<Point>& points);
	void drawConvex(vector<Point>& points);
	void triangle(int,int,int,int,int,int);
	void fillAlgorithm(int x, int y, int old, int fill);
	vector<Point>pointCloud(int);
	void drawCloud(vector<Point>& points);
	void bresenhamTriangleAlgorithm(float x1, float y1, float x2, float y2, float x3, float y3);
	//vector<cRenderClass::Point>
	void jarvisMarchHull2(vector<Point>& points);
	
private:
	sRGB	m_colour;
	int		 m_sw, m_sh;
	int		 m_point_size;
	float	*m_buffer;
};


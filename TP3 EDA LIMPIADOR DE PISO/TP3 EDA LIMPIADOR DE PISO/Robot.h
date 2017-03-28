#ifndef ROBOT_H
#define ROBOT_H

#include "Point.h"

using namespace std;

class Robot
{
public:
	Robot(unsigned xMax, unsigned yMax, double angle);
	void moveRobotToPoint(Point& P);
	void moveRobot();
	double getX();
	double getY();

private:
	piso p1;
	Point robotCoords;
	double angle;
	unsigned xMax;
	unsigned yMax;
};

#endif // !ROBOT_H
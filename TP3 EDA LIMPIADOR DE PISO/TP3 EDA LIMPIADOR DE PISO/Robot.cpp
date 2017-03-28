#include <cmath>
#include <time.h>
#include <stdlib.h>

#include "Piso.h"
#include "Robot.h"

#define	PI       3.14159265358979323846

Robot::Robot(unsigned xMax, unsigned yMax, double angle)
{
	srand(time(NULL));
	angle = rand();
}

void Robot::moveRobotToPoint(Point& P)
{
	robotCoords.x = P.getX();
	robotCoords.y = P.getY();

	return;
}

void Robot::moveRobot()
{
	robotCoords.x += sin(angle);
	robotCoords.y += cos(angle);

	if (robotCoords.x >= xMax || robotCoords.y >= yMax)
	{
		srand(time(NULL));
		angle = rand() * PI;
		moveRobot();
	}
	else
		p1.limpiar_baldosa((unsigned)robotCoords.x, (unsigned)robotCoords.y);

	return;
}

double Robot::getX()
{
	return robotCoords.x;
}

double Robot::getY()
{
	return robotCoords.y;
}
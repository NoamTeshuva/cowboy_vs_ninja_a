#include "Point.hpp"
#include <cmath>


namespace ariel{

Point :: Point  (double numX, double numY)
{
    this->x=numX;
    this->y=numY;
}

double  Point::distance(Point checkPoint)
{
        double deltaX = checkPoint.x - this->x;
        double deltaY = checkPoint.y - this->y;
        return std::sqrt(deltaX * deltaX + deltaY * deltaY);
}

void Point:: print()
{
    return;
}

Point Point ::moveTowards (Point source, Point destination, double dist){
    Point a(0,0);
    return a;
}

  double Point::getX()
    {
        return x;
    }

    double Point::getY()
    {
        return y;
    }


}
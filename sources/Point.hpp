#pragma once    
#include <string>
using namespace std;

namespace ariel {
class Point{

protected:
double x;
double y;

public:
Point (double numX, double numY);
double distance (Point checkPoint);
void print();
Point moveTowards (Point source, Point destination, double dist);
double getX();
double getY();

};
}
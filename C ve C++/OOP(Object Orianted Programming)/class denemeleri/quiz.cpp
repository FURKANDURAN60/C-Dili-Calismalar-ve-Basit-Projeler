#include <iostream>
#include <cmath> 

#define pi 3.14

using namespace std;

class Point
{
private:
    double x, y;

public:
    Point(double x = 0, double y = 0)
    {
        this->x = x;
        this->y = y;
    }

    double getX()  { return x; }
    double getY()  { return y; }

    void setX(double newX) { x = newX; }
    void setY(double newY) { y = newY; }   
};

class Circle
{
private:
    double radius;
    Point center;

public:
    Circle(double radius = 0,  Point center = Point(0,0))
    {
        this->radius = radius;
        this->center = center;
    }

    double getRadius()  { return radius; }
    void setRadius(double newRadius) { radius = newRadius; }

    Point getCenter()  { return center; }
    void setCenter(Point newCenter) { center = newCenter; }

    double distance(Point p) 
    {
        double xDiff = center.getX() - p.getX();
        double yDiff = center.getY() - p.getY();
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }
};

int main()  
{
    Point point(10, 10);
    Circle circle(10, point);

    cout << "Merkez ile nokta arasindaki uzaklik : " << circle.distance(Point(10, 10)) << endl;
    return 0;
}

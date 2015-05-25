#include "Shape.h"
#include<string>
using namespace std;
const int pi = 3.1416;

Shape::Shape(int w = 0, int h = 0, string n = "Shape")
{
	width = w;
	height = h;
	nameS = n;
}
Shape::~Shape(){}

Circle::Circle(int w=0, int h=0, string n = "Circle") : Shape(w, h, n){};
string Circle::name()
{
	return (nameS);
}
float Circle::area()
{
	return(pi*width*width);
}
float Circle::perimeter()
{
	return (2 * pi*width);
}
float Circle::draw(){}

Rectangle::Rectangle(int w = 0, int h = 0, string n = "Rectangle") : Shape(w, h, n){};
string Rectangle::name()
{
	return(nameS);
}
float Rectangle::area()
{
	return(height*width);
}
float Rectangle::perimeter()
{
	return (2 * height*width);
}
float Rectangle::draw(){}

Triangle::Triangle(int w, int h, string n = "Triangle") : Shape(w, h, n){};
string Triangle::name()
{
	return(nameS);
}
float Triangle::area()
{
	return(width*height / 2);
}
float Triangle::perimeter()
{
	return (2*height+width); //this formula is incorrect
}
float Triangle::draw(){}




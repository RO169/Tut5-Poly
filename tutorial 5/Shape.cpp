#include "Shape.h"
#include<string>
using namespace std;
float pi = 3.14;

Shape::Shape(float w = 0, float h = 0, string n = "Shape")
{
	width = w;
	height = h;
	nameS = n;
}

Shape::~Shape(){}

Circle::Circle(float w=0, float h=0, string n = "Circle") : Shape(w, h, n){};
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
float Circle::draw(){ return 0; }

Rectangle::Rectangle(float w = 0, float h = 0, string n = "Rectangle") : Shape(w, h, n){};
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
	return (2 * (height+width));
}
float Rectangle::draw(){ return 0; }

Triangle::Triangle(float w, float h, string n = "Triangle") : Shape(w, h, n){};
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
	return (2*(height+width)); //this formula is incorrect
}
float Triangle::draw(){ return 0; }




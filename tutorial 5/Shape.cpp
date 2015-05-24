#include "Shape.h"
#include<string>
//using namespace std;
const int pi = 3.1416;

Shape::Shape(int w = 0, int h = 0, string n = 'Shape')
{

}

string Circle::name()
{

}

Circle::Circle(int w, int h, string n) : Shape(w, h){};
float Circle::area()
{

}
float Circle::perimeter()
{

}
float Circle::draw(){}

Rectangle(int w, int h, string n) : Shape(w, h){};
string Rectangle::name(){}
float Rectangle::area(){}
float Rectangle::perimeter(){}
float Rectangle::draw(){}

Rectangle(int w, int h, string n) : Shape(w, h){};
string Triangle::name(){}
float Triangle::area(){}
float Triangle::perimeter(){}
float Triangle::draw(){}


Shape::~Shape(){}

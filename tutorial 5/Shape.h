#pragma once
#ifndef Shape_H
#define Shape_H
#include<string>
using namespace std;

class Shape
{
protected:
	int width;
	int height;

public:
	Shape(int w, int h);
	
	virtual string name() = 0;
	virtual float area() = 0;
	virtual float perimeter() = 0;
	virtual float draw() = 0;
 
	~Shape();
};

#endif


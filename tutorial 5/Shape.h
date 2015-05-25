#pragma once
#ifndef Shape_H
#define Shape_H
#include<string>
using namespace std;

class Shape
{
protected:
	float width;
	float height;
	string nameS;

public:
	Shape(float w, float h, string n);
	virtual string name() = 0;
	virtual float area() = 0;
	virtual float perimeter() = 0;
	virtual float draw() = 0;
 	~Shape();
};

class Circle : public Shape
{
public:
	Circle(float w, float h, string n);
	string name();
	float area();
	float perimeter();
	float draw();
};

class Rectangle : public Shape
{
public:
	Rectangle(float w, float h, string n);
	string name();
	float area();
	float perimeter();
	float draw();
};

class Triangle : public Shape
{
public:
	Triangle(float w, float h, string n);
	string name();
	float area();
	float perimeter();
	float draw();
};

#endif


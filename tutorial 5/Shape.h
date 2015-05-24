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
	string nameS;

public:
	Shape(int w, int h, string n);
	virtual string name() = 0;
	virtual float area() = 0;
	virtual float perimeter() = 0;
	virtual float draw() = 0;
 	~Shape();
};

class Circle : public Shape
{
public:
	Circle(int w, int h, string n) : Shape(w, h, n){};
	string name();
	float area();
	float perimeter();
	float draw();
};

class Rectangle : public Shape
{
public:
	Rectangle(int w, int h, string n) : Shape(w, h, n){};
	string name();
	float area();
	float perimeter();
	float draw();
};

class Triangle : public Shape
{
public:
	Triangle(int w, int h, string n) : Shape(w, h, n){};
	string name();
	float area();
	float perimeter();
	float draw();
};

#endif


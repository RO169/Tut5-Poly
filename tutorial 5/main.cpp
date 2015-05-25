#include<iostream>
#include"Shape.h"
using namespace std;


int main()
{
	Shape *shapeArray[10];
	Rectangle rect(4,5, "Rectangle");
	Circle circ(2, 0, "Circle");
	Triangle tri(3, 2, "Triangle");

	for (int i = 0; i < 3; i++)
	{
		shapeArray[i] = &rect;
	}

	for (int i = 3; i < 6; i++)
	{
		shapeArray[i] = &circ;
	}

	for (int i = 6; i < 9; i++)
	{
		shapeArray[i] = &tri;
	}

	cout << "The Shapes are:\n" << shapeArray[0]->name() << endl << shapeArray[3]->name() << endl << shapeArray[6]->name();
	cout << "\n\nThe Areas are:\n" << shapeArray[1]->area() << endl << shapeArray[4]->area() << endl << shapeArray[7]->area();
	cout << "\n\nThe perimters are:\n" << shapeArray[2]->perimeter() << endl << shapeArray[5]->perimeter()
		 << endl << shapeArray[8]->perimeter() << "\n\n\n\n";

	system("PAUSE");
	return 0;
}
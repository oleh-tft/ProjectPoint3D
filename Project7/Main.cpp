#include<iostream>
#include "Point3D.h"
using namespace std;

int main()
{
	Point3D a(2, 2, 21);
	Point3D b(1, 3, 5);
	a.Div(0, 10, 15);
	a.Output();
}
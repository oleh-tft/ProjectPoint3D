#include<iostream>
#include "Point3D.h"
using namespace std;

int main()
{
	cout << "Point count: " << Point3D::GetCount() << endl;

	Point3D a(2, 2, 21);
	Point3D b(1, 3, 5);
	a.Mult(0, 10, 15);
	a.Output();

	{
		Point3D c(5, 1, 32);
		Point3D d(1, 1, 10);
		Point3D e(10, 1, 10);
		cout << "Point count: " << Point3D::GetCount() << endl;
	}
	cout << "Point count: " << a.GetCount() << endl;
}
#include<iostream>
#include "Point3D.h"
using namespace std;

Point3D::Point3D()
{
	x = y = z = 0;
}

Point3D::Point3D(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point3D::Init(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Point3D Point3D::Sum(Point3D& b)
{
	return Point3D(x + b.x, y + b.y, z + b.z);
}

Point3D Point3D::Mult(Point3D& b)
{
	return Point3D(x * b.x, y * b.y, z * b.z);
}

Point3D& Point3D::Sum(int x, int y, int z)
{
	this->x += x;
	this->y += y;
	this->z += z;
	return *this;
}

Point3D& Point3D::Mult(int x, int y, int z)
{
	this->x *= x;
	this->y *= y;
	this->z *= z;
	return *this;
}

Point3D& Point3D::Min(int x, int y, int z)
{
	this->x -= x;
	this->y -= y;
	this->z -= z;
	return *this;
}

Point3D& Point3D::Div(int x, int y, int z)
{
	if (x == 0 || y == 0 || z == 0)
	{
		cout << "Don't divide by 0" << endl;
		return *this;
	}
	this->x /= x;
	this->y /= y;
	this->z /= z;
	return *this;
}

void Point3D::Output()
{
	cout << "x= " << x << "\ty= " << y << "\tz= " << z << endl;
}

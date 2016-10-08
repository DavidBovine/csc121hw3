#include <iostream>
#include <cmath>
#include <string>
#include "shapes.h"
#include "readNum.h"

using namespace std;

void cube()
{
	double e=readDouble("What is the length of the side of the cube? ",0.0);
	double area=e*e*6;
	double volume=pow(e,3);
	cout<<"Area:	"<<area<<endl;
	cout<<"Volume:	"<<volume<<endl;
	EtoC();
}

void sphere()
{
	double r=readDouble("What is the radius of the sphere? ",0.0);
	double area=4*M_PI*r*r;
	double volume=4/3*M_PI*pow(r,3);
	cout<<"Area:	"<<area<<endl;
	cout<<"Volume:	"<<volume<<endl;
	EtoC();
}

void cylinder()
{
	double r=readDouble("What is the radius of the cylinder? ",0.0);
	double h=readDouble("What is the height of the cylinder? ",0.0);
	double area=2*M_PI*r*h+2*M_PI*r*r;
	double volume=h*M_PI*r*r;
	cout<<"Area:	"<<area<<endl;
	cout<<"Volume:	"<<volume<<endl;
	EtoC();
}

void cone()
{
	double r=readDouble("What is the radius of the cone? ",0.0);
	double h=readDouble("What is the height of the cone? ",0.0);
	double area=M_PI*r*(r+sqrt(h*h+r*r));
	double volume=h/3*M_PI*r*r;
	cout<<"Area:	"<<area<<endl;
	cout<<"Volume:	"<<volume<<endl;
	EtoC();
}

void rectangle()
{
	double h=readDouble("What is the height of the rectangle? ",0.0);
	double l=readDouble("What is the length of the rectangle? ",0.0);
	double w=readDouble("What is the width of the rectangle? ",0.0);
	double area=2*h*l+2*h*w+2*w*l;
	double volume=h*w*l;
	cout<<"Area:	"<<area<<endl;
	cout<<"Volume:	"<<volume<<endl;
	EtoC();
}
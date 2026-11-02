#include <iostream>
using namespace std; 

const double pi = 3.14159;
double cylinderVolume(double radius, double height)
{
	double radiusSquared = radius * radius;
	double circularBase = pi * radiusSquared;

	return circularBase * height;
}

int main()
{
	double radius, height;
	cout << "Enter the radius of the cylinder: ";
	cin >> radius;
	cout << "Enter the height of the cylinder: ";
	cin >> height;
	double answer = cylinderVolume(radius, height);
	cout << "The volume of the cylinder is: " << answer << endl;
	return 0;
 }
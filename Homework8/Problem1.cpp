#include <iostream>
using namespace std;

double product(double first, double second)
{
	double answer = first * second;
	return answer;
}
int main()
{
	double num1, num2;
	for (int round = 1; round <= 5; round++)
	{
		cout << "Round " << round << endl;
		cout << "Give Me Two Numbers: ";
		cin >> num1 >> num2;

		cout << "The Product Is "
			<< product(num1, num2) << endl;
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

double add(double num1, double num2) {
	double result = num1 + num2;
	return result;
};
int main()
{
	double number1;
	double number2;

	cout << "Enter #1:";
	cin >> number1;

	cout <<"Enter #2:";
	cin >> number2;
	
	double result = add(number1, number2);
	cout << "The sum of the two numbers is: " << result << endl;

	return 0;
   
}


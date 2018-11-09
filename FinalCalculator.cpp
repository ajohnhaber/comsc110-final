#include <iostream>
#include <cmath>
using namespace std;

void addition(double, double);
void subtraction(double, double);
void multiplication(double, double);
void division(double, double);
void trig();

int main()
{
	char repeat = 'y';
	while (repeat == 'y')
	{
		int selection;
		double num1, num2;

		cout << "C++ Calculator" << endl
			<< endl
			<< "Please choose one of the following options:" << endl
			<< "1. Addition" << endl
			<< "2. Subtraction" << endl
			<< "3. Multiplication" << endl
			<< "4. Division" << endl
			<< "5. Trig Functions" << endl
			<< "6. Logs/exponentials" << endl
			<< "7. Square root" << endl;
		cin >> selection;
		switch (selection)
		{
		case 1: cout << "Please enter two numbers to add each seperated by a space:" << endl;
			cin >> num1 >> num2;
			addition(num1, num2);
			break;
		case 2: cout << "Please enter two numbers to subtract each seperated by a space:" << endl;
			cin >> num1 >> num2;
			subtraction(num1, num2);
			break;
		case 3: cout << "Please enter two numbers to multiply each seperated by a space:" << endl;
			cin >> num1 >> num2;
			multiplication(num1, num2);
			break;
		case 4: cout << "Please enter two numbers to divide each seperated by a space:" << endl;
			cin >> num1 >> num2;
			division(num1, num2);
			break;
		case 5: trig();
			break;
		case 8: cout << "cool";
			break;
		case 7: cout << "cool";
			break;
		default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl;
			cin >> selection;
		}
		cout << "Would you like to return to the main menu? y or n" << endl;
		cin >> repeat;
	}
}

void addition(double a, double b)
{
	cout << a << " + " << b << " = " << a + b << endl;
}
void subtraction(double a, double b)
{
	cout << a << " - " << b << " = " << a - b << endl;
}
void multiplication(double a, double b)
{
	cout << a << " * " << b << " = " << a * b << endl;
}
void division(double a, double b)
{
	cout << a << " / " << b << " = " << a / b << endl;
}
void trig()
{
	int selectionTrig;
	double num;
	double pi = 3.141592653589;

	cout << "Welcome to the trig menu! Please choose one of the following options:" << endl
		<< "1. sin" << endl
		<< "2. cos" << endl
		<< "3. tan" << endl
		<< "4. csc" << endl
		<< "5. sec" << endl
		<< "6. cot" << endl;
	cin >> selectionTrig;
	switch (selectionTrig)
	{
	case 1: cout << "Please enter a number to find the sin of:" << endl;
			cin >> num;
		cout << "sin(" << num << ") = " << sin((num*pi) / 180) << endl;
		break;
	case 2: cout << "Please enter a number to find the cos of:" << endl;
		cin >> num;
		cout << "cos(" << num << ") = " << cos((num*pi) / 180) << endl;
		break;
	case 3:cout << "Please enter a number to find the tan of:" << endl;
		cin >> num;
		cout << "tan(" << num << ") = " << tan((num*pi) / 180) << endl;
		break;
	case 4:cout << "filler line" << endl;
		break;
	case 5:cout << "filler line" << endl;
		break;
	case 6:cout << "filler line" << endl;
		break;
	default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl;
		cin >> selectionTrig;

	}

}

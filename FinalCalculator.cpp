#include <iostream>
#include <cmath>
using namespace std;

void addition(double, double);
void subtraction(double, double);
void multiplication(double, double);
void division(double, double);
void trig();
void expslogs();

int main()
{
	char repeat = 'y';
	while (repeat == 'y') // This loop allows the user to do more than one operation before closing the program
	{
		int selection;
		double num1, num2;

		cout << "                C++ Calculator                " << endl
			<< " ____________________________________________" << endl
			<< "|Please choose one of the following options: |" << endl
			<< "|1. Addition                                 |" << endl
			<< "|2. Subtraction                              |" << endl
			<< "|3. Multiplication                           |" << endl
			<< "|4. Division                                 |" << endl
			<< "|5. Trig Functions                           |" << endl
			<< "|6. Logs/exponentials                        |" << endl
			<< "|7. Square root                              |" << endl
			<< "|____________________________________________|" << endl;
		cin >> selection;
		switch (selection) // Menu Selection
		{
		case 1: cout << "Please enter two numbers to add each seperated by a space:" << endl;
			cin >> num1 >> num2;
			addition(num1, num2); // Sends two numbers to addition function
			break;
		case 2: cout << "Please enter two numbers to subtract each seperated by a space:" << endl;
			cin >> num1 >> num2;
			subtraction(num1, num2); // Sends two numbers to subtraction function
			break;
		case 3: cout << "Please enter two numbers to multiply each seperated by a space:" << endl;
			cin >> num1 >> num2;
			multiplication(num1, num2); // Sends two numbers to multiplication function
			break;
		case 4: cout << "Please enter two numbers to divide each seperated by a space:" << endl;
			cin >> num1 >> num2;
			division(num1, num2); // Sends two numbers to division function
			break;
		case 5: trig();
			break;
		case 6: expslogs();
			break;
		case 7: cout << "filler";
			break;
		default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
			cin >> selection;
		}
		cout << "Would you like to return to the main menu? y or n" << endl;
		cin >> repeat;
	}
}

void addition(double a, double b)
{
	cout << a << " + " << b << " = " << a + b << endl; // Adds two numbers
}
void subtraction(double a, double b)
{
	cout << a << " - " << b << " = " << a - b << endl; // Subtracts two numbers
}
void multiplication(double a, double b)
{
	cout << a << " * " << b << " = " << a * b << endl; // Multiplies two numbers
}
void division(double a, double b)
{
	cout << a << " / " << b << " = " << a / b << endl; // Divides two numbers
}
// This Function holds the trig menu and tools to solve trig funtions
void trig()
{
	int selectionTrig;
	double num;
	double pi = 3.141592653589; // Defining PI so that the inputs/outputs are in degrees

	cout << "Welcome to the trig menu! Please choose one of the following options:" << endl // Outputs trig menu options 
		<< "1. sin" << endl
		<< "2. cos" << endl
		<< "3. tan" << endl
		<< "4. csc" << endl
		<< "5. sec" << endl
		<< "6. cot" << endl;
	cin >> selectionTrig;
	switch (selectionTrig)
	{
	case 1: cout << "Please enter a number to find the sin of:" << endl; // Case 1 is for sine
		cin >> num;
		cout << "sin(" << num << ") = " << sin((num*pi) / 180) << endl;
		break;
	case 2: cout << "Please enter a number to find the cos of:" << endl; // Case 2 is for cos
		cin >> num;
		cout << "cos(" << num << ") = " << cos((num*pi) / 180) << endl;
		break;
	case 3:cout << "Please enter a number to find the tan of:" << endl; // Case 3 is for tan
		cin >> num;
		cout << "tan(" << num << ") = " << tan((num*pi) / 180) << endl;
		break;
	case 4:cout << "Please enter a number to find the csc of:" << endl; // Case 4 is for csc
		cin >> num;
		cout << "csc(" << num << ") = " << 1 / (sin((num*pi) / 180)) << endl;
		break;
	case 5:cout << "Please enter a number to find the sec of:" << endl; // Case 5 is for sec
		cin >> num;
		cout << "sec(" << num << ") = " << 1 / (cos((num*pi) / 180)) << endl;
		break;
	case 6:cout << "Please enter a number to find the cot of:" << endl; // Case 5 is for cot
		cin >> num;
		cout << "cot(" << num << ") = " << 1 / (tan((num*pi) / 180)) << endl;
		break;
	default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
		cin >> selectionTrig;

	}
}
void expslogs()
{
	cout << "Welcome to the logs and exponents menu! Please choose one of the following options:" << endl
		<< "1. Log(x)" << endl
		<< "2. ln(x)" << endl
		<< "3. e^(x)" << endl
		<< "4. (b)^(x)" << endl;
	int selectionLE;
	cin >> selectionLE;
	switch (selectionLE)
	{
	case 1: cout << "filler" << endl;
		break;
	case 2: cout << "filler" << endl;
		break;
	case 3: cout << "filler" << endl;
		break;
	case 4: cout << "filler" << endl;
		break;
	default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
	}
}

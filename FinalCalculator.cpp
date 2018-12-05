#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void trig();
void squareRoot();
void expslogs();

vector<double> add;
vector<double> sub;
vector<double> mult;
vector<double> divi;

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
			<< "|____________________________________________|" << endl
			<< "Selection: ";
		cin >> selection;
		switch (selection) // Menu Selection
		{
		case 1: cout << "Please input numbers to add together each seperated by enter and when done input 0: " << endl;
			addition(); 
			break;
		case 2: cout << "Please input numbers to subtract from eachother each seperated by enter and when done input 0: " << endl;
			subtraction();
			break;
		case 3: cout << "Please input numbers to multiply by eachother each seperated by enter and when done input 1: " << endl;
			multiplication(); 
			break;
		case 4: cout << "Please input numbers to divide by eachother each seperated by enter and when done input 1: " << endl;
			division(); 
			break;
		case 5: trig();
			break;
		case 6: expslogs();
			break;
		case 7: cout << "Please enter a number to find the square root of: ";
			squareRoot();
			break;
		default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
			cin >> selection;
		}
		cout << "Would you like to return to the main menu? y or n" << endl;
		cin >> repeat;
	}
}

void addition()
{
	long double num;
	long double max;

	cout << "How many numbers do you want to add? : ";
	cin >> max;

	cout << "Enter the numbers, each seperated by enter: " << endl;
	for (long double i = 0; i < max; i++)
	{
		cin >> num;
		add.push_back(num);
	}

	
	long double sum = 0; for (int i = 0; i < add.size(); i++) sum += add[i];

	cout << "Sum: " << sum << endl;

}
void subtraction()
{
	long double num;
	long double max;

	cout << "How many numbers do you want to subtract? : ";
	cin >> max;

	cout << "Enter the numbers, each seperated by enter: " << endl;
	for (long double i = 0; i < max; i++)
	{
		cin >> num;
		sub.push_back(num);
	}


	long double sum = 0; for (int i = 0; i < sub.size(); i++) sum -= sub[i];

	cout << "Sum: " << sum << endl;
}
void multiplication()
{
	double num;
	double total;

	cin >> total;
	do
	{
		cin >> num;
		total = total * num;
	} while (num != 1);
	cout << "= " << total << endl;
}
void division()
{
	double num;
	double total;

	cin >> total;
	do
	{
		cin >> num;
		total = total / num;
	} while (num != 1);
	cout << "= " << total << endl;
}
void squareRoot() //Square root of a number
{
	double num;
	double sqroot;
	cin >> num;
	double num1 = num;
	if (num >= 0)
	{
		sqroot = sqrt(num);
		cout << "The square root of " << num1 << " = " << sqroot << endl;
	}
	if (num < 0)
	{
		num = abs(num);
		sqroot = sqrt(num);
		cout << "The square root of " << num1 << " = " << sqroot << "i" << endl;
	}
}
// This Function holds the trig menu and tools to solve trig funtions
void trig()
{
	int selectionTrig;
	double num;
	double pi = 3.141592653589; // Defining PI so that the inputs/outputs are in degrees

   cout << " ____________________________________________" << endl;
   cout << "|Welcome to the trig menu!                   |" << endl
	   << "|Please choose one of the following options: |" << endl // Outputs trig menu options 
	   << "|1. sin                                      |" << endl
	   << "|2. cos                                      |" << endl
	   << "|3. tan                                      |" << endl
	   << "|4. csc                                      |" << endl
	   << "|5. sec                                      |" << endl
	   << "|6. cot                                      |" << endl
	   << "|____________________________________________|" << endl;
   cout << "Selection: ";
	cin >> selectionTrig;
	switch (selectionTrig)
	{
	case 1: cout << "Please enter a number to find the sin of: "; // Case 1 is for sine
		cin >> num;
		cout << "sin(" << num << ") = " << sin((num*pi) / 180) << endl;
		break;
	case 2: cout << "Please enter a number to find the cos of: "; // Case 2 is for cos
		cin >> num;
		cout << "cos(" << num << ") = " << cos((num*pi) / 180) << endl;
		break;
	case 3:cout << "Please enter a number to find the tan of: "; // Case 3 is for tan
		cin >> num;
		cout << "tan(" << num << ") = " << tan((num*pi) / 180) << endl;
		break;
	case 4:cout << "Please enter a number to find the csc of: "; // Case 4 is for csc
		cin >> num;
		cout << "csc(" << num << ") = " << 1 / (sin((num*pi) / 180)) << endl;
		break;
	case 5:cout << "Please enter a number to find the sec of: "; // Case 5 is for sec
		cin >> num;
		cout << "sec(" << num << ") = " << 1 / (cos((num*pi) / 180)) << endl;
		break;
	case 6:cout << "Please enter a number to find the cot of: "; // Case 5 is for cot
		cin >> num;
		cout << "cot(" << num << ") = " << 1 / (tan((num*pi) / 180)) << endl;
		break;
	default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
		cin >> selectionTrig;

	}
}
void expslogs()
{
	cout << " ____________________________________________" << endl;
	cout <<"|Welcome to the logs and exponents menu!     |" << endl
		<< "|Please choose one of the following options: |" << endl
		<< "|1. Log(x)                                   |" << endl
		<< "|2. ln(x)                                    |" << endl
		<< "|3. e^(x)                                    |" << endl
		<< "|4. (b)^(x)                                  |" << endl
		<< "|____________________________________________|" << endl;
	cout << "Selection: ";
	int selectionLE;
	double num, num1;
	cin >> selectionLE;
	switch (selectionLE)
	{
	case 1: cout << "Please enter a number to find the log of: ";
		cin >> num;
		cout << "log(" << num << ") = " << log10(num) << endl;
		break;
	case 2: cout << "Please enter a number to find the ln of: ";
		cin >> num;
		cout << "ln(" << num << ") = " << log(num) << endl;
		break;
	case 3: cout << "Please enter a number for x in e^(x): ";
		cin >> num;
		cout << "e^(" << num << ") = " << exp(num) << endl;
		break;
	case 4: cout << "Please enter a number for b and x in (b)^(x) each seperated by a space: ";
		cin >> num >> num1;
		cout << "(" << num << ")^" << "(" << num1 << ") = " << pow(num, num1) << endl;
		break;
	default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
	}
}

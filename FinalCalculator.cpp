// Andrew Haber
// Bayley Barreuther
// Comsc-110 Final

#include <iostream>
#include <cmath> // Allows for more mathematic tools
#include <vector>
#include <numeric>

using namespace std;

void addition(); // These are the functions for all the functions of the calculator
void subtraction();
void multiplication();
void division();
void trig();
void squareRoot();
void expslogs();


int main()
{
	char repeat = 'y';
	while (repeat == 'y') // This loop allows the user to do more than one operation before closing the program
	{
		int selection;
		double num1, num2;

		cout << "                C++ Calculator                " << endl // Basic UI
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
		switch (selection) // Menu Selection ----> sends to selected function
		{
		case 1: cout << " " << endl;
			addition(); // Sends to addition function
			break;
		case 2: cout << " " << endl;
			subtraction(); // Sends to subtraction fuction
			break;
		case 3: cout << " " << endl;
			multiplication(); // Sends to multiplication function
			break;
		case 4: cout << endl << "Please input two numbers to divide by each other each separated by space: ";
			division(); // Sends to division function
			break;
		case 5: trig(); // Sends to trig function
			break;
		case 6: expslogs(); // Sends to exponents and logs function
			break;
		case 7: cout << "Please enter a number to find the square root of: ";
			squareRoot(); // Sends to sqaure root function
			break;
		default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
			cin >> selection; // Allows the user to retry input
		}
		cout << "Would you like to return to the main menu? y or n" << endl;
		cin >> repeat;
	}
}

void addition()
{
	vector<double> add;
	double num;
	double max;

	cout << "How many numbers do you want to add? : "; //Prompts user for the number of values they want to add
	cin >> max;

	cout << "Enter " << max << " numbers, each separated by enter: " << endl; //Loops the input prompt for the exact amount of numbers the user wants to add. Inputs values into vector
	for (long double i = 0; i < max; i++)
	{
		cin >> num;
		add.push_back(num);
	}


	double sum = 0; for (int i = 0; i < add.size(); i++) sum += add[i]; //Adds all numbers in the vector together

	cout << "Sum: " << sum << endl; //Outputs the sum

}
void subtraction()
{
	vector<long long int> sub;
	double num;
	double max;
	double firstNum;

	cout << "What is the number you want to subtract from? :";
	cin >> firstNum;

	cout << "How many numbers do you want to subtract from " << firstNum << "? :"; //Prompts user for the number of values they want to subtract
	cin >> max;

	cout << "Enter " << max << " numbers, each separated by enter: " << endl; //Loops the input prompt for the exact amount of numbers the user wants to subtract. Inputs values into vector
	for (long long int i = 0; i < max; i++)
	{
		cin >> num;
		sub.push_back(num);
	}


	double sum = 0; for (int i = 0; i < sub.size(); i++) sum += sub[i];

	cout << "Difference: " << firstNum - sum << endl; //Subtracts 
}
void multiplication()
{
	vector<int> mult;
	double num;
	double valChoice;

	cout << "How many numbers do you want to multiply? : "; //Prompts the user for the number of values they want to multiply together
	cin >> valChoice;

	cout << "Enter " << valChoice << " numbers, each separated by enter: " << endl;
	for (int i = 0; i < valChoice; i++) //Prompts user for the numbers they want to multiply
	{
		cin >> num;
		mult.push_back(num);
	}

	double sum = 1; for (int i = 0; (i < mult.size() - 1); i++) //Multiplies all values in the vector together
	{
		num *= mult[i];
	}

	cout << "Product: " << num << endl; //Outputs the result

}
void division()
{
	double num;
	double num1;

	cin >> num >> num1; // Takes both numbers and stores them

	cout << "Quotient: " << num / num1 << endl; // Outputs quotient
}
void squareRoot() //Square root of a number
{
	double num;
	double sqroot;
	cin >> num;
	double num1 = num;
	if (num >= 0) // If the number is positive it finds the square root and outputs it
	{
		sqroot = sqrt(num);
		cout << "The square root of " << num1 << " = " << sqroot << endl;
	}
	if (num < 0) // If its less than 0 it gets the absolute value first so that it can find the square root
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
		<< "|1. sin                                      |" << endl // Basic UI
		<< "|2. cos                                      |" << endl
		<< "|3. tan                                      |" << endl
		<< "|4. csc                                      |" << endl
		<< "|5. sec                                      |" << endl
		<< "|6. cot                                      |" << endl
		<< "|____________________________________________|" << endl;
	cout << "Selection: ";
	cin >> selectionTrig;
	switch (selectionTrig) // Used to determine what the user wants to do
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
	cout << "|Welcome to the logs and exponents menu!     |" << endl
		<< "|Please choose one of the following options: |" << endl // Basic menu options/UI
		<< "|1. Log(x)                                   |" << endl
		<< "|2. ln(x)                                    |" << endl
		<< "|3. e^(x)                                    |" << endl
		<< "|4. (b)^(x)                                  |" << endl
		<< "|____________________________________________|" << endl;
	cout << "Selection: ";
	int selectionLE;
	double num, num1;
	cin >> selectionLE;
	switch (selectionLE) // Used to proscess input and do the right funtion
	{
	case 1: cout << "Please enter a number to find the log of: ";
		cin >> num;
		cout << "log(" << num << ") = " << log10(num) << endl; // Finds the common log of a number
		break;
	case 2: cout << "Please enter a number to find the ln of: ";
		cin >> num;
		cout << "ln(" << num << ") = " << log(num) << endl; // Finds the natural log of a number
		break;
	case 3: cout << "Please enter a number for x in e^(x): ";
		cin >> num;
		cout << "e^(" << num << ") = " << exp(num) << endl; // Finds e to the power of a number
		break;
	case 4: cout << "Please enter a number for b and x in (b)^(x) each seperated by a space: ";
		cin >> num >> num1;
		cout << "(" << num << ")^" << "(" << num1 << ") = " << pow(num, num1) << endl; // Lets the user define the exponent and base
		break;
	default: cout << "INVALID INPUT! PLEASE TRY AGAIN" << endl; // Tells the user input was not a valid menu option
	}
}

// test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	//zad0
	int num1, num2;
	cout << "Enter the two numbers: " << endl;
	cin >> num1 >> num2;
	char action;
	cout << "Enter operator(+, -, ., ;): " << endl;
	cin >> action;
	switch (action)
	{
	case '+': cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; break;
	case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; break;
	case '.': cout << num1 << " . " << num2 << " = " << num1 * num2 << endl; break;
	case ':': cout << num1 << " : " << num2 << " = " << num1 / num2 << endl; break;
	default:
		cout << "Error" << endl;
		break;
	}
	
	//zad1
	int year;
	cout << "Enter a year:  ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 4 == 0 && year % 400 == 0)
		cout << year << " is a leap year." << endl;
	else if (year % 4 != 0 || year % 400 != 0) {
		cout << year << " is not a leap year." << endl;
	}
	else {
		cout << "Error" << endl;
	}
	
	//zad2
	char symbol;
	cout << "Enter a symbol: ";
	cin >> symbol;
	if (symbol >= 'a' && symbol <= 'z') {
		cout << "The upper case character corresponding to it is " << (char)(symbol - 32) << endl;
	}
	else if (symbol >= 'A' && symbol <= 'Z') {
		cout << "The lower case character corresponding to it is " << (char)(symbol + 32) << endl;
	}
	else {
		cout << symbol << " is not letter." << endl;
	}
	

	//zad3
	int month;
	cout << "Enter a month(number): " << endl;
	cin >> month;
	switch (month)
	{
	case 12: case 1: case 2: cout << "The season is winter!" << endl; break;
	case 3: case 4: case 5: cout << "The season is spring!" << endl; break;
	case 6: case 7: case 8: cout << "The season is summer!" << endl; break;
	case 9: case 10: case 11: cout << "The season is autumn!" << endl; break;
	default: cout << "Error, Invalid month" << endl;
		break;
	}

	//zad4
	int a, b;
	cout << "Enter the values of a and b in 'ax + b = 0': " << endl;
	cin >> a >> b;
	
	if (a == 0 && b == 0) {
		cout << "INF";
	}
	else if ( - b % a == 0)
	{
		cout << -b/ a;
	}
	else
	{
		cout << "NO";
	}

	//zad5
	int year1, month1;
	cout << "Enter a year and a month (number):  " << endl;
	cin >> year1 >> month1;
		switch (month1)
		{
		case 1: cout << 31 << endl; break;
		case 2: 
			if ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 4 == 0 && year1 % 400 == 0) {
				cout << 29 << endl; break;
			}
			else if (year1 % 4 != 0 || year1 % 400 != 0){
				cout << 28 << endl; break;
			} 
	
		case 3: cout << 31 << endl; break;
		case 4: cout << 30 << endl; break;
		case 5: cout << 31 << endl; break;
		case 6: cout << 30 << endl; break;
		case 7: case 8: cout << 31 << endl; break;
		case 9: cout << 30 << endl; break;
		case 10: cout << 31 << endl; break;
		case 11: cout << 30 << endl; break;
		case 12: cout << 31 << endl; break;
		default: cout << "Error!";
			break;
		}
	

	//zad6
	//само булевия израз:
	// ((SSD == "no" || RAM < 8) && price <= 800) || (price <= 1500 && USB_ports >= 3 && RAM >= 8 && SSD == "yes");
	// По условие в израза трябва да е ... price >= 1000 && price <= 1500 ..., но , ще е глупаво Тишко да не купи лаптопа само защото е под 1000 лева.
	int price, USB_ports, RAM;
	string SSD;
	cout << "Enter the laptop's price, USB ports, RAM capacity and if it has an SSD (yes/no): " << endl;
	cin >> price >> USB_ports >> RAM >> SSD;
	bool will_he_buy = ((SSD == "no" || RAM < 8) && price <= 800) || (price <= 1500 && USB_ports >= 3 && RAM >= 8 && SSD == "yes");
	string answer = will_he_buy ? "Tishko will buy the laptop" : "Tishko won't buy the laptop";
	cout << answer << endl;
	
	//zad7
	int input;
	cout << "Enter a whole number which is bigger than 999 and smaller than 10000:" << endl;
	cin >> input;
	int first_digit_of_input = input / 1000;
	int second_digit_of_input = (input / 100) % 10;
	int third_digit_of_input = ((input / 10) % 100) % 10;
	int fourth_digit_of_input = input % 10;
	cout << first_digit_of_input << endl << second_digit_of_input << endl << third_digit_of_input << endl << fourth_digit_of_input << endl;
	string is_first_digit_odd = (first_digit_of_input % 2 == 0) ? "First digit is not odd." : "First digit is odd.";
	cout << is_first_digit_odd << endl;
	bool is_first_digit_the_biggest = first_digit_of_input >= second_digit_of_input && first_digit_of_input >= third_digit_of_input && first_digit_of_input >= third_digit_of_input;
	
	if (is_first_digit_the_biggest)	{
		cout << "The first digit of the number isn't the biggest of the number's digits" << endl;
	}
	else {
		cout << "The first digit of the number is the biggest of the number's digits" << endl;
	}
		
	////ili 
	//int biggest_digit = max(first_digit_of_input, second_digit_of_input);
	//biggest_digit = max(biggest_digit, third_digit_of_input);
	//biggest_digit = max(biggest_digit, fourth_digit_of_input);
	//if (biggest_digit == first_digit_of_input) {
	//	cout << "The first digit of the number is the biggest of the number's digits" << endl;
	//}
	//else
	//{
	//	cout << "The first digit of the number isn't the biggest of the number's digits" << endl;
	//}

	//zad0
int domati, chushki, morkovi, maslini, kartofi, ovkusiteli, priatel;
cin >> domati >> chushki >> morkovi >> maslini >> kartofi >> ovkusiteli >> priatel;

bool a = (domati >= 1 && chushki >= 2 && morkovi >= 4 && maslini >= 3 && kartofi >= 3 && ovkusiteli >= 150) || 
(domati >= 2 && chushki >= 3 && morkovi >= 5 && maslini >= 6 && kartofi >= 10 && ovkusiteli >= 200 && priatel == 1) ||
(domati >= 5 && chushki >= 6 && morkovi >= 12 && maslini >= 7 && kartofi >= 12 && ovkusiteli >= 300 && priatel == 1);
cout << "\n" << a;

}



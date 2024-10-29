#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	//8.10.24

	//0
	cout << "Program for coffe!" << endl;

	//1
	int three_digit_num;
	cout << "Enter a whole positive 3 digit number: " << endl;
	cin >> three_digit_num;
	
		if (three_digit_num > 99 && three_digit_num < 1000) {
			int first_digit = three_digit_num / 100;
			int second_digit = (three_digit_num / 10) % 10;
			int third_digit = three_digit_num % 10;

			cout << "First digit: " << first_digit << endl;
			cout << "Second digit: " << second_digit << endl;
			cout << "Third digit: " << third_digit << endl;
			cout << "sum of digits: " << first_digit + second_digit + third_digit << endl;


	}
	//2
		int a, b;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		int d = a;
		a = b, b = d;
		cout << "a = " << a << " b = " << b << endl;


	//3
	int number1, number2;
	cout << "Enter two numbers: " << endl;
	cin >> number1 >> number2;
	cout << !(number1 % number2) << endl;


	//4)
	//i
	int a, b;
	cin >> a >> b;
	int num1 = a * b;
	cout << num1;
	//ii
	string num2 = to_string(num1);
	cout << "\n" << num2.back();
	//iii
	if (num1 % 2 == 0) {
		cout << "\n1";
	}
	else{
		cout << "\n0";
	}
	
	//5
	int a, b, c;
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;
	cout << "Enter value of c: ";
	cin >> c;
	if (a + b > c && b + c > a && c + a > b) {
		cout << "True";
	}
	else {
		cout << "False";
	}


	//6
	int a, b, c;
	cin >> a >> b >> c;
	
	if ((a > b && a < c) || (a > c && a < b)) {
		cout << "\n" << b << ", " << c;
	}
	else if ((b > c && b < a) || (b > a && b < c)) {
		cout << "\n" << a << ", " << c;
	}
	else {
		cout << "\n" << a << "," << b;
	}

	//7
	double x, a, b;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter range of interval:\nStart: ";
	cin >> a;
	cout << "End: ";
	cin >> b;
	if (x > a && x < b) {
		cout << "True";
	}
	else
	{
		cout << "False";
	}

	}

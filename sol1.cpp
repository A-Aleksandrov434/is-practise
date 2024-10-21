#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

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
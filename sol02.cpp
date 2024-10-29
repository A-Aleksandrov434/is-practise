#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//22.10.24
	//zad0
	int n1, n_fact = 1;
	cout << "Enter n: ";
	cin >> n1;
	for (int i = 1; i <= n1; i++) {
		n_fact = n_fact * i;
	}
	cout << "n! is " << n_fact << endl;

	//zad1
	int i;
	cout << "enter i in ai = i^2 + 3i: " << endl;
	cin >> i;
	for (int j = 1; j <= i; j++) {
		cout << j * j + 3 * j << endl;
	}

	//zad2
	int n2, biggest_negative = 0, entered_number;
	cout << "Enter(with numbers) how many numbers you will input: ";
	cin >> n2;
	for (int i = 1; i <= n2; i++)
	{
		cin >> entered_number;
		if (entered_number < 0 && biggest_negative == 0) {
			biggest_negative = entered_number;
		}
		else if ((entered_number < 0 && fabs(entered_number) < fabs(biggest_negative))) { 
		biggest_negative = entered_number;
		}
	}
	cout << biggest_negative << endl;

	//zad3
	int n3, num1 = 0, num2 = 1;
	cout << "Enter n: ";
	cin >> n3;
	for (int i = 2; i <= n3; i++) {
		if (num1 >= num2) //при i -- нечерно
		{
			num2 += num1;
		}
		else if (num2 > num1) //при  i -- четно
		{
			num1 += num2;
		}
	}
	if (n3 % 2 == 0) {
		cout << num1 << endl;
	}
	else
	{
		cout << num2 << endl;
	}

	//zad4
	int input, sum = 0;
	do {
		cin >> input;
		sum += input;
	} while (input != 0);
	cout << sum << endl;

	//zad5
	int natural_number, sum_of_digits = 0;
	cout << "Enter natural number: ";
	cin >> natural_number;
	while (natural_number > 0) {
		sum_of_digits += natural_number % 10;
		natural_number /= 10;
	}
	cout << "The sum of its digits is " << sum_of_digits <<endl;

	//zad6
	long a, pow_of_a, output = 1;
	cout << "Enter number and power:" << endl;
	cin >> a >> pow_of_a;
	for (int i = 1; i <= pow_of_a; i++)
	{
		output *= a;
	}
	cout << output << endl;

	//zad8
	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') { 
			;}
		else {
			cout << i << endl;
		}
	}
	//zad9
int N;
cout << "Enter N: ";
cin >> N;
for (int i = 1; i <= N; i++)
{
	for (int j = 1; j <= N; j++) {
		if (j < i) {
			cout << "-";
		}
		else if (j == i) {
			cout << 0;
		}
		else 
		{
			cout << "+";
		}
	}
	cout << "\n";
}
}

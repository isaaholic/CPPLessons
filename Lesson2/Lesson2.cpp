#include <iostream>

using namespace std;

int main()
{
	cout << "Int: " << sizeof(int) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "Double: " << sizeof(double) << endl;
	cout << "Char: " << sizeof(char) << endl;
	cout << "Wide Char: " << sizeof(wchar_t) << endl;
	cout << "Bool: " << sizeof(bool) << endl;
	cout << "Short: " << sizeof(short) << endl;
	cout << "Long: " << sizeof(long) << endl;
	cout << "Long Long: " << sizeof(long long) << endl;
	cout << "Long Int: " << sizeof(long int) << endl;
	cout << "Long Long Int: " << sizeof(long long int) << endl;

	// ?: ternary
	cout << (5 % 2 == 0 ? "even" : "odd") << endl;

	const int x = 5; // compile time

	float numberOne;
	float numberTwo;
	cout << "Enter number one: ";
	cin >> numberOne;
	cout << "Enter number two; ";
	cin >> numberTwo;
	float result = numberOne + numberTwo;
	cout << "Result: " << result << endl;


	// camelCase - colorOfNumber C++ C#
	// snake_case - color_of_number Python
	// PascalCase - ColorOfNumber C#
	// kabab-case - color-of-number

	// int / int => int
	// float / float => float
	// double / double => double

	// int / float => float
	// double / float => double
	// bool / int => int
	// cout << true + 5 << endl;
	//cout << typeid(5.5F).name() << endl; // tipinin adini gosterir

	//int number; // define
	//number = 10; // assign



	//int number = 10; // initialize
	//number = 10; // assign

	// // Raw string
	//cout << R"(C:\Program Files (x86)\newFolder\applicationPlugins)" << endl;
	//cout << R"(https://www.techbaz.org/Course/Cpp_keywords.php#Keywords)" << endl;
}

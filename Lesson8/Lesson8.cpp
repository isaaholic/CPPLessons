#include <iostream>
#include <conio.h>

using namespace std;

const float pi = 3.14f;

void foo(int x) // by value (copy)
{
	x++;
	cout << x << endl; // 11
}

void boo(int& x) // by reference (self)
{
	x++;
	cout << x << endl; // 11
}

void voo()
{
	static int x = 24;
	cout << x++ << endl;
}

int addition(int num1, int num2 = 0);

inline int substraction(int num1, int num2)
{
	return num1 - num2;
}

//
//int main()
//{
//	//int num = 10;
//	//cout << num << endl; // 10
//	////foo(num); // 11
//	//boo(num); // 11
//	//cout << num << endl; // 10
//	voo(); // 24 24
//	voo(); // 24 25
//	voo(); // 24 26
//	voo(); // 24 27
//	cout << addition(25) << endl;
//	substraction(25, 10);
//	//25 - 10;
//}

int main()
{
	int number;
	char pass[8] = {};
	int i = 0;
	while (pass[7] == 0)
	{
		number = _getch();

		cout << '*';

		pass[i] = number;

		i++;

		//if (number == 224) {
		//    number = _getch();

		//    if (number == 72) cout << "Up" << endl;
		//    else if (number == 77) cout << "Right" << endl;
		//    else if (number == 75) cout << "Left" << endl;
		//    else if (number == 80)  cout << "Down" << endl;
		//}
	}

	for (int i = 0; i < 8; i++)
	{
		cout << pass[i];
	}
}

int addition(int num1, int num2)
{
	return num1 + num2;
}
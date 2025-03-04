#include <iostream>

using namespace std;

struct Point {
	static bool isOkay;
	int x;
	int y;
	int count = 0;
};
bool Point::isOkay = true;

struct Student
{
	int x; // 4
	int y; // 4
	double f; // 8
	bool b; // 1
	char c; // 1
};

struct Worker
{
	int* age;
	int** schedule;
	Worker()
	{
		cout << "Worker constructor started"<<endl;
		age = new int(18);
		schedule = new int* [3];
		for (int i = 0; i < 3; i++)
		{
			int* jarr = new int[3];
			schedule[i] = jarr;
		}
	}

	~Worker()
	{
		cout << "Worker desctructor started" << endl;
		delete age;
		for (size_t i = 0; i < 3; i++)
		{
			delete[] schedule[i];
		}
		delete[] schedule;
		schedule = nullptr;
		age = nullptr;
	}
};

int main()
{
	Worker worker = Worker();
	Point p1;
	Point p2;

	cout << p1.isOkay << endl;
	cout << p1.x << endl;
	cout << p1.y << endl;
	cout << p1.count << endl;
}

//// bit field
struct Some {
	bool b1 : 1;
	bool b2 : 1;
	bool b3 : 1;
	bool b4 : 1;
	bool b5 : 1;
	bool b6 : 1;
	bool b7 : 1;
	bool b8 : 1;
};
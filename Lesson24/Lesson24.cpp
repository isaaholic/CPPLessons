#include <iostream>


using namespace std;


class Test {
public:
	int* _number = nullptr;

	Test()
	{
		cout << "Default constructor\n";
	}

	Test(int number)
	{
		cout << "Constructor with Param\n";
		_number = new int(number);
	}


	Test(const Test& other) {

		cout << "Copy constructor\n";

		if (other._number)
			_number = new int(*other._number);
	}


	Test& operator=(const Test& other) {
		cout << "Copy Assigment operator\n";

		if (_number != nullptr)
			delete _number;

		_number = new int(*other._number);

		return  *this;
	}



	Test(Test&& other) noexcept {
		cout << "Move constructor\n";

		_number = other._number;
		other._number = nullptr;
	}


	Test& operator=(Test&& other) noexcept {
		cout << "Move Assigment operator\n";

		if (_number != nullptr)
			delete _number;

		_number = other._number;
		other._number = nullptr;

		return  *this;
	}


	~Test()
	{
		cout << "Destructor for -> " << _number << endl;
		delete _number;
	}
};





Test foo()
{
	cout << "\nFunction\n";
	Test t1(10);
	cout << t1._number << endl;
	return t1;
}


int main()
{
	// Test t2 = foo();


	//// Move Constructor
	// Test t2(11);
	// Test t3 = move(t2);


	//// Move Assignment Operator

	// Test t4(12);
	// Test t5;
	// 
	// t5 = move(t4);






	Test* oldArray = new Test[3]{ Test(10), Test(11), Test(12) };
	Test* newArray = new Test[4];

	for (size_t i = 0; i < 3; i++)
		newArray[i] = move(oldArray[i]);



}
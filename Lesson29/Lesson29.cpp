#include <iostream>

using namespace std;

// Data Structure
// Stack (FILO)
// Queue (FIFO)


struct Date {
	short day;
	short month;
	short year;
};

ostream& operator<<(ostream& out, const Date& d) {
	out << d.day << '.' << d.month << '.' << d.year;
	return out;
}





template<typename T, int MAX = 10>
class SimpleQueue
{
	T _container[MAX]{};
	int _front = -1;
	int _rear = -1;

public:
	SimpleQueue() = default;

	void enQueue(T element)
	{
		if (isFull())
			throw "Queue overflow";

		if (isEmpty())
			_front = 0;

		_container[++_rear] = element;
	}


	void deQueue()
	{
		if (isEmpty())
			throw "Queue underflow";

		_front++;

		if (_front > _rear)
			_front = _rear = -1;
	}


	T peek() const // front
	{
		if (isEmpty())
			throw "Queue is Empty";

		return _container[_front];
	}

	int size() const
	{
		if (_front == -1)
			return 0;

		return _rear - _front + 1;
	}

	bool isEmpty() const { return size() == 0; }
	bool isFull() const { return size() == MAX; }


	const T* getContainer() const
	{
		return _container;
	}
};


int main()
{
	SimpleQueue<Date, 2> items;

	Date date1 = Date();
	date1.day = 1;
	date1.month = 1;
	date1.year = 2023;
	Date date2 = Date();
	date2.day = 2;
	date2.month = 2;
	date2.year = 2023;

	try
	{
		items.enQueue(date1);
		items.enQueue(date2);
		// items.enQueue("Red");
	}
	catch (const char* ex)
	{
		cout << "Exception occured! " << ex << endl;
	}


	while (!items.isEmpty())
	{
		cout << items.peek() << endl;
		items.deQueue();
	}


	////// 

	//items.enQueue("Red");

	//while (!items.isEmpty())
	//{
	//	cout << items.peek() << endl;
	//	items.deQueue();
	//}

}
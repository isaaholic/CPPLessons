#include <iostream>


using namespace std;

template<typename T, int MAX = 5>
class Deque
{
	T container[MAX]{};
	int _front = 0;
	int _rear = MAX - 1;
	int _size = 0;

public:
	Deque() = default;

	void push_rear(T item)
	{
		if (isFull())
			throw "Deque is full";


		_front = (MAX + _front - 1) % MAX;


		container[_front] = item;
		_size++;
	}
	void push_front(T item)
	{
		if (isFull())
			throw "Deque is full";


		_rear = (_rear + 1) % MAX;

		container[_rear] = item;
		_size++;
	}


	void pop_front();
	void pop_rear();


	bool isFull() const
	{
		return _size == MAX;
	}
	bool isEmpty() const
	{
		return _size == 0;
	}


	const T& operator[](int queue) const
	{
		if (isEmpty())
			throw "Deque is empty";

		if (queue >= _size || queue < 0)
			throw "The queue is small or queue cannot be less than 0";


		queue = (_front + queue) % MAX;

		return container[queue];
	}


	const T& front() const
	{
		if (isEmpty())
			throw "Deque is empty";

		return container[_front];
	}
	const T& rear() const
	{
		if (isEmpty())
			throw "Deque is empty";

		return container[_rear];
	}

	void display() const
	{
		if (isEmpty())
			throw "Queue is empty";


		/*cout << "Front -> " << _front << endl;
		cout << "Rear -> " << _rear << endl;*/


		cout << "Items -> ";

		int i;
		for (i = 0; i < MAX; i++)
		{
			cout << container[i]<<' ';
		}
		cout << endl;
	}

};



void mainDequeue()
{
	Deque<int, 5> deque;
	deque.push_front(11);
	deque.display();
	deque.push_rear(22);
	deque.display();
	deque.push_front(33);
	deque.display();
	deque.push_rear(44);
	deque.display();
	deque.push_rear(55);
	deque.display();
	// deque.push_rear(3333);



	//try
	//{
	//	cout << deque[4] << endl;
	//}
	//catch (const char* ex)
	//{
	//	cout << "Exception occured! " << ex << endl;
	//}

}
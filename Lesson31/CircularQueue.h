#pragma once


template<class T, int SIZE = 5>
class CircularQueue
{
	T container[SIZE]{};
	int _rear = -1, _front = -1;

public:

	void enQueue(T element)
	{
		if (isFull())
			throw "Queue is full";


		if (isEmpty())
			_front = 0;

		_rear = (_rear + 1) % SIZE;

		container[_rear] = element;
	}
	void deQueue()
	{
		if (isEmpty())
			throw "Queue is empty";

		if (_front == _rear)
		{
			_rear = -1;
			_front = -1;
		}
		else
			_front = (_front + 1) % SIZE;
	}

	const T& front() const
	{
		if (isEmpty())
			throw "Queue is empty";

		return container[_front];
	};
	const T& rear() const
	{
		if (isEmpty())
			throw "Queue is empty";

		return container[_rear];
	};


	bool isFull() const
	{
		return (_rear + 1) % SIZE == _front;
	};
	bool isEmpty() const
	{
		return _front == -1;
	};


	int size() const
	{
		if (isEmpty())
			return 0;

		if (_rear >= _front)
			return _rear - _front + 1;

		return SIZE - _front - _rear - 1;
	};


	void display() const
	{
		if (isEmpty())
			throw "Queue is empty";


		/*cout << "Front -> " << _front << endl;
		cout << "Rear -> " << _rear << endl;*/


		cout << "Items -> ";

		int i;
		for (i = _front; i != _rear; i = (i + 1) % SIZE)
			cout << container[i] << ' ';
		//cout << container[i] << endl;
		cout << container[_rear] << endl;
	}
};




void mainCircularQueue()
{
	CircularQueue<int> queue;

	queue.enQueue(1);
	queue.display();
	queue.enQueue(2);
	queue.display();
	queue.enQueue(3);
	queue.display();
	queue.enQueue(4);
	queue.display();
	queue.enQueue(5);
	queue.display();

	queue.deQueue();
	queue.display();
	queue.enQueue(100);
	queue.display();


	// cout << queue.isFull() << endl;
	// cout << queue.front() << endl;
	// cout << queue.rear() << endl;
	// cout << queue.size() << endl;

}
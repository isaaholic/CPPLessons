#pragma once



template<class T, int SIZE = 5>
class PriorityQueue
{
	T container[SIZE]{};
	int _top = -1;

public:

	void enQueue(T element)
	{
		if (isFull())
			throw "Queue is full";


		container[++_top] = element;

		if (element > container[_top])
			return;


		for (int i = _top - 1; i >= 0; i--)
		{
			if (element <= container[i])
			{
				container[i + 1] = container[i];
				container[i] = element;
			}
			else
				break;
		}
	}


	void deQueue()
	{
		if (isEmpty())
			throw "Queue is empty";

		_top--;
	}

	const T& front() const
	{
		if (isEmpty())
			throw "Queue is empty";

		return container[_top];
	};

	const T& rear() const
	{
		if (isEmpty())
			throw "Queue is empty";

		return container[0];
	};

	bool isFull() const
	{
		return _top + 1 == SIZE;
	};

	bool isEmpty() const
	{
		return _top == -1;
	};

	int size() const
	{
		return _top + 1;
	};

	void display() const
	{
		if (isEmpty())
			throw "Queue is empty";

		for (int i = 0; i <= _top; i++)
			cout << container[i]<<' ';
		cout << endl;
	}

};




void mainPriorityQueue()
{
	PriorityQueue<int> queue;

	queue.enQueue(11);
	queue.display();
	queue.enQueue(5);
	queue.display();
	queue.enQueue(8);
	queue.display();
	queue.enQueue(3);
	queue.display();
	queue.enQueue(66);
	queue.display();
	queue.deQueue();
	queue.display();
	queue.deQueue();
	queue.display();



	//cout << queue.isFull() << endl;
	//cout << queue.front() << endl;
	//cout << queue.rear() << endl;
	//cout << queue.size() << endl;



}
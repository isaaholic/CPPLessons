#pragma once


class Student {
private:
	int _id = 0;
	mutable int _age = 0;
	char* _name = nullptr;

public:

	explicit Student(int age) {}

	void print() const
	{
		_age = 42;
	}

	void nonConstMethod() {}

	int getId() const
	{
		print();
		return _id;
	}
};



void DoSomething(const Student s) {
	s.getId();
	// s.NonConstMethod();
}
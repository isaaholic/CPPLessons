#pragma once

struct Student
{
private:
	const char* idfincode;
public:
	Student(const char* idfincode)
	{
		this->idfincode = idfincode;
	}
	Student(char* name, char* surname, unsigned short age, float avgscore, bool isMan, const char* idfincode)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->avgscore = avgscore;
		this->isMan = isMan;
		this->idfincode = idfincode;
	}
	char* name;
	char* surname;
	unsigned short age;
	float avgscore;
	bool isMan;

	void introduceYourself()
	{
		cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl
			<< "Name: " << name << endl
			<< "Surname: " << surname << endl
			<< "Age: " << age << endl
			<< "Avg. score: " << avgscore << endl
			<< "Gender: " << (isMan ? "Man" : "Woman") << endl
			<< "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}

	void clear()
	{
		delete[] name;
		delete[] surname;
		age = 0;
		avgscore = 0;
		isMan = false;
		name = nullptr;
		surname = nullptr;
	}
};

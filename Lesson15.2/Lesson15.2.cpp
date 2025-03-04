#include <iostream>

using namespace std;

int id = 0;

struct Date
{
	short day;
	short month;
	short year;
};

struct Student
{
	int id;
	char* name = nullptr;
	char* surname = nullptr;
	char* city = nullptr;
	Date birthDate;
	float score = 0;
};

struct Group
{
	char* name = nullptr;
	Date startDate;
	Student** students = nullptr;
	int studentSize = 0;
};

struct Academy
{
	char* name = nullptr;
	Date startDate;
	Group** groups = nullptr;
	int groupSize = 0;
};

void showStudent(Student student);
void showGroup(Group group);
void showAcademy(Academy academy);
Student* createStudent();
Group* createGroup();
void addStudentInGroup(Group group, int& size, Student student)
{
	Student** students = new Student * [size + 1];

	for (int i = 0; i < size; i++)
	{
		students[i] = group.students[i];
	}

	auto* newStudent = new Student{ id++,student.name,student.surname,student.city,student.birthDate,student.score };

	students[size] = newStudent;
	delete[] group.students;
	group.students = students;
	size += 1;
}

int main()
{
	Student* student = createStudent();
	showStudent(*student);
	Group* group = createGroup();
	addStudentInGroup(*group, group->studentSize, *student);
	showGroup(*group);
}

void showStudent(const Student student)
{
	Date studentDate = student.birthDate;
	cout << "~~~~~~~~~~Student~~~~~~~~~~~~" << endl;
	cout << "Id: " << student.id << endl;
	cout << "name: " << student.name << endl;
	cout << "surname: " << student.surname << endl;
	cout << "city: " << student.city << endl;
	cout << "birth date: " << studentDate.day << '/' << studentDate.month << "/" << studentDate.year << endl;
	cout << "score: " << student.score << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void showGroup(Group group)
{
	Date groupDate = group.startDate;

	cout << "~~~~~~~~~~Group~~~~~~~~~~~~" << endl;
	cout << "name: " << group.name << endl;
	cout << "Started date: " << group.name << endl;
	cout << "birth date: " << groupDate.day << '/' << groupDate.month << "/" << groupDate.year << endl;
	cout << "Student count: " << group.studentSize << endl;
	for (int i = 0; i < group.studentSize; i++)
	{
		showStudent(*(group.students[i]));
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void showAcademy(Academy academy)
{
	Date academyDate = academy.startDate;

	cout << "~~~~~~~~~~Academy~~~~~~~~~~~~" << endl;
	cout << "name: " << academy.name << endl;
	cout << "Started date: " << academy.name << endl;
	cout << "birth date: " << academyDate.day << '/' << academyDate.month << "/" << academyDate.year << endl;
	cout << "Group count: " << academy.groupSize << endl;
	for (int i = 0; i < academy.groupSize; i++)
	{
		showGroup(*(academy.groups[i]));
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
}


Date createDate()
{
	short day, month, year;
	cin >> day >> month >> year;
	Date date = Date{ day,month,year };

	return date;
}

Student* createStudent()
{
	Student* student = new Student();
	cout << "Name: ";
	char name[30];
	cin.getline(name, 30);
	int nameSize = strlen(name) + 1;
	student->name = new char[30];
	strcpy_s(student->name, nameSize, name);
	cout << "Surname: ";
	char surname[30];
	student->surname = new char[30];
	cin.getline(surname, 30);
	int surnameSize = strlen(surname) + 1;
	strcpy_s(student->surname, surnameSize, surname);
	cout << "city: ";

	char city[30];
	student->city = new char[30];
	cin.getline(city, 30);
	int citySize = strlen(city) + 1;
	strcpy_s(student->city, citySize, city);

	cout << "Score: ";

	float score = 0;
	cin >> score;
	cout << "Birthdate: ";

	Date date = createDate();

	student->birthDate = date;
	student->score = score;
	student->id = id++;
	return student;
}

Group* createGroup()
{
	cin.ignore();
	Group* group = new Group();
	cout << "Name: ";
	char name[30];
	cin.getline(name, 30);
	int nameSize = strlen(name) + 1;
	group->name = new char[30];
	strcpy_s(group->name, nameSize, name);
	cout << "Date: ";
	Date date = createDate();
	group->startDate = date;
	group->studentSize = 0;
	group->students = new Student * [group->studentSize];

	return group;
}


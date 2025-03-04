#include <iostream>

using namespace std;

#include "models.h";


void main()
{
	Student student1 = Student("123415");
	student1.name = new char[8] {'N', 'i', 'l', 'u', 'f', 'e', 'r', '\0' };
	student1.surname = new char[7] {'H', 'a', 'c', 'i', 'l', 'i', '\0' };
	student1.age = 19;
	student1.avgscore = 11.1;
	student1.isMan = false;

	char* name = new char[6] {'M', 'u', 'r', 'a', 'd', '\0' };
	char* surname = new char[8] {'A', 'x', 'm', 'a', 'd', 'l', 'i', '\0' };
	Student* student2 = new Student(name, surname, 18, 10.3f, true, "123415");

	//student1.introduceYourself();
	student2->introduceYourself();

	//student1.clear();
	student2->clear();
	delete student2;
}

// field  => variable
// method => function

// member

// instance, object


// .  => dot operator
// -> => arrow operator



// access modifiers
// 1) public
// 2) protected
// 3) private
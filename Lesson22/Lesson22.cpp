#include <iostream>
#include <cassert>

using namespace std;


#include "Student.h"


int main() {

	/*Student s1(20);
	s1.print();*/


	//Student s2 = 20; // Error -> after explicit keyword
	//s2.print();


	//Student s3 = "Elmar"; // Error -> after explicit keyword
	//s3.print();




	///////////////////////////////



	Student* s4 = new Student("Isa", 19);
	s4->print();
	// 
	Student* s5 = new Student("Leyla");
	s5->print();
	// 
	// 
	cout << Student::getStaticId() << endl;
	cout << s4->getStaticId() << endl;
	// 
	// 
	//delete s4;
	//delete s5;




	///////////////////////////////

	//Student s8 = 20;

	//Student s("Kanan", 17);
	//s.setName("Kenan");

	//s.print();



	return EXIT_SUCCESS;
}
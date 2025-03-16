#include<iostream>
#include<cassert>

using namespace std;


// Operator Overloading

#include "Fraction.h"
#include "Vector.h"



int main()
{
	Vector vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);	
	
	Vector vector2;

	vector2.push_back(102);
	vector2.push_back(202);
	vector2.push_back(302);
	vector2.push_back(402);
	vector2.push_back(503);

	vector, vector2;


	// cout << vector.size() << endl;
	// cout << vector.capacity() << endl;

	// cout << vector[1] << endl;

	// vector.print();

	vector();



	int sumData = int(vector);
	cout << sumData << endl;





	bool isEmpty = vector;
	cout << isEmpty << endl;


	if (vector) { cout << "Forever C++\n"; }


	Fraction f = (Fraction)vector;
	f.print();

	//cout << time1 >= time2 << endl;
	// time1 hours minute second
	// time2 hours minute second
	// 

	return 0;
}






int main2()
{
	Fraction f1(3, 4);
	Fraction f2(2, 4);


	/////////////////////////
	//Fraction f3 = f1.multiply(f2);
	f1 *= f2;
	f1.print();





	/////////////////////////
	// f1 *= f2;




	/////////////////////////
	// Fraction f3 = f1 - f2;
	// 
	// f1.print();
	// f2.print();
	// f3.print();






	/////////////////////////
	// -f1;
	// f1.print();





	/////////////////////////
	//Fraction f3 = f1 / f2;

	//f1.print();
	//f2.print();
	//f3.print();

	//Fraction f4 = operator/(f1, f2);
	// f4.print();



	// Fraction f5 = f1.operator*(f2);
	// f5.print();








	/////////////////////////
	// cout << (f1 != f2) << endl;



	/////////////////////////
	// cout << !f1 << endl;






	/////////////////////////
	// Prefix

	(++f1).print();
	(--f1).print();



	///////////////////////
	// Postfix

	(f1--).print();
	(f1++).print();
	f1.print();







	/////////////////////////
	//// Task

	// Box
	// width
	// lenght

	// +
	// - binary
	// - unary
	// *
	// +=
	// ++ (postfix)
	// -- (prefix)
	// == 
	// > 

	return 0;
}





// Problem
int main1()
{
	int num1 = 10;
	int num2 = 20;

	int result = num1 * num2;


	Fraction f1(1, 4);
	Fraction f2(2, 4);

	//Fraction f3 = f1 + f2;
	//// 
	//cout << f2 << endl;
	//// 
	//if (f2)
	//{

	//}

	//f1 == f2;


	return 0;
}
#include <iostream>
#include <vector>

using namespace std;


class Base {
protected:
	int value;
	Base(int value) : value(value) {}
public:

	virtual string getName() { return "Base"; }
	int getValue() { return value; }
};


class Derived1 : public Base {
public:
	Derived1(int value) : Base(value) {}

	virtual string getName() override { return "Derived1"; } // override

	int getDoubleValue() { return value * 2; }
};


class Derived2 : public Base {
public:
	Derived2(int value) : Base(value) {}

	string getName() { return "Derived2"; }   // override
	int getDoubleValue() { return value * 2; }
};


void main1()
{
	{
		//// Base b(5); // protected constructor
		//Derived d(15);
	}



	//{
	//	Derived1 d(5);
	//	cout << d.getName() << endl;
	//	cout << d.Base::getName() << endl;
	//}




	//{
	//	Derived1 d(5);

	//	Derived1* ptr = &d;
	//	Derived1& ref = d;

	//	cout << ref.getName() << endl;
	//	cout << ptr->getName() << endl;
	//}




	//{
	//	Derived1 d(5);

	//	Base* ptr = &d;
	//	Base& ref = d;
	//	Base self = d;


	//	cout << self.getName() << endl;
	//	cout << ref.getName() << endl;
	//	cout << ptr->getName() << endl;
	//}



	//{
	//	Derived1 d1(15);
	//	Derived2 d2(25);
	//	Derived2 d3(25);


	//	// Base& ref = d1;
	//	// cout << ref.getName() << endl;


	//	Base* arr[]{ &d1, &d2, &d3 };

	//	vector<Base*> arr2;

	//	arr2.push_back(&d1);
	//	arr2.push_back(&d2);
	//	arr2.push_back(&d3);

	//	for (size_t i = 0; i < arr2.size(); i++)
	//		cout << arr[i]->getName() << endl;

	//}
}













class Animal {
protected:
	string name;
	Animal(string name) : name(name) {}
public:

	string getName() { return name; }
	virtual void animalSound() { cout << "?????\n"; }
};


class Cat : public Animal {
public:
	Cat(string name) : Animal(name) {}
	virtual void animalSound() override { cout << "Meeoow\n"; }
};

class Dog : public Animal {
public:
	Dog(string name) : Animal(name) {}
	virtual void animalSound() override { cout << "Hoowhoow\n"; }
};




void show(Animal* animal) {
	animal->animalSound();
}


void main()
{
	vector<Animal*> animals;

	animals.push_back(new Cat("Mestan"));
	animals.push_back(new Dog("Toplan"));

	for (size_t i = 0; i < animals.size(); i++)
	{
		cout << animals[i]->getName() << " - ";
		animals[i]->animalSound();
	}




	//// UpCasting
	/*Animal* animal = new Dog("Dogggg");
	cout << animal->getName();
	animal->animalSound();*/


	// DownCasting
	//for (size_t i = 0; i < animals.size(); i++)
	//	if (animals[i]->getName() == "Mestan")
	//		((Cat*)animals[i])->animalSound();


}



















//
//#define PI 3.14
//
//class Shape {
//protected:
//	string name;
//	double width;
//	double height;
//
//	Shape(string name, double width, double height)
//		: name(name), width(width), height(height) {}
//
//public:
//
//	virtual double area() { return 0; };
//	virtual double perimeter() { return 0; };
//	virtual double length() { return 0; };
//
//	string get_name() { return name; };
//};
//
//
////// final keyword
//
//class Rectangle final : public Shape {
//public:
//	Rectangle(string name, double width, double height)
//		: Shape(name, width, height) {}
//
//	double area() final override { return width * height; }
//	double perimeter() override { return 2 * (width + height); }
//};
//
//
////	class Square : public Rectangle {
////	public:
////		Square(string name, double side)
////			: Rectangle(name, side, side) {}
////	
////		// double area() final override { return 5 * 5; }
////	};
//
//
//
//
//class Circle : public Shape {
//	double radius;
//public:
//	Circle(string name, double radius)
//		: Shape(name, 0, 0) {
//		this->radius = radius;
//	}
//
//	double area() override { return PI * radius * radius; }
//	double length() override { return 2 * PI * radius; }
//};
//
//
//
//
//
//
//void main() {
//	vector<Shape*> figures;
//
//	figures.push_back(new Rectangle("Rectangle", 3, 5));
//	figures.push_back(new Circle("Circle", 10));
//	// figures.push_back(new Square("Square", 5));
//
//
//	for (size_t i = 0; i < figures.size(); i++)
//	{
//		cout << figures[i]->get_name()
//			<< ' ' << figures[i]->area()
//			<< ' ' << figures[i]->perimeter()
//			<< ' ' << figures[i]->length() << endl;
//	}
//}
#include <iostream>

using namespace std;


/*
struct A {
	A() { cout << "A\n"; }
	A(int) { cout << "A int\n"; }
	~A() { cout << "A des\n"; }
};

struct B : A {
	B() { cout << "B\n"; }
	B(int a) :A(a) { cout << "B int\n"; }
	~B() { cout << "B des\n"; }
};

struct C : B {
	C() { cout << "C\n"; }
	C(int a) :B(a) { cout << "C int\n"; }
	~C() { cout << "C des\n"; }
};

void main()
{
	C* C02 = new C(2);
	delete C02;
}
*/







class SMS {
public:
	int id = 1;
	string text;
	string from;
	string to;

	void send() { cout << "Send with SMS\n"; }
};

class Email {
public:
	int id = 2;
	string subject;
	string body;
	string from;
	string to;

	void send() { cout << "Send with Email\n"; }
};



enum Services { EmailService, SmsService };


class MessageService : public SMS, public Email {
public:
	void send(Services service) {
		switch (service)
		{
		case EmailService:
			Email::send();
			break;
		case SmsService:
			SMS::send();
			break;
		default:
			cout << "Default\n";
			break;
		}
	}
};

//
//void main() {
//	MessageService ms;
//	ms.send(Services::SmsService);
//
//	// ms.SMS::send();
//	// ms.Email::send();
//}







class ElectronicDevice {
public:
	int id = 1;
	string color;
	string model;
	ElectronicDevice()
	{
		cout << "ElectronicDevice\n";
	}
};


// virtual base class
class Printer : public virtual ElectronicDevice {};
class Scanner : public virtual ElectronicDevice {};


class Copier : public Printer, Scanner {};


void main()
{
	cout << sizeof(Copier) << endl;
	Copier c;
	cout << c.id << endl;

}



//   ED    ED         //     ED
// 	 |	   |          //   /    \
//   P     S          //  P      S
// 	  \	  /	          //   \    /
//      C	          //     C
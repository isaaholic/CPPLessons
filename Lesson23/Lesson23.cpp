#include <iostream>
#include <cassert>

using namespace std;

class User
{
	static int _staticId;
	int* _id = nullptr;
	char* _username = nullptr;
	char* _password = nullptr;

public:
	User()
	{
		cout << "Default ctor\n";
		_id = new int(_staticId++);
	}

	User(const char* username, const char* password)
	{
		cout << "Ctor with Param\n";

		set_username(username);
		set_password(password);

		_id = new int(_staticId++);
	}

	void set_username(const char* username)
	{
		assert(!(username == nullptr));

		if (_username != nullptr) delete[] _username;

		size_t len = strlen(username) + 1;
		_username = new char[len];
		strcpy_s(_username, len, username);
	}

	void set_password(const char* password)
	{
		assert(!(password == nullptr));

		if (_password != nullptr)
			delete[] _password;

		size_t len = strlen(password) + 1;
		_password = new char[len];
		strcpy_s(_password, len, password);
	};


	User(const User& other) {
		cout << "Copy Constructor\n";

		_id = new int(*other._id);
		set_username(other._username);
		set_password(other._password);
	}

	User& operator=(const User& other) {
		cout << "Copy Assigment Operator\n";

		_id = other._id;
		this->_username = other._username;
		this->_password = other._password;

		return *this;
	}

	void print() const {
		cout << "\nAddress id: " << (_id ? _id : 0) << endl;
		cout << "Id: " << (_id ? *_id : 0) << endl;
		cout << "Username: " << (_username ? _username : "null") << endl;
		cout << "Password: " << (_password ? _password : "null") << endl;
	}


	~User()
	{
		cout << "\nDestructor for-> " << (_id ? _id : 0) << endl;
		delete _id;
		delete[] _username;
		delete[] _password;
	}
};


int User::_staticId = 1;



void foo(User user) {}


int main()
{
	// Shallow
	// Deep


	User u1("Hakuna", "Matata");
	//User u2 = u1; // Copy Constructor
	User u2(u1);  // Copy Constructor

	User u3;
	u3 = u1;  // Copy Assignment Operator


	cout << &u1 << endl;
	cout << &u3 << endl;


	//u1.print();
	//// u2.print();
	//u3.print();


	//// foo(u1);


	//// User users[]{u1, u2};


	return 0;
}
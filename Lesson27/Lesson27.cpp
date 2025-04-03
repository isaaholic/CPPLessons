#include <iostream>
#include <cassert>
#include <string>

using namespace std;


#include "FunctionTemplate.h"

#include "ClassTemplate.h"
#include "SpecializationTemplate.h"

#include "NonTypeArguments.h"
#include "MethodBodyOutsideClass.h"

#include "PartialSpecializationTemplate.h"

class User
{
	string _username;
	string _password;
	string _email;
	friend class Database;
public:
	User() {};
	User(string username, string password, string email) : _username(username), _password(password), _email(email) {}
	void setUsername(string username)
	{
		if (username.length() < 3) assert(!"Length of Username must be equal or greater than 3");
		_username = username;
	}
	string getUsername() { return _username; }
	void setPassword(string password)
	{
		if (password.length() < 8) assert(!"Length of Password must be equal or greater than 6");
		_password = password;
	}
	void setEmail(string email)
	{
		if (email.find("@") == string::npos) assert(!"Email must contain @");
		_email = email;
	}
	string getEmail() { return _email; }

	string operator()() { return _username + " " + string(this->_password.length(), '*') + " " + _email; }
	bool operator==(const User& user) { return _username == user._username || _email == user._email; }
	friend ostream& operator<<(ostream& os, const User& user)
	{
		os << user._username << " " << string(user._password.length(), '*') << " " << user._email;
		return os;
	}
	friend istream& operator>>(istream& is, User& user)
	{
		string tempusername;
		string temppassword;
		string tempemail;
		is >> tempusername >> temppassword >> tempemail;
		user.setUsername(tempusername);
		user.setPassword(temppassword);
		user.setEmail(tempemail);
		return is;
	}
	bool operator>(const User& user) { return _username > user._username; }
	bool operator<(const User& user) { return _username < user._username; }
};


class Database
{
	User** _data;
	size_t _size;
public:
	Database()
	{
		_data = nullptr;
		_size = 0;
	}

	Database(User** data, size_t size) : _data(data), _size(size) {}

	bool Add(User* entity)
	{
		for (size_t i = 0; i < _size; i++)
		{
			if (_data[i] == entity) return false;
		}
		User** temp = new User * [_size + 1];
		for (size_t i = 0; i < _size; i++)
		{
			temp[i] = _data[i];
		}
		temp[_size] = entity;
		_size++;
		delete[] _data;
		_data = temp;
		return true;
	}

	bool check(User* entity)
	{
		for (size_t i = 0; i < _size; i++)
		{
			if (_data[i] == entity)
			{
				return entity->_password.compare(_data[i]->_password) == 0;
			}
		}
		return false;
	}

	bool check(string username, string password)
	{
		for (size_t i = 0; i < _size; i++)
		{
			if (_data[i]->_username == username)
			{
				return password.compare(_data[i]->_password) == 0;
			}
		}
		return false;
	}

	User* getByUsername(string username)
	{
		for (size_t i = 0; i < _size; i++)
		{
			if (_data[i]->_username.compare(username) == 0)
			{
				return _data[i];
			}
		}
		return nullptr;
	}

	User* operator[](size_t index)
	{
		if (index < _size)
		{
			return _data[index];
		}
		return nullptr;
	}

	~Database()
	{
		if (_data != nullptr)
		{
			for (size_t i = 0; i < _size; i++)
			{
				delete _data[i];
			}
			delete[] _data;
		}
	}
};


void main() {
	//mainFunction();
	//mainClass();
	// mainSpecial();
	//mainNonType();
	//mainMethodOutside();
	//mainPartialSpecial();
	User* user = new User();
	cin >> *user;
	cout << *user;
	Database db;
	db.Add(user);
	cout << db.check("user", "password") << endl;
	cout << db.check(user) << endl;
	cout << db.check("isaaholic","ruhi1234") << endl;
}
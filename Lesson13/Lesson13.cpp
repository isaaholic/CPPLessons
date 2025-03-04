#include <iostream>

using namespace std;

int myStrToNum(char* str) {
	int result = 0;
	size_t len = strlen(str);

	for (size_t i = 0; i < len; i++)
	{
		result = result * 10 + int(str[i]) - 48;
	}

	return result;
}



void myStrRev(char* str) {
	size_t len = strlen(str);

	char temp;
	for (size_t i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

//
//int main() {
//	// char* strNumber = new char[] {"265"};
//	// cout << myStrToNum(strNumber) << endl;
//
//
//	char* str = new char[] {"Salamlar"};
//	myStrRev(str);
//	cout << str << endl;
// 
//}




int main()
{
	//std::cout << "Hello World!\n";
	//string s = "";

	// way 1

	//char str[30]{ 'S', 'a', 'l', 'a', 'm' };
	//cout << str << endl;


	// // way 2
	/*char str[]{ 'S', 'a', 'l', 'a', 'm','\0' };
	cout << str << endl;
	cout << size(str) << endl;*/



	// // way 3
	 //char str[] = "salam";
	 //cout << str << endl;




	// // way 4
	//const char* str = "salam";
	//cout << str << endl;

	//int len = strlen(str);

	//cout << "Len: " << len << endl;




	//const char* str = "salam";
	//cout << str << endl;
	//cout << &str[0] << endl;


	// cout << str[2] << endl;
	//cout << &str[2] << endl;







	//char* txt = new char[6] {'T', 'u', 'r', 'a', 'l', '\0' };
	//cout << txt << endl;






	//char text[30];

	//cout << "enter text: ";
	//cin.getline(text, 3);

	//size_t len = strlen(text) + 1;

	//char* fixedtext = new char[len];

	//strcpy_s(fixedtext, len, text);

	//cout << "text: " << fixedtext << endl;

	//delete[] fixedtext;
	//fixedtext = nullptr;


	/*{
		char name[30];
		char surname[30];

		cout << "Enter name: ";
		cin.getline(name, 30);

		cout << "Enter surname: ";
		cin.getline(surname, 30);

		size_t lenName = strlen(name) + 1;
		size_t lenSurname = strlen(surname) + 1;

		char* fixedName = new char[lenName];
		char* fixedSurname = new char[lenSurname];

		strcpy_s(fixedName, lenName, name);
		strcpy_s(fixedSurname, lenSurname, surname);

		cout << "Name: " << fixedName << endl;
		cout << "Surname: " << fixedSurname << endl;
	}









	{
		char* name = new char[31] {};
		char* space = new char[1] {' '};
		char* surname = new char[30] {};

		cin.getline(name, 30);
		cin.getline(surname, 30);

		name[30] = ' ';

		size_t nameLen = strlen(name);
		size_t surnameLen = strlen(surname);


		size_t fullNameLen = nameLen + surnameLen + 1;

		char* fullName = new char[fullNameLen] {};

		strcpy_s(fullName, fullNameLen, name);
		strcat_s(fullName, fullNameLen, surname);

		cout << fullName;
	}*/

	//char* text = new char[4] {'1', '2', '3', '\0' };

	//cout << myStrToNum(text) << endl;
	//char* str = new char[] {"Salamlar"};
	//myStrRev(str);
	//cout << str << endl;

	//char myText[7] = "Gulcin";
	//for (char c : myText)
	//{
	//	cout << c << endl;
	//}

	string text = "Salam";

	cout << text << endl;
}
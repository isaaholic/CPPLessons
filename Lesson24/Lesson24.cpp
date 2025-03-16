#include <iostream>
#include <string>

using namespace std;


int main()
{
	//string text = "Huseyn";
	// 
	//cout << text << endl;
	//cout << text.size() << endl;    // same 
	//cout << text.length() << endl;  // same 
	//cout << text.max_size() << endl;
	//cout << text.capacity() << endl;







	///////////////////////////
	//// string methods




	//// capacity, reserve, resize, shrink_to_fit

	//string str(50, '*');
	//cout << str << endl;
	//// 
	//cout << "1) Capacity: " << str.capacity() << endl;
	////  
	//str.resize(13);
	//// 
	//cout << str << endl;
	//cout << "2) Capacity: " << str.capacity() << endl;
	////  
	//str.shrink_to_fit();
	//// 
	//cout << str << endl;
	//cout << "3) Capacity: " << str.capacity() << endl;
	//// 
	//str.reserve(31);
	//// 
	//cout << str << endl;
	//cout << "4) Capacity: " << str.capacity() << endl;







	//// clear, empty

	//string text = "Happy Programmers Day!";
	//cout << text << endl;

	//text.clear();
	//cout << "After clear" << endl;
	//// 
	//if (text.empty())
	//	cout << "No data" << endl;
	//else
	//	cout << text << endl;
	//// 
	//cout << text.capacity() << endl;
	//// 
	//text.shrink_to_fit();
	//cout << text.capacity() << endl;







	// string operator +=, +,  =, ==, []
	// at method

	//string text = "Hello";
	//text += " Tural";
	//text = text + " bey";
	//cout << text << endl;



	//string text1 = "Hello";
	//string text2 = text1;

	//text1 += ' ';
	//text1 += "World";

	//cout << text1 << endl;
	//cout << text2 << endl;





	//string text1 = "armu";
	//string text2 = "alma";
	//cout << (text1 == text2) << endl;
	//cout << text1.compare(text2) << endl;








	//string text = "Happy Programmers Day!";

	//for (size_t i = 0; i < text.size(); i++)
	//{
	//	 cout << text[i] << endl;
	//	 cout << text.at(i) << endl;
	//}






	//string text = "Happy Programmers Day!";
	//text[0] = 'Y';
	//cout << text << endl;

	//cout << text.front() << endl;
	//text.front() = 'H';
	//cout << text << endl;

	//cout << text.back() << endl;

	//text.insert(text.begin() + 1, 'Z');
	//text.insert(10, "Begin");
	//cout << text << endl;




	//text.replace(1, 2, "Max");
	//cout << text << endl;

	//text.append("Hakuna");
	//text.append(5, 'I');
	//cout << text << endl;



	//text.push_back('n');
	//cout << text << endl;
	//// 
	//// 
	//text.pop_back();
	//cout << text << endl;






	//string text = "Hi ";
	//text.assign("Tural"); // =
	//cout << text << endl;

	//string text = "message";
	//cout << "Index : " << text.find('o') << endl;
	//cout << "Index : " << text.rfind('s') << endl;





	//string n = "Vasif";
	//cout << n.c_str() << endl;
	//cout << n.data() << endl;







	// string n = "123";
	// 
	// int number = stoi(n);
	// cout << number << endl;


	 //int number = 123;
	 //string n = to_string(number);
	 //cout << n << endl;
	 //cout << n[0] << endl;




	 //string name = "Eminem";

	 //cout << name << endl;




	//string name1 = "Leyla";
	//string name2 = "Isa";

	//name1.swap(name2);

	//cout << name1 << endl;
	//cout << name2 << endl;





	//string name = "Eminem";
	//string subString = name.substr(1, 100);
	//cout << subString << endl;





	string name;
	cout << "Enter name: ";
	cin >> name;
	cout << name << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	string fullname;
	cout << "Enter fullname: ";
	getline(cin, fullname);
	cout << fullname << endl;

}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// \0 -> null-terminator dur menasi ise NULL dur

	//srand(time(0));
	//cout << left;
	////cout << setw(10);
	//cout << setw(15) << "Ad: " <<setw(10)<< "Isa" << endl;
	//cout << setw(15) << "Soyad: " << setw(10) << "Mammadli" << endl;
	//cout << right;
	//cout << setw(15) << "Yas: " << setw(10) << "22" << endl;
	//cout << setw(15) << "Qan Qrupu: " << setw(10) << "O+" << endl;
	//cout << boolalpha;
	//cout << true << endl;
	//cout << false << endl;



	 //int test[2][3] = { 
	 //	{2, 4, 5}, 
	 //	{9, 0, 19} 
	 //};
	// 
	//int test[2][3] = { 2, 4, 5, 9, 0, 19 };

	//cout << left;

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << i << ',' << j << " : " << setw(12) << test[i][j];
	//	}
	//	cout << endl;
	//}



	//cout << test << endl;
	// cout << test[0] << endl;
	// cout << &test[0][0] << endl;











	// const int size = 5;
	// int  arr[size][size];
	// 
	// for (size_t i = 0; i < size; i++)
	// {
	// 	  for (size_t j = 0; j < size; j++)
	// 	  {
	// 	  	  if (i % 2 == 0) arr[i][j] = 1;
	// 	  	  else arr[i][j] = 0;
	// 	  	  
	// 	  	  cout << setw(5) << arr[i][j];
	// 	  }
	// 	cout << endl;
	// }





	//int myArr[3] = { 1,2,3 };

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << *(myArr + i) << endl;
	//}

	//int my2dArr[2][3] = { 1,2,3,4,5,6 };

	////for (int i = 0; i < 2; i++)
	////{
	////	for (int j = 0; j < 3; j++)
	////	{
	////		// i 0
	////		cout << *(*(my2dArr + i * 3)) << endl;
	////	}
	////}

	/*char myChessBoard[8][8]{};

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
				myChessBoard[i][j] = 178;
			else
				myChessBoard[i][j] = 176;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		cout << "\033[0m" << 8 - i << ' ';
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
				cout << "\033[34m";
			else cout << "\033[33m";
			cout << setw(2) << myChessBoard[i][j];
		}
		cout << endl;
	}

	cout <<  "\033[0m"<<setw(4)  << 'a' << setw(2) << 'b' << setw(2) << 'c' << setw(2) << 'd' << setw(2) << 'e' << setw(2) << 'f' << setw(2) << 'g' << setw(2) << 'h';*/

	char myIntTable[5][5]{};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			myIntTable[i][j] = 65 + j;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			cout << ' ';
		}
		for (int j = 0; j < i + 1; j++)
		{
			if (i % 2 == 0)
				cout << myIntTable[i][j];
			else
				cout << int(myIntTable[i][j] - 64);
		}
		cout << endl;
	}
}
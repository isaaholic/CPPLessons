#include <iostream>
#include <conio.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

void fillArray(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
		arr[i] = rand() % 30;
}


void printArray(int* arr, int size) {
	cout << "\nArray elements: ";
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

int* append(int* arr, int* sizeAddr, int element)
{
	if (arr == nullptr)
		return NULL;
	int* newArr = new int[*sizeAddr+1] {};

	for (int i = 0; i < *sizeAddr; i++)
	{
		newArr[i] = arr[i];
	}

	newArr[*sizeAddr] = element; // 10 -> 9 kohne array, 11 -> 10 new array
	(*sizeAddr)++; // 10 -> 11
	delete[] arr;
	arr = nullptr;
	return newArr;
}

int main()
{
	srand(time(NULL));
	/*int choice = 0;
	while (true)
	{
		system("cls || clear");
		cout << "Yeni oyun" << (choice == 0 ? "<<" : "") << endl;
		cout << "Saveler" << (choice == 1 ? "<<" : "") << endl;
		cout << "Cixis" << (choice == 2 ? "<<" : "") << endl;

		int c = 0;
		switch (c = _getch())
		{
		case KEY_UP:
			if (choice > 0) choice--;
			else choice = 2;
			break;
		case KEY_DOWN:
			if (choice < 2) choice++;
			else choice = 0;
			break;
		case KEY_LEFT:
			break;
		case KEY_RIGHT:
			break;
		default:
			break;
		}
	}*/

	// new
	// delete
	// delete[]

	double x = 13.4;
	double* ptr = &x;



	//{
	//	double* ptr = new double(42); // ptr stackde saxlanilacak 42 deyeri heapde saxlanilacaq ptr in deyeri 42 in heapdeki addresi olacaq
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//	delete ptr;
	//}

	//{
	//	double* ptr = new double[10] {};

	//	cout << ptr << endl;


	//	for (size_t i = 0; i < 10; i++)
	//	{
	//		cout << ptr[i] << ' ';
	//	}

	//	delete[] ptr;
	//	ptr = nullptr;
	//	cout << "\0" << endl;
	//	cout << ptr << endl;
	//}

	int* sizeArr = new int(10);
	int* arr = new int[*sizeArr];
	fillArray(arr, *sizeArr);
	printArray(arr, *sizeArr);
	arr = append(arr, sizeArr, 11);
	printArray(arr, *sizeArr);
}
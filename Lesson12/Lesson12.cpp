#include <iostream>
#include <iomanip>

using namespace std;

int addition(int num1, int num2)
{
	return num1 + num2;
}

int substraction(int num1, int num2)
{
	return num1 - num2;
}

int calc(int num1, int num2, int (*fncPtr)(int, int))
{
	return fncPtr(num1, num2);
}

void showEven(int min, int max)
{
	for (int i = min; i <= max; i++)
		if (!(i % 2)) cout << i;
}

void fillArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30;
	}
}

void showArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int* instertBlockToArr(int* arr, int* size, int* block, int* blockSize, int index)
{
	int* newArr = new int[*size + *blockSize];

	for (int i = 0; i < index; i++)
	{
		newArr[i] = arr[i];
	}

	for (int i = index, j = 0; i < index + *blockSize; i++, j++)
	{
		newArr[i] = block[j];
	}

	for (int i = index + *blockSize, j = index; i < *size + *blockSize; i++, j++)
	{
		newArr[i] = arr[j];
	}

	*size += *blockSize;
	delete[] arr;
	arr = nullptr;
	return newArr;
}

int main()
{
	srand(time(NULL));
	//int (*fncPtr)(int, int); // function pointer - pointer to function
	//fncPtr = addition;
	//int num1, num2;
	//cout << "Enter num1, num2";
	//cin >> num1 >> num2;
	//char op;
	//cout << "Enter op: ";
	//cin >> op;



	//switch (op)
	//{
	//case '+':
	//	fncPtr = addition;
	//	break;
	//case '-':
	//	fncPtr = substraction;
	//	break;
	//default:
	//	break;
	//}
	//cout << calc(num1, num2, fncPtr);

	//void* ptr;
	//int x = 5;
	//double y = 3;

	//ptr = &x;
	//int* intPtr = &x;
	//cout << *(int*)ptr << endl;
	//cout << *intPtr << endl;
	//ptr = &y;
	//cout << ptr << endl;






	// int sX1;
	// int sX2 = 42;
	// int sX3[5];
	// int sX4[5]{ 1,2,3,4,5 };
	// 
	// int* hX1 = new int;
	// int* hX2 = new int(42);
	// int* hX3 = new int[5];
	// int* hX4 = new int[5]{ 1,2,3,5};





	//int x = 10;
	//// 
	//int* sp1;
	//int* sp2(&x);
	//int* sp3 = &x;
	//int* sp2[5];
	//int* sp2[5]{ &x, &x, &x, &x, &x };
	//// 
	//int** hp1 = new int*;
	//int** hp2 = new int* (&x);
	//int** hp3 = new int* [5];
	//int** hp4 = new int* [5] { &x, & x, & x, & x, & x };

	int** mulTab = new int* [5];

	for (int i = 1; i < 6; i++)
	{
		int* arr = new int[5];
		for (int j = 1; j < 6; j++)
		{
			arr[j - 1] = i * j;
		}
		mulTab[i - 1] = arr;
	}

	cout << left;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << setw(5) << mulTab[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		delete[] mulTab[i];
	}

	delete[] mulTab;

	mulTab = nullptr;

	int* size1 = new int(5);
	int* size2 = new int(3);
	int* arr1 = new int[*size1];
	int* arr2 = new int[*size2];

	fillArr(arr1, *size1);
	fillArr(arr2, *size2);
	showArr(arr1, *size1);
	showArr(arr2, *size2);
	arr1 = instertBlockToArr(arr1, size1, arr2, size2, 2);
	showArr(arr1, *size1);

	delete size1;
	delete size2;
	delete[] arr1;
	delete[] arr2;
}
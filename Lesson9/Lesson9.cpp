#include <iostream>

using namespace std;

// // by value     (copy)
// // by reference (self)
// // by pointer   (address)




// int arr[] == int* arr


void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++)
		cout << *(arr + i) << ' ';
	cout << endl;
}


void fillArray(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
		arr[i] = rand() % 30;
}

int main()
{
	//int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	//int n = sizeof arr / sizeof arr[0];


	//// Linear Search
	//int find = 25;
	//bool isFind = false;
	//int findedIndex = -1;

	//for (int i = 0; i < n; i++)
	//{
	//	if (arr[i] == find) {
	//		isFind = true;
	//		findedIndex = i;
	//		break;
	//	}
	//}
	//// ?:
	//isFind ? cout << "Found - index = " << findedIndex << "\n" : cout << "Can not find\n";

	//int arr[] = { 11, 12, 22, 25, 34, 64, 90,1531,1634,2432 };
	//int n = sizeof arr / sizeof arr[0];

	//// Binary Search
	//bool result = false;
	//int x = 33;

	//int h = n - 1; // 10
	//int l = 0;
	//int mid;

	//while (h >= l) {
	//	mid = (l + h) / 2; // 5

	//	if (arr[mid] == x) {
	//		result = true;
	//		break;
	//	}
	//	else if (arr[mid] > x)
	//		h = mid - 1;
	//	else
	//		l = mid + 1;

	//}


	//(result)
	//	? cout << "Element is present at index: " << mid << '\n'
	//	: cout << "Element is not present in array: " << x << '\n';







	// Lesson Pointer

	// Variable - adi, tipi, deyeri, olchusu, adresi
	// olan RAM-da saxlanilan yaddash sahesidir.

	// Pointer -  deysihenin adresini
	// saxlayan deyishendir.




	// & address of



	 //int number = 10;
	 //int* ptr = &number;

	 ////cout << sizeof ptr << endl;

	 //cout << typeid(number).name() << endl;
	 //cout << typeid(ptr).name() << endl;

	 //cout << number << endl;
	 //cout << ptr << endl;
	 //cout << &number << endl;




	// ///////////////////////////////////
	// * dereference operator / indirection
	// 
	// 
	// 
	//int number = 10;
	//int data = 50;
	//int* ptr1 = &number;
	//int* ptr2 = &number;
	//// 
	//*ptr1 = 30;
	//number = 20;
	//// 
	//ptr1 = &data;
	//// 
	//*ptr2 = 25;
	//*ptr1 = 100;
	//// 
	//cout << number << endl;
	//cout << data << endl;
	//cout << *ptr1 << endl;
	//cout << *ptr2 << endl;
	//cout << ptr1 << endl;
	//cout << ptr2 << endl;
	//cout << &data << endl;
	//cout << &number << endl;






	// ///////////////////////////////////
	// 
	// // Swap with pointers
	//double x = 15.3;
	//double y = 77.57;
	//double temp;
	//// 
	//double* xPtr = &x;
	//double* yPtr = &y;
	//double* tempPtr = &temp;
	//// 
	//// 
	//*tempPtr = *xPtr;
	//*xPtr = *yPtr;
	//*yPtr = *tempPtr;
	//// 
	//cout << x << ' ' << y << endl;




	// ///////////////////////////////////

	//int x, y, * xPtr, * yPtr;
	//// 
	// cout << "Enter number 1: ";
	// cin >> x;
	// 
	// cout << "Enter number 2: ";
	// cin >> y;
	//// 
	// xPtr = &x;
	// yPtr = &y;
	// 
	// if (*xPtr > *yPtr) cout << *xPtr << endl;
	// else cout << *yPtr << endl;





	//float n1, n2;
	//char op;

	//float* n1Ptr = &n1;
	//float* n2Ptr = &n2;
	//char* opPtr = &op;


	//cout << "Enter number 1: ";
	//cin >> n1;

	//cout << "Enter operation (*, /, +, -): ";
	//cin >> op;

	//cout << "Enter number 2: ";
	//cin >> n2;

	//float result = 0;

	//switch (*opPtr)
	//{
	//case '*':
	//	result = *n1Ptr * *n2Ptr;
	//	break;
	//case '/':
	//	result = *n1Ptr / *n2Ptr;
	//	break;
	//case '+':
	//	result = *n1Ptr + *n2Ptr;
	//	break;
	//case '-':
	//	result = *n1Ptr - *n2Ptr;
	//	break;
	//default:
	//	cout << "Error\n";
	//	break;
	//}

	//cout << *n1Ptr << ' '
	//	<< *opPtr << ' '
	//	<< *n2Ptr << " = " << result;

	int arr1[14] = {};
	fillArray(arr1, 14);
	printArray(arr1, 14);

	int x = 15;
	int y = 23;

	system("pause");
}
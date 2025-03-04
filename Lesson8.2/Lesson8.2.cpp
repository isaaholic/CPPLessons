#include <iostream>
#include <iomanip>

using namespace std;

int x; // Default 0


////  (Function Prototype, Inline Function, Default parameter, Template Function)

// Template Function
//
//template<typename T>
//T addition(T num1, T num2, int num3 = 0)
//{
//	return num1 + num2;
//}
//
//template<typename T1,typename T2>
//void showArr(T1 arr[],T1 size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//}
//
//void main()
//{
//	float num1 = 20.3f;
//	float num2 = 15.4f;
//
//	float result = addition<double>(num1, num2);
//
//	cout << result << endl;
//}



template<typename Type>
Type absolute(Type value) {
	// Type temp;

	cout << "Template function\n";
	cout << typeid(Type).name() << endl;


	if (value < 0.0) value = -value;
	return value;
}

int absolute(int value) {
	cout << "Common function\n";

	if (value < 0.0) value = -value;
	return value;
}

int main() {
    cout << absolute(5) << endl;
    cout << absolute<int>(5) << endl;
}








// Template function overlaod
/*
template<typename T>
void display(T val) {
	cout << typeid(T).name() << endl;
	cout << val << endl;
}

template<typename T1, typename T2>
void display(T1 val, T2 data) {
	cout << typeid(T1).name() << endl;
	cout << typeid(T2).name() << endl;

	cout << val << endl;
	cout << data << endl;
}

int main() {
	display(23, 'A');
}
*/


template<typename T>
void display(T arr[], int n) {
	T temp;

	cout << typeid(T).name() << endl;

	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

//
//int main() {
//	const int n = 5;
//	float arr[n]{ 1,2,3,45,76 };
//	display(arr, n);
//
//}
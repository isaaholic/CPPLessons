#include <iostream>
#include <cmath>

using namespace std;

void fillArray(int arr[], int size, int min = 0, int max = 20)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void showArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int maxElementOfArr(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}

void fillArray(float arr[], int size, float min = 1.0f, float max = 2.0f)
{
	int localmin = min * 10;
	int localmax = max * 10;
	for (int i = 0; i < size; i++)
	{
		arr[i] = (localmin + rand() % (localmax - localmin + 1)) / 10.0f;
	}
}

void showArray(float arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

float maxElementOfArr(float arr[], int size)
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}

int main()
{
	srand(time(NULL));
	// def function_name(args): -> Python
	// returntype functionName(type param1,type2 param2) {} - C++
	// Ideal funksiya:
	// Adi gorduyu ise uygun olur
	// ve yalniz 1 is gorur
	// void -> deyer qaytarmayacaq
	// return vasitasi ile funksiyani dayandirmaq olur
	// qalan butun tipler deyer qaytarmalidir

	// Funksiyalar yaranmasina gore 2 yere bolunur:
	// user-defined functions
	// standart library functions

	// function overloading - eyni adli funksiyalarda ya parametlerin sayi ferqli olmalidir yadaki parametrlerin tipi ferqli olmalidir
	// default parameter - funksiya yarandigi anda oz deyeri olan deyisene deyilir, yazilis qaydasi ilk default parametrden sonra gelen butun parametler default olmalidir!

	const int arrsize = 10;
	int arr[arrsize] = {};
	fillArray(arr, arrsize);
	showArray(arr, arrsize);

	float maximumel = maxElementOfArr(arr, arrsize);
	cout << "Maximum element of Array is " << maximumel << endl;

	const int arr2size = 5;
	float arr2[arr2size]{};
	fillArray(arr2, arr2size, 11.5f, 12.0f);
	showArray(arr2, arr2size);

	maximumel = maxElementOfArr(arr2, arr2size);

	cout << "Maximum element of Array is " << maximumel << endl;

	return 0;
}
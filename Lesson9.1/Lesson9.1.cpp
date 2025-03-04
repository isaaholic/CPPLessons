#include <iostream>
#include <cmath>

using namespace std;

void fillArray(int* arr, int size, int* min, int* max)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = *min + rand() % (*max - *min + 1);
	}
}

float avgArray(int* arr, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	float avg = sum / size;

	return avg;
}

int nearArray(int* arr, int size, int* num)
{
	int temp = arr[0];
	int mindif = abs(temp - *num);
	for (int i = 1; i < size; i++)
	{
		int diff = abs(arr[i] - *num);
		if (diff < mindif)
		{
			mindif = diff;
			temp = arr[i];
		}
	}

	return temp;
}

void fillTask2Array(char* arr, int size, int* min, int* max)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 65 + (*min + (rand() % (*max - *min + 1)));
	}
}

template <typename T>
void showArray(T* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << ' ';
	}
	cout << endl;
}

template <typename T>
void absoluteArray(T* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0)
			arr[i] *= -1;
	}
}

int main()
{
	srand(time(NULL));
	int arr[10]{};
	int min = -20;
	int* minPtr = &min;
	int max = 20;
	int* maxPtr = &max;

	fillArray(arr, 10, minPtr, maxPtr);
	showArray(arr, 10);
	absoluteArray(arr, 10);
	showArray(arr, 10);

	char arr2[10]{};
	*minPtr = 0;
	*maxPtr = 25;

	fillTask2Array(arr2, 10, minPtr, maxPtr);
	showArray(arr2, 10);

	int arr3[10]{};
	*minPtr = 0;
	*maxPtr = 100;
	int avg;
	fillArray(arr3, 10, minPtr, maxPtr);
	showArray(arr3, 10);
	avg = avgArray(arr3, 10);
	int* avgPtr = &avg;
	int closestNum = nearArray(arr3, 10, avgPtr);
	cout << *avgPtr << endl;
	cout << closestNum << endl;
}
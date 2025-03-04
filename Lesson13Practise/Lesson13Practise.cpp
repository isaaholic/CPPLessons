#include <iostream>

using namespace std;

int main()
{
	//srand(time(0));
	//int task17[10]{};

	//for (int i = 0; i < 10; i++)
	//{
	//	task17[i] = rand() % 10;
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << task17[i] << ' ';
	//}

	//cout << endl;

	//for (int i = 0; i < 10; i += 2)
	//{
	//	int temp = task17[i]; // 0
	//	task17[i] = task17[i + 1]; // 0 => 1
	//	task17[i + 1] = temp; // 1=>0
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << task17[i] << ' ';
	//}

	//cout << endl;

	//int a[5]{};
	//int b[5]{};
	//int c[10]{};

	//for (int i = 0; i < 5; i++)
	//{
	//	a[i] = rand() % 10;
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << a[i] << ' ';
	//}
	//cout << endl;


	//for (int i = 0; i < 5; i++)
	//{
	//	b[i] = rand() % 10;
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << b[i] << ' ';
	//}
	//cout << endl;


	//for (int i = 0, j = 0; i < 10; i += 2, j++)
	//{
	//	c[i] = a[j];
	//	c[i + 1] = b[j];
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << c[i] << ' ';
	//}
	//cout << endl;


	//int arr[15]{};
	//int cpyarr[15]{};
	//int min = -5;
	//int max = 10;

	//for (int i = 0; i < 15; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//}

	//for (int i = 0; i < 15; i++)
	//{
	//	cout << arr[i] << ' ';
	//}
	//cout << endl;

	//int j = 0;

	//for (int i = 0; i < 15; i++)
	//{
	//	if (arr[i] < 0)
	//	{
	//		cpyarr[j] = arr[i];
	//		j++;
	//	}
	//}
	//for (size_t i = 0; i < 15; i++)
	//{
	//	if (arr[i] == 0)
	//	{
	//		cpyarr[j] = arr[i];
	//		j++;
	//	}
	//}
	//for (size_t i = 0; i < 15; i++)
	//{
	//	if (arr[i] > 0)
	//	{
	//		cpyarr[j] = arr[i];
	//		j++;
	//	}
	//}
	//for (int i = 0; i < 15; i++)
	//{
	//	cout << cpyarr[i] << ' ';
	//}
	//cout << endl;

	//char patterntop[4][4]{};
	//char patternbottom[3][4]{};

	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 3 - i; j++)
	//	{
	//		patterntop[i][j] = ' ';
	//	}
	//	for (int j = 3 - i; j < 4; j++)
	//	{
	//		patterntop[i][j] = '*';
	//	}
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << patterntop[i][j];
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		if (j - i > 0)
	//			patternbottom[i][j] = '*';
	//		else patternbottom[i][j] = ' ';
	//	}
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << patternbottom[i][j];
	//	}
	//	cout << endl;
	//}

	int staticarr[3][3]{}; // 3x3x4 = 36 byte 
	int** dynamicarr = new int* [3]; // 3x8 = 24 byte

	for (int i = 0; i < 3; i++)
	{
		int* newarr = new int[5];
		dynamicarr[i] = newarr; // 8 => 8 (24) byte
	}
}
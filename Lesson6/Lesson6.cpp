#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//srand(time(0));

	// Task ???

	// 4785 341

	//unsigned short length = 0;

	//int num = 3414785;

	//int temp = num;

	//int swipe = 3;

	//do
	//{
	//	temp /= 10;
	//	length++;
	//} while (temp > 0);

	//cout << "Length" << length << endl;

	//int temp_swipe = length - swipe;
	//temp = num;

	//int swiped_num = 0;

	//int x = 1;
	//do
	//{
	//	int step = temp % 10;// 4785341
	//	temp /= 10;
	//	swiped_num+=step*x;
	//	x *= 10;
	//	temp_swipe--;
	//} while (temp_swipe > 0);

	//cout << "Swiped num" << swiped_num << endl;
	//cout << "Temp" << temp << endl;


	//do
	//{
	//	swipe--;
	//	swiped_num *= 10;
	//} while (swipe>0);

	//int netice = temp + swiped_num;

	//cout << netice;


	 //cout << setprecision(3); // floating ededlerde ededin nece dene hissesinin cixacagini gosterir

	 //const double pi = 3.14159265359;
	 //const double pi2 = 30.14159265359;

	 //cout << fixed;

	 //cout << pi << endl;
	 //cout << pi2 << endl;


	// constant
	// 1) Compile-time
	// 2) Run-time


	 //int x;
	 //cout << "Enter x: ";
	 //cin >> x;
	 //const int num = x;
	 //
	 //cout << num << endl;


	//for (size_t i = 0; i < 10; i++)
	//{
	//	for (size_t j = 0; j < 10; j++)
	//	{
	//		cout << '*';
	//	}
	//	cout << endl;
	//}


	 //for (size_t i = 0, j = 0; i < 100 && j < 100; i += 3, j += 7) 
	 //{
	 //}

	// Array - eyni tipli deyerleri bir deyisen adi altinda saxlayir
	// type deyiseninadi[size] = {} - statik array
	// statik array -  olcusu sabit olan array e deyilir
	// Dinamik array - olcusunu istediyimiz kimi deyise bildiyimiz arraye deyilir


	//int sadereqeqmler[] = { 2,3,5,7 };

	//cout << sizeof(sadereqeqmler) << endl;
	//cout << sizeof(sadereqeqmler[3]) << endl;
	//cout << size(sadereqeqmler) << endl;
	//
	//cout << sadereqeqmler << endl;
	//cout << &(sadereqeqmler[1]) << endl;

	//for (size_t i = 0; i < size(sadereqeqmler); i++)
	//{
	//	cout << sadereqeqmler[i] << endl;
	//}
	//
	//int x;
	//cin >> x;
	//const int sizearr = x;
	//int cutreqemler[sizearr]; // error



	//double marks[5] = {};
	//
	//for (size_t i = 0; i < 5; i++)
	//{
	//	/*cout << "Enter "  << i + 1 << " : ";
	//	cin >> marks[i];*/
	//
	//	 marks[i] = rand();
	//}
	//
	//for (size_t i = 0; i < 5; i++)
	//	cout << marks[i] << ' ';







	 //double marks[5] = {10.5, 1.2, 6, 4.5, 8.5};

	//int marks[] = { 'A', 'B', 67, 68 };
	//int n = sizeof marks / sizeof marks[0];

	//for (size_t i = 0; i < n; i++)
	//	cout << marks[i] << ' ';




	//// Stack == 1mb FILO - First in Last out
	//int x = 5;
	//int y = 4;
	//int z = 10;


	// Task 1
	int arr_1[5]{};
	int min = 0;
	int max = 20;

	for (int i = 0; i < 5; i++)
	{
		arr_1[i] = min + rand() % (max - min + 1);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr_1[i] << ' ';
	}

	cout << endl;


	for (int i = 4; i >= 0; i--)
	{
		cout << arr_1[i] << ' ';
	}

	cout << endl;


	// Task 2
	int arr_2[20]{};
	min = 0;
	max = 20;

	for (int i = 0; i < 5; i++)
	{
		arr_2[i] = min + rand() % (max - min + 1);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr_2[i] << ' ';
	}

	cout << endl;


	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			cout << arr_2[i] << ' ';
	}

	cout << endl;


	// Task 3
	int arr_3[10]{};
	min = -20;
	max = 20;
	float sum_even = 0;
	int count_even = 0;

	for (int i = 0; i < 5; i++)
	{
		arr_3[i] = min + rand() % (max - min + 1);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr_3[i] << ' ';
	}

	cout << endl;


	for (int i = 0; i < 5; i++)
	{
		if (arr_3[i] >= 0)
		{
			sum_even += arr_3[i];
			count_even++;
		}
	}

	int result_3 = sum_even / count_even;

	cout << result_3 << endl;

	// Task 6
	char symbols[10]{};
	min = 0;
	max = 255;
	int count_letter = 0;
	int count_number = 0;
	int count_punk = 0;

	for (int i = 0; i < 10; i++)
	{
		symbols[i] = min + rand() % (max - min + 1);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << symbols[i] << ' ';
	}

	for (int i = 0; i < 5; i++)
	{
		if (symbols[i] >= 65 && symbols[i] <= 90 || symbols[i] >= 97 && symbols[i] <= 122)
			count_letter++;
		else if (symbols[i] >= 48 && symbols[i] <= 57)
			count_number++;
		else
			count_punk++;
	}

	cout << "Herflerin sayi: " << count_letter<<endl;
	cout << "Reqemlerin sayi: " << count_number << endl;
	cout << "Punktanasiyalarin sayi: " << count_punk << endl;

	cout << endl;
	system("pause");
}
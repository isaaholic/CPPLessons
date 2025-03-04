#include <iostream>

using namespace std;

int main()
{
	// Type Casting - Type Convertion - Bir tipden basqa bir tipe cevrilmeye deyilir
	// Implicit - qeyri-askar
	// Explicit - askar
	// 
	// C - style casting
	//int x = 5;
	//float y = float(x);
	//int z = 2;
	//float result = (float)x/z;
	// 
	// static_cast - Compilyator terefinden yoxlanilan ve sehv tiplerin cevrilmesine icaze vermeyen tehlukesizliyi temin eden t.c.
	//double pi = 3.14;
	//int x = static_cast<int>(pi);
	//string name = "Vusal";
	//int num = static_cast<int>(name);
	// 
	// reinterpret_cast - Adi tipi pointer tipe casting etmek ucun istifade olunur. Tehlukesiz castingdir cunki bit seviyesinde cast edir.
	//int num = 70;
	//char* chrptr = reinterpret_cast<char*>(&num);
	//cout << chrptr << ": " << chrptr << endl;
	// const_cast - const ifadesini silmek ucun istifade etdiyimiz castinge deyilir
	//const int age = 21;
	//int* ageptr = const_cast<int*>(&age);
	//*ageptr = 22;
	//cout << *ageptr << endl;
	//cout << age << endl;
	//float ageptr = const_cast<float>(age); ! error
	// 
	// 
	// Imtahan proyektinin uzerinden get!

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (j < i + 1 || j >= 21 - i - 1 || j == 10) cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (j + i < 10|| j-i>10 || j == 10) cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}
}
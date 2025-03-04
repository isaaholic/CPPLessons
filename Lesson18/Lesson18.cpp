#include <iostream>
#include <stdio.h>

using namespace std;

#pragma warning(disable:4996)

// input-- > giriş
// output-- > çıxış
// FILE-- > fayl-- > (stream)


//== = Modes == =
//
//b-- > binary
//
//1) write-- > yazmaq-- > "w"  -- > "wb"  -- > "w+"  -- > "wb+"
//2) read-- > oxumaq-- > "r"  -- > "rb"  -- > "r+"  -- > "rb+"
//3) append-- > əlavə etmək-- > "a"  -- > "ab"  -- > "a+"  -- > "ab+"

//	fopen_s-- > faylı açmaq
//	fclose-- > faylı bağlamaq

// putc-- > qoymaq, (yazmaq)
// getc-- > almaq, (oxumaq)

//putchar(int) -- > ASCII-- > Misal: 65 == 'A'

// EOF-- > End of File

//feof(file) -- > faylın sonun catdi

// Buffer-- > Bufer(yaddaş sahəsi)

// fputs-- > toplu yazmaq
// fgets-- > toplu oxumaq(aşkar, \n, son) (məlumatı buffer - ə köçürmək)

// fwrite-- > toplu yazmaq
// fread_s-- > toplu oxumaq
// fread-- > toplu oxumaq

//	int fseek(FILE* stream, long int offset, int whence); --> (kursorun yerini dəyişmək)

//Return Value : Bu funksiya müvəffəqiyyətli olarsa sıfırı qaytarır və ya sıfırdan fərqli bir dəyər qaytarır.

// offset-- > nə qədər sürüşdürmək(Bu, haradan ofset ediləcək baytların sayıdır.)

// whence-- > (haradan)-Bu, ofsetin əlavə olunduğu mövqedir.Aşağıdakı sabitlərdən biri ilə müəyyən edilir.
//
// 1) SEEK_SET-- > #define 0 (Faylın başlanğıcı)
// 2) SEEK_CUR-- > #define 1 (Fayl göstəricisinin cari mövqeyi)
// 3) SEEK_END-- > #define 2 (Faylın sonu)

// ftell(FILE* stream) funksiyası fayl göstəricisinin cari vəziyyətini qaytarır.

// rewind(FILE* stream) funksiyası fayl mövqeyinin göstəricisini verilmiş fayl axınının başlanğıcına təyin edir.



int main()
{
	//// Modes: write(w),  read(r),  append(a),  (w+),  (r+),  (a+)
	//// Modes: write(wb), read(rb), append(ab), (wb+), (rb+), (ab+)
	//// EOF == -1



	FILE* file;

	//fopen_s(&file, "C:\\Users\\mamedly_i\\Desktop\\myfile.txt", "w");
	//fopen_s(&file, R"(C:\Users\t.novruzov\Desktop\file.txt)", "w");
	//fopen_s(&file, "file.txt", "w");
	//// 
	//char name[7] = { "Huseyn" };

	//if (file != nullptr)
	//{
	//	for (auto& c : name)
	//	{
	//		if (c != '\0')
	//			putc(c, file);
	//	}
	//	cin.get();

	//	fclose(file);
	//}



	//fopen_s(&file, "file.txt", "r");

	//if (file)
	//{
	//	char symbol = getc(file);

	//	while (symbol != EOF)
	//	{
	//		cout << symbol;
	//		symbol = getc(file);
	//	}

	//	fclose(file);
	//}




	//// TASK
	// // Name: Tural
	// // Surname: Novruzov
	// 
	// 
	// 
	/*fopen_s(&file, "file.txt", "w+");

	if (file)
	{
		int size = 30;
		char* name = new char[size];
		char* surname = new char[size];

		cout << "Enter name: ";
		cin.getline(name, size);

		cout << "Enter surname: ";
		cin.getline(surname, size);

		for (size_t i = 0; name[i] != '\0'; i++)
			putc(name[i], file);

		putc(' ', file);

		for (size_t i = 0; surname[i] != '\0'; i++)
			putc(surname[i], file);


		fseek(file, 0, SEEK_SET);


		char symbol = getc(file);
		cout << "Name is ";
		while (symbol != ' ') {
			cout << symbol;
			symbol = getc(file);
		}


		cout << "\nSurname is ";
		while (symbol != EOF) {
			symbol = getc(file);
			cout << symbol;
		}


		fclose(file);
		delete[] name;
		delete[] surname;
	}*/







	//fopen_s(&file, "file.txt", "a");

	//if (file) {
	//	const char* name = "Hakuna";
	//	const char* surname = "Matata";

	//	fputs(name, file);
	//	fputc(' ', file);
	//	fputs(surname, file);
	//	fputc('\n', file);

	//	fclose(file);
	//}

	//fopen_s(&file, "file.txt", "r");

	//if (file) {
	//	int size = 1024;
	//	char* buffer = new char[size];

	//	while (fgets(buffer, size, file))
	//		cout << buffer;

	//	fclose(file);
	//	delete[] buffer;
	//}



	// 1) Sign Up
	// 2) Qeydiyyatdan kechenlerin hamsini ekrana cap edin.
	// 3) Exit













	//fopen_s(&file, "file.txt", "a+");

	//if (file)
	//{
	//	size_t size = 255;

	//	char* name = new char[size];
	//	char* password = new char[size];
	//	char* buffer = new char[size];


	//	while (true)
	//	{
	//		cout << "\nSecimler: " << endl;
	//		cout << "1.Sign UP" << endl;
	//		cout << "2.Qeydiyyatdan kecenleri gostermek" << endl;
	//		cout << "0.Exit" << endl;

	//		cout << "Seciminizi daxil edin: ";
	//		size_t secim;
	//		cin >> secim;
	//		cin.ignore();


	//		if (secim == 1) {
	//			cout << "Adinizi daxil edin: ";
	//			cin.getline(name, size);

	//			cout << "Passwordunuzu daxil edin: ";
	//			cin.getline(password, size);

	//			fputs(name, file);
	//			fputc(' ', file);
	//			fputs(password, file);
	//			fputc('\n', file);
	//			// fflush(file);
	//		}
	//		else if (secim == 2) {
	//			fseek(file, 0, SEEK_SET);
	//			while (fgets(buffer, size, file))
	//				cout << buffer;
	//		}
	//		else if (secim == 0)
	//		{
	//			cout << "Good Bye";
	//			fclose(file);
	//			delete[] name;
	//			delete[] password;
	//			delete[] buffer;
	//			break;
	//		}
	//	}
	//}


	// .bin File Stream

	//FILE* stream = fopen("array.bin", "wb");

	//if (stream)
	//{
	//	const int size = 5;
	//	int arr[size] = { 10, 20, 30, 40, 50 };

	//	fwrite(arr, sizeof(int), size, stream);
	//	fclose(stream);
	//	stream == nullptr;
	//}





	//FILE* stream = fopen("array.bin", "rb");

	//if (stream)
	//{
	//	const int size = 5;
	//	int arr[size] = {};

	//	fread(arr, sizeof(int), size, stream);
	//	fclose(stream);
	//	stream = nullptr;

	//	for (size_t i = 0; i < size; i++)
	//		cout << arr[i] << ' ';
	//}









	//// TASK
	//// Istifadechi olchu daxil edir.
	//// Hemin olchude array yaradib, icherisini random, doldurun.
	//// Binary formatda fayla yazmaq.
	//// Binary formatda fayldan oxumaq.
	//
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	//srand(time(nullptr));
	//FILE* stream = fopen("array.bin", "wb+");
	//
	//if (stream)
	//{
	//	int size = 7;
	//	int* arr = new int[size];
	//
	//	for (size_t i = 0; i < size; i++)
	//		arr[i] = rand() % 30;
	//
	//
	//	fwrite(arr, sizeof(int), size, stream);
	//	delete[] arr;
	//
	//	rewind(stream);
	//	arr = new int[size];
	//	fread(arr, sizeof(int), size, stream);
	//	
	//	for (size_t i = 0; i < size; i++)
	//		cout << arr[i] << ' ';
	//
	//	fclose(stream);
	//	stream = nullptr;
	//	delete[] arr;
	//}
}
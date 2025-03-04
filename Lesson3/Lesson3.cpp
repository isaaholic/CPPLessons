#include<iostream>
using namespace std;

int main()
{
    float num1, num2, resoult;
    char operation;

    cout << "1-ci eded: ";
    cin >> num1;
    cout << "2-ci eded: ";
    cin >> num2;
    cout << "/ + - * birini daxil edin: ";
    cin >> operation;


    resoult = (operation == '+') ? (num1 + num2) :
        (operation == '-') ? (num1 - num2) :
        (operation == '*') ? (num1 * num2) :
        (operation == '/') ? (num1 / num2) :
        0;

    cout << "Netice: " << resoult << endl;

    return 0;
}

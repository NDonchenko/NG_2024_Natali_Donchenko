#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int operation = 0;
    double num1;
    double num2;
    cout << "select an operation" << endl;
    cout << "1.sum" << endl;
    cout << "2.difference" << endl;
    cout << "3.multiplication" << endl;
    cout << "4.division" << endl;
    cout << "5.square" << endl;
    cout << "6.square root" << endl;
    cin >> operation;

    switch (operation) {
    case 1 :
         cout << "enter the numbers, the sum of which you want to receive" << endl;
        cin >> num1 >> num2;
         cout << "sum:" ;
        cout << num1 + num2 << endl;
        break;
    case 2 :
        cout << "enter the numbers, the difference of which you want to receive" << endl;
        cin >> num1 >> num2;
        cout << "difference:" ;
        cout << num1 - num2 << endl;
        break;
    case 3 :
        cout << "enter the numbers, the multiplication of which you want to receive" << endl;
        cin >> num1 >> num2;
        cout << "multiplication:";
        cout << num1 * num2 << endl;
        break;
    case 4 :
        cout << "enter the numbers, the multiplication of which you want to receive" << endl;
        cin >> num1 >> num2;
        cout << "division:";
        cout << num1 / num2 << endl;
        break;
    case 5 :
        cout << "enter the number, the square of which you want to receive" << endl;
        cin >> num1 ;
        cout << "square:" ;
        cout << pow(num1,2) << endl;
        break;
    case 6 :
        cout << "enter the number, the square root of which you want to receive" << endl;
        cin >> num1 ;
        cout << "square root:";
        cout << sqrt(num1) << endl;  ;
        break;
    }


    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int operation = 0;
    double num1;
    double num2;
    bool ToContinue = true;
    do {
        cout << "select an operation" << endl;
        cout << "1.sum" << endl;
        cout << "2.difference" << endl;
        cout << "3.multiplication" << endl;
        cout << "4.division" << endl;
        cout << "5.square" << endl;
        cout << "6.square root" << endl;
        cout << "7.exit" << endl;
        cin >> operation;
        if (operation != 7){
            cout << "Enter the numbers with which you want to perform the operation:" << endl;
            cin >> num1 >> num2;
        }
        switch (operation) {
            case 1 :
                cout << "sum: "<< num1 + num2 << endl;
                break;
            case 2 :
                cout << "difference: " << num1 - num2 << endl;
                break;
            case 3 :
                cout << "multiplication: " <<num1 * num2 << endl;
                break;
            case 4 :
                cout << "division: " << num1 / num2 << endl;
                break;
            case 5 :
                cout << "square: " << pow(num1,2) <<";" << pow(num2,2) << endl ;
                break;
            case 6 :
                cout << "square root: " << sqrt(num1) <<";" << sqrt(num2) << endl;
                break;
            case 7 :
                cout << "Do you really want to exit? (1 = Yes, 0 = No): ";
                cin >> ToContinue;
                ToContinue = !ToContinue;
                break;
        }
    } while(ToContinue);

    return 0;
}

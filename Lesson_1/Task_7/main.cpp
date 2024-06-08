#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double N = 0;
    double x = 0;
    double y = 0;
    cout << " Enter the radius N" << endl;
    cin>> N;
    cout << " enter the coordinate x" << endl;
    cin>> x;
    cout << " nter the coordinate y" << endl;
    cin>> y;
    // The center of the field in the coordinate grid by default is (0,0),
    //to calculate the distance between two points, we use the Pythagorean theorem
    double distance = sqrt(pow((x-0),2)+ pow(( y-0),2));
    if (distance>N) {
        cout <<" Konstantin, you have gone out of the field, the signal is not detected there. Please move to another point and try again."<< endl;
    }
    else {
        cout <<distance<< endl;
    }
    return 0;
}

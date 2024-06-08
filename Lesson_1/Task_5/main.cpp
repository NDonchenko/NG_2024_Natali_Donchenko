#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main()
{
    double a,b,c;
    cout << "Enter coefficients a, b, and c:" << endl;
    cin >> a >> b >> c ;

    if (a == 0) {
        cout << " a cannot be equal to 0" << endl;
        return 1;
    }
    double D = pow(b,2) - 4*a*c;

    if (D == 0) {
        double x = -b / (2*a);
        cout << " This equation has one real root: " << x << endl;
    }
    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << " This equation has two roots  x1: " << x1 << "and x2:" << x2 << endl;
    }
    if (D < 0) {
        complex<double>sqrtD = sqrt(complex<double>(D, 0));
        complex<double> x1 = (-b + sqrtD) / (2.0*a);
        complex<double> x2 = (-b - sqrtD) / (2.0*a);
        cout << " this is an equation with a negative discriminant, it has the following roots x1: " << x1 << "and x2:" << x2 << endl;
    }

    return 0;
}

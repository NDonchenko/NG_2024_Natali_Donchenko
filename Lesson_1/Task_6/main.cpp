#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the image size: ";
    int size = 0;
    cin >>size;
    for (int row = 1; row <= size;++row) {
        for (int column = 0; column < size - row; ++column) {
            cout << ' ';
        }
        for (int column = 0; column < 2 * row - 1; ++column) {
            cout << '*';
        }
        cout << endl;
    }

    int stem = 0;
    while ( stem < size-1) {
        cout << ' ';
        stem++;
    }
    cout << '*';
    return 0;
}

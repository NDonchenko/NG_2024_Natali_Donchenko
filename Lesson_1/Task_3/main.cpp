#include <iostream>

using namespace std;

int main()
{
    int salary = 0;
    cout << "how much do you earn?" << endl;
    cin>> salary;
    switch (salary) {
        case 1000:
             cout << " ok, but you can do better)))"<<endl;
            break;
        default:

            if (salary < 1000) {
                cout << " work harder! "<<endl;
            }
            if (salary > 1000) {

                switch (salary) {
                    case 1000000:
                        cout << " o it turns out you're a millionaire? Handsome!!!"<<endl;
                        break;
                    default:
                        if (salary > 1000000) {
                            cout << " so you are rich, will you borrow half a million?"<<endl;
                        }
                        if (salary < 1000000){
                            cout << " you work well"<<endl;
                        }
               }
            }

     }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int salary = 0;
    cout << "how much do you earn?" << endl;
    cin>> salary;
    int CheckThousand = (1000>salary) - (1000<salary);
    if (CheckThousand>0) {
        cout << " work harder! "<<endl;
    }
    if (CheckThousand<0) {
        int CheckMillion = (1000000>salary) - (1000000<salary);
        if (CheckMillion>0){
            cout << " ok, but you can do better)))"<<endl;
        }
        if (CheckMillion<0){
            cout << " so you are rich, will you borrow half a million?"<<endl;
        }
        if (CheckMillion<1){
            if(CheckMillion>-1){
                cout << " o it turns out you're a millionaire? Handsome!!!"<<endl;
            }
        }
    }
    if (CheckThousand<1) {
        if (CheckThousand>-1) {
            cout << " ok, but you can do better)))"<<endl;
         }
    }
    cout << "but you are great, mom loves you in any way, even poor:)))"<<endl;
    return 0;
}

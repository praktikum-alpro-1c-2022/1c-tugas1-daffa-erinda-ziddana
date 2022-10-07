#include <iostream>

using namespace std;

int main(){

    int a = 10, b = 15, temp;
    cout << "sebelum ditukar" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    temp = a;
    a = b;
    b = temp;

    cout << "Menukarkan 2 Variabel dengan bantuan Variabel Sementara" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << temp << endl;

return 0;
}

#include <iostream>
#include <string.h>

#define PASS "affah iyh"
using namespace std;

//program if else
int main () {

    cout << "Nama: Wahyu Isnan" << endl;
    cout << "Prodi: Informatika" << endl;
    cout << "Nim: 22343031" << endl;
    cout << "===============================" << endl;
    cout << "\tProgram if else" << endl;
    cout << "===============================" << endl << endl;
    int hasil;
    char urpass[10];
    string a;

    do{
        for (int i=0 ; i<3 ; i++){
            cout << "Masukkan password anda : "; gets(urpass);
        hasil = strcmp (PASS,urpass);

        if (hasil == 0) {
            cout << "Password benar, silahkan masuk!" << endl;
            break;
        }
        else if (i==2){
                cout << "Anda sudah memasukkan password salah sebanyak 3x, silahkan coba lagi!!!";
            }
       {
        cout << "Password salah, silahkan ulangi!" << endl << endl;
        }
        }

    cout << "Ingin melakukan ulang? (Y/n) ";
    getline (cin, a);
    cout << endl;
    } while (a!="n");
    cout << "Thank you!!" << endl;

    return 0;
}

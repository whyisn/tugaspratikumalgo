#include <iostream>
using namespace std;

//program do-while
int main () {

    cout << "Nama: Wahyu Isnan" << endl;
    cout << "Prodi: Informatika" << endl;
    cout << "Nim: 22343031" << endl;
    cout << "=====================================================" << endl;
    cout << "\tProgram do-while Deret bilangan genap" << endl;
    cout << "=====================================================" << endl << endl;
    int jmlhderet, i=1;

    cout << "Inputkan deret bilangan genap: "; cin >> jmlhderet; cout << endl;

    do{
        cout << (i*2) << ", ";
        i++;
    }
    while(i<=jmlhderet);
    cout << endl;

    return 0;
}

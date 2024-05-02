#include <iostream>
using namespace std;

int FPB_Rekursif (int bil1, int bil2) 
{
    if (bil2 == 0) 
        return bil1;
    else 
        return FPB_Rekursif (bil2, bil1 % bil2);
}

main ()
{
    int bil1,bil2,FPB;
    cout << "Masukkan Bilangan Pertama : ";
    cin >> bil1;
    cout << "Masukkan Bilangan Kedua : ";
    cin >> bil2;
    FPB = FPB_Rekursif (bil1,bil2);
    cout << "FPB "<< bil1 <<" dan "<< bil2 <<" adalah : "<< FPB;
}
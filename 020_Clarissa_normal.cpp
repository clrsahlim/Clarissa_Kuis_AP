#include <iostream>
using namespace std;

int EuclideanGCD (int bil1, int bil2)
{
    int sisa;
    if (bil2 == 0)
    return bil1;
    
    else
    {
    do 
    {
    sisa = bil1 % bil2;
    bil1 = bil2;
    bil2 = sisa;
    }
    while (sisa > 0);
    return bil1;
    }
}

main ()
{
    int bil1,bil2,FPB;
    cout << "Masukkan Bilangan Pertama : ";
    cin >> bil1;
    cout << "Masukkan Bilangan Kedua : ";
    cin >> bil2;
    FPB = EuclideanGCD (bil1,bil2);
    cout << "FPB "<< bil1 <<" dan "<< bil2 <<" adalah : "<< FPB;
}
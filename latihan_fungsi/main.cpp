#include <iostream>

using namespace std;

int pembagian(int a, int b)
{
    cout << "Hasil Pembagian = " << a/b << endl;
}

double perkalian(double a, double b)
{
   cout << "Hasil Perkalian = " << a*b << endl;
}

void penjumlahan()
{
    cout << "Hasil Penjumlahan = " << 10 + 5 << endl;
}

void pengurangan()
{
    cout << "Hasil Pengurangan = " << 10.5 - 5.2 << endl;
}

int main()
{
    pembagian(10,2);
    perkalian(2.5,2.5);
    penjumlahan();
    pengurangan();
    return 0;
}


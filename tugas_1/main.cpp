#include <iostream>

using namespace std;

int penjumlahan(int a, int b, int c)
{
    cout << "Hasil Penjumlahan = " << a + b + c << endl;
}

double perkalian(double a, double b, double c)
{
    cout << "Hasil Perkalian = " << a * b * c << endl;
}

int data(char a, string b, double c)
{
    cout << "Angka yang tampil = " << a << endl;
    cout << "Nama saya adalah " << b << endl;
    cout << "Angka yang ditampilkan = " << c << endl;
}

void tampil()
{
    cout << "Jurusan Rekayasa Perangkat Lunak SMK Taruna Persada Dumai" << endl;
}

int main()
{
    penjumlahan(10,5,6);
    perkalian(2.5,2.5,1.5);
    data('4',"Fikri",5.825);
    tampil();
    return 0;
}

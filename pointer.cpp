#include <iostream>
using namespace std;

class persegipanjang
{
    public:
    int panjang, lebar;
    int luasPersegiPanjang(int b, int a)
    {
        return a * b;
    }
};

class segitiga
{
public:    
    int alas, tinggi;
    int luasSegitiga(int a, int t)
    {
        return (a * t) / 2;
    }
    
    int hitung(persegipanjang p)
    {
        return p.panjang;
    }
};

int main(){
    persegipanjang pp;
    segitiga sg;
    cout << "Masukkan Panjang : ";
    cin >> pp.panjang;
    cout << "Masukkan Lebar : ";
    cin >> pp.lebar;
    cout << "Masukkan Alas : ";
    cin >> sg.alas;
    cout << "Masukkan Tinggi : ";
    cin >> sg.tinggi;
    cout << "luas persegi panjang : " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "luas segitga : " << sg.luasSegitiga(sg.alas, sg.tinggi) << endl;
    cout << "panjang persegi panjang : " << sg.hitung(pp) << endl;
}
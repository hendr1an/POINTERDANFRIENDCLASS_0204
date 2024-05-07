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
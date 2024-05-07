#include <iostream>
using namespace std;

class mahasiswa
{
    public:
    int nim;

    void showNim(){
        cout << "NIM : " << nim << endl;
        };
};
int main (){
    mahasiswa mhs{1} ;
    mhs.showNim();
}
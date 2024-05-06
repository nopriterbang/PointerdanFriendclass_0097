#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void shoNim(){
        cout << "No Induk = "<<nim<<endl;
    }

};

int main(){
    
    mahasiswa mhs{1}; // object mhs
    mhs showNim(); // member access operator

    mahasiswa &refMhs = mhs; // operator reference refMhs
    refMhs.nim = 2; // member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // ointer deference pMhs
    pMhs->nim = 3; // arrow operator
    pMhs->showNim();
    return 0;


}
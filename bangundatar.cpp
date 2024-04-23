#include <iostream>
using namespace std;

class bangunDatar{
// akses modifier
private:
    float panjang, lebar;
public:
    float luas;
    void input(){
    cout << "Masukkan Panjangnya =";
    cin >> panjang;
    cout << "Masukkan lebarnya";
    cin >> lebar;
    }

    float hitungLuas (){
        return panjang*lebar;
    }

    
    

};
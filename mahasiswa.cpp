#include <iostream>
using namespace std;

class Mahasiswa{
public:
    string nama;
    int umur;
    string jurusan;

    void output()
    { 
        cout << "Nama:" << nama << endl;
        cout << "Umur:" << umur << endl;
        cout << "Jurusan:" << jurusan << endl;
    }
};

class Matakuliah{
private:
    string kodeMK;
    string namaMK;
    int sks;

public: 
    void input()
    {
        cout << "Kode Mk: ";
        cin >> kodeMK;
        cout << "Nama Mk: ";
        cin >> namaMK;
        cout << "SKS: ";
        cin >> sks;
    }

    void output()
    {
        cout << "Kode MK:" << kodeMK << endl;
        cout << "Nama MK:" << kodeMK << endl;
        cout << "SKS:" << sks << endl;
    }

    int main()
    { // mengakses object
        Mahasiswa mhs;
        Matakuliah mk;

        mhs.nama = "Budi";
        mhs.umur = 20;
        mhs.jurusan = "Teknik Informatika";
        mhs.output();

        mk.input();
        mk.output();

        return 0;
    }
};

#include <iostream>
#include <string.h>
using namespace std;

class Mahasiswa{
    public:
    string nama;
    double nim;
};

int main(int argc, char const *argv[])
{
    Mahasiswa daftarMahasiswa[10];
    int jumlahSiswa = 0;
    // int ikan = 10;
    // int * sapi = &ikan;
    // cout << *sapi <<endl;

    Mahasiswa *b = &daftarMahasiswa[jumlahSiswa];
    b->nama = "pedro armando sitorus";
    b->nim = 251110104;

    jumlahSiswa++;

    cout << "Data Masuk: " << daftarMahasiswa[0].nama << "\nnim: " << daftarMahasiswa[0].nim  << endl;
    
    return 0;
}

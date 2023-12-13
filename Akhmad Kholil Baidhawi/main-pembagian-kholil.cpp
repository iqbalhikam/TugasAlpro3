#include <iostream>
#include <string>

using namespace std;

// Tampilkan Informasi Nama Kelompok
int main() {
    cout << "==============================================" << endl;
    cout << "=               KELOMPOK MPOO                =" << endl;
    cout << "=             TEKNIK INFORMATIKA             =" << endl;
    cout << "=           ALGORITMA & PEMOGRAMAN           =" << endl;
    cout << "==============================================" << endl;

    // Tampilkan Informasi Pribadi
    cout << "==============================================" << endl;
    cout << "=   Nama         : Ahkmad Kholil Baidhawi    =" << endl;
    cout << "=   NIM          :       2023310091          =" << endl;
    cout << "=   Jurusan      :   Teknik Infprmatika      =" << endl;
    cout << "=   Fakultas     :      Informatika          =" << endl;
    cout << "==============================================" << endl;

     // Operasi Aritmatika
    cout << "***  OPERASI ARITMATIKA  *** " << endl;
    cout << "*******  PENAMBAHAN  ******* " << endl;
    cout << "-----Operasi Aritmatika----- " << endl;

    int jumlahSiswa;
    int jumlahKelas;

    // Meminta input dari pengguna
    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;

    cout << "Masukkan jumlah kelas: ";
    cin >> jumlahKelas;

    if (jumlahKelas <= 0) {
        cout << "Jumlah kelas harus lebih dari 0." << std::endl;
        return 1;  // Keluar program dengan kode kesalahan
    }

    if (jumlahSiswa < jumlahKelas) {
        cout << "Jumlah siswa tidak dapat kurang dari jumlah kelas." << std::endl;
        return 1;  // Keluar program dengan kode kesalahan
    }

    int siswaPerKelas = jumlahSiswa / jumlahKelas;
    int siswaSisa = jumlahSiswa % jumlahKelas;

    cout << "Setiap kelas akan memiliki " << siswaPerKelas << " siswa." << std::endl;
    cout << "Terdapat " << siswaSisa << " siswa sisa yang belum terbagi secara merata." << std::endl;

    return 0;
}

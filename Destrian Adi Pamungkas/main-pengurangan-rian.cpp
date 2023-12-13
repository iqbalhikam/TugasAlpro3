#include <iostream>

int main() {

    // Output informasi kelompok dan informasi pribadi
    std::cout << "==============================================" << std::endl;
    std::cout << "=               KELOMPOK MPOO                =" << std::endl;
    std::cout << "=             TEKNIK INFORMATIKA             =" << std::endl;
    std::cout << "=           ALGORITMA & PEMOGRAMAN           =" << std::endl;
    std::cout << "==============================================" << std::endl;


    // Tampilkan Informasi Pribadi
    std::cout << "==============================================" << std::endl;
    std::cout << "=   Nama         :   Destrian Adi Pamungkas  =" << std::endl;
    std::cout << "=   NIM          :         2023310013        =" << std::endl;
    std::cout << "=   Jurusan      :     Teknik Informatika    =" << std::endl;
    std::cout << "=   Fakultas     :        Informatika        =" << std::endl;
    std::cout << "==============================================" << std::endl;

    // Operasi Aritmatika
    std::cout << "***  OPERASI ARITMATIKA  *** " << std::endl;
    std::cout << "*******  PENAMBAHAN  ******* " << std::endl;
    std::cout << "-----Operasi Aritmatika----- " << std::endl;

    int tahunAwal, tahunAkhir;
    int jumlahPendudukAwal, jumlahPendudukAkhir;

    // Meminta pengguna memasukkan tahun awal dan tahun akhir
    std::cout << "Masukkan tahun awal: ";
    std::cin >> tahunAwal;

    std::cout << "Masukkan tahun akhir: ";
    std::cin >> tahunAkhir;

    // Meminta pengguna memasukkan jumlah penduduk pada tahun awal dan tahun akhir
    std::cout << "Masukkan jumlah penduduk pada tahun " << tahunAwal << ": ";
    std::cin >> jumlahPendudukAwal;

    std::cout << "Masukkan jumlah penduduk pada tahun " << tahunAkhir << ": ";
    std::cin >> jumlahPendudukAkhir;

    // Menghitung pengurangan jumlah penduduk
    int penguranganPenduduk = jumlahPendudukAwal - jumlahPendudukAkhir;

    // Menampilkan hasil pengurangan
    std::cout << "Pengurangan jumlah penduduk antara tahun " << tahunAwal << " dan tahun " << tahunAkhir << " adalah: " << penguranganPenduduk << " orang" << std::endl;

    return 0;
}

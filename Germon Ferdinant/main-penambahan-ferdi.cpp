#include <iostream>
#include <iomanip>
#include <string>

int main() {
  // Output informasi kelompok dan informasi pribadi
    std::cout << "==============================================" << std::endl;
    std::cout << "=               KELOMPOK MPOO                =" << std::endl;
    std::cout << "=             TEKNIK INFORMATIKA             =" << std::endl;
    std::cout << "=           ALGORITMA & PEMOGRAMAN           =" << std::endl;
    std::cout << "==============================================" << std::endl;

    std::cout << "==============================================" << std::endl;
    std::cout << "= Nama         : Gelmon Ferdinant Manurung   =" << std::endl;
    std::cout << "= NIM          :        202331001            =" << std::endl;
    std::cout << "= Jurusan      :    Teknik Informatika       =" << std::endl;
    std::cout << "= Fakultas     :        Informatika          =" << std::endl;
    std::cout << "==============================================" << std::endl;

    // Harga alat tulis per item dalam Rupiah
    int hargaPensil = 2000;
    int hargaBuku = 5000;
    int hargaSpidol = 3000;

    // Jumlah alat tulis yang dibeli
    int jumlahPensil, jumlahBuku, jumlahSpidol;

    // Meminta pengguna memasukkan jumlah alat tulis yang dibeli
    std::cout << "Masukkan jumlah pensil yang dibeli: ";
    std::cin >> jumlahPensil;

    std::cout << "Masukkan jumlah buku yang dibeli: ";
    std::cin >> jumlahBuku;

    std::cout << "Masukkan jumlah spidol yang dibeli: ";
    std::cin >> jumlahSpidol;

    // Menghitung total belanjaan menggunakan operasi penambahan
    int totalBelanjaan = (jumlahPensil * hargaPensil) + (jumlahBuku * hargaBuku) + (jumlahSpidol * hargaSpidol);

    // Menampilkan struk belanja
    std::cout << "==============================================" << std::endl;
    std::cout << "         STRUK BELANJA ALAT TULIS" << std::endl;
    std::cout << "==============================================" << std::endl;
    std::cout << "Barang\t\tJumlah\t\tHarga/Unit\tTotal" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Pensil\t\t" << jumlahPensil << "\t\tRp " << hargaPensil << "\t\tRp " << (jumlahPensil * hargaPensil) << std::endl;
    std::cout << "Buku\t\t" << jumlahBuku << "\t\tRp " << hargaBuku << "\t\tRp " << (jumlahBuku * hargaBuku) << std::endl;
    std::cout << "Spidol\t\t" << jumlahSpidol << "\t\tRp " << hargaSpidol << "\t\tRp " << (jumlahSpidol * hargaSpidol) << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Total Belanja\t\t\t\t\tRp " << totalBelanjaan << std::endl;
    std::cout << "==============================================" << std::endl;

    return 0;
}

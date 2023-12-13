#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "======================================================" << endl;
    cout << "=               KELOMPOK MPOO                        =" << endl;
    cout << "=             TEKNIK INFORMATIKA                     =" << endl;
    cout << "=           ALGORITMA & PEMOGRAMAN                   =" << endl;

  // Tampilkan Informasi Pribadi
    cout << "======================================================" << endl;
    cout << "=   Nama         :   Rangga Apre Dianta S.Meliala    =" << endl;
    cout << "=   NIM          :            2023310019             =" << endl;
    cout << "=   Jurusan      :        Teknik Infprmatika         =" << endl;
    cout << "=   Fakultas     :           Informatika             =" << endl;
    cout << "======================================================" << endl;

         // Operasi Bitwise
    cout << "***   OPERASI BITWISE  *** " << endl;
    cout << "*******     AND    ******* " << endl;
    cout << "----- Operasi BITWISE ----- " << endl;

    // Deklarasi bilangan1 dan bilangan2
    int bilangan1, bilangan2;

    // Meminta pengguna memasukkan dua bilangan bulat
    cout << "Masukkan bilangan pertama = ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua = ";
    cin >> bilangan2;

    // Melakukan operasi bitwise AND pada dua bilangan
    int hasilBitwise = bilangan1 & bilangan2;

    // Menampilkan hasil operasi bitwise
    cout << "Hasil operasi bitwise AND antara " << bilangan1 << " dan " << bilangan2 << " adalah: " << hasilBitwise << endl;

    return 0;
}

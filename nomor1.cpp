#include <iostream>
#include <string>

using namespace std;

int main() {
  // 1. Deklarasi variabel string
  string nama;

  // 2. Input string dari keyboard
  cout << "Masukkan nama Anda: ";
  getline(cin, nama);

  // 3. Hitung panjang string
  int panjang = nama.length();

  // 4. Tampilkan panjang string
  cout << "Panjang nama Anda adalah " << panjang << " karakter." << endl;

  return 0;
}
#include <iostream>

using namespace std;

// untuk menampilkan karakter '*' sebanyak n kali
void karakter(int n) {
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
}

// untuk menampilkan spasi sebanyak n kali
void jarakspasi(int n) {
    for (int i = 0; i < n; i++) {
        cout << "  ";
    }
}

// untuk menampilkan baris dengan karakter '*' dan spasi sesuai dengan pola belah ketupat
void belahketupat(int n, int i) {
    karakter(n - i);
    jarakspasi(2 * i);
    karakter(n - i);
    cout << endl;
}

// untuk menampilkan pola belah ketupat dengan ukuran n
void ketupat(int n) {
    for (int i = 0; i < n; i++) {
        belahketupat(n, i);
    }
    for (int i = n - 2; i >= 0; i--) {
        belahketupat(n, i);
    }
}

int main() {
    system("clear");
    int angka;

    cout << "Masukkan jumlah inputan : ";
    cin >> angka;

    ketupat(angka);

    return 0;
}

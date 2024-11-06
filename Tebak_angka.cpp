#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int rahasia, tebakan, nyawa = 5;

    srand(time(NULL));

    rahasia = rand() % 100 + 1;

    cout << "Selamat datang di game tebak angka!" << endl;
    cout << "Peraturan: Tebak angka antara 1 dan 100." << endl;
    cout << "Kamu memiliki " << nyawa << " nyawa." << endl;

    while (nyawa > 0) {
        cout << "Masukan tebakanmu: ";
        cin >> tebakan;

        if (tebakan == rahasia) {
            cout << "Selamat! Kamu berhasil menebak angkanya!" << endl;
            break;
        } else if (tebakan > rahasia) {
            cout << "Tebakanmu terlalu tinggi." << endl;
        } else {
            cout << "Tebakanmu terlalu rendah." << endl;
        }

        nyawa--;
        cout << "Nyawa tersisa: " << nyawa << endl;
    }

    if (nyawa == 0) {
        cout << "Game Over! Angka rahasianya adalah " << rahasia << endl;
    }
    

    return 0;
}
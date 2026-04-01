#include <iostream>
using namespace std;

int n, pilihan;

bool BilPrim(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

bool BilFibo(int n) {
    int a = 0, b = 1, c = 0;
    
    while (c <= n) {
        if (c == n) {
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> n;
}

void tampilBilPrim() {
    if (BilPrim(n)) {
        cout << n << " adalah bilangan prima." << endl;}
    else {
        cout << n << " bukan bilangan prima." << endl;}
}

void tampilBilFibo() {
    if (BilFibo(n)) {
        cout << n << " termasuk bilangan Fibonacci." << endl;}
    else {
        cout << n << " bukan bilangan Fibonacci." << endl;}
}

void menu() {
    
}

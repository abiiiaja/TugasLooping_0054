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

}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p = 2; 
    while (n != 0) {
        bool isPrime = true;
        for (int i = 2; i < p; i++) {
            if (p % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << p << endl;
            n--;
        }
        p++; 
    }
    return 0;
}

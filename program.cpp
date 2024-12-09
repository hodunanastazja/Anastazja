#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    
    cout << "Podaj liczbę całkowitą: ";
    cin >> n;

    if (n >= 0) {
        cout << "Element ciągu Fibonacciego o indeksie " << n << " to: " << fib(n) << endl;
    } else {
        cout << "Podano liczbę ujemną" << endl;
    }

    return 0;
}

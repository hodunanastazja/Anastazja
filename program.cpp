#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Podaj liczbę: ";
    cin >> number;

	if (number < 0) {
        cout << "Liczba musi być nieujemna!" << endl;
        return 0;
    }

    cout << "Liczba: " << number << endl;
    cout << "Element ciągu Fibonacciego: " << fibonacci(number) << endl;

    return 0;
}

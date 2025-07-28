#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num < 2) {
        cout << "Not prime.";
    } else {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "Prime";
        } else {
            cout << "Not prime";
        }
    }

    return 0;
}

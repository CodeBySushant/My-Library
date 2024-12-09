#include <iostream>

using namespace std;

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + multiply(a, b - 1);
    } else {
        return -multiply(a, -b);
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int product = multiply(num1, num2);

    cout << "Product: " << product << endl;

    return 0;
}
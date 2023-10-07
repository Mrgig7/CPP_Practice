#include <iostream>
using namespace std;

int main() {
    int a, b, c, n, d = 0; // Initialize 'd' to 0
    cin >> n;
    a = 0;
    b = 1;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        d += c;
        a = b;
        b = c;
        cout << c << endl;
    }
    cout << "Sum: " << d << endl; // Print the sum of Fibonacci numbers
    return 0;
}

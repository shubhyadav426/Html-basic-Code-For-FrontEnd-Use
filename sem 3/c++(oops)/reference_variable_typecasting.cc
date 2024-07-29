#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the value of a: " << endl;  // Corrected 'end1' to 'endl'
    cin >> a;
    cout << "Enter the value of b: " << endl;  // Corrected 'end2' to 'endl'
    cin >> b;
    c = a + b;
    cout << "The sum of a and b is: " << c << endl;  // Added 'endl' to end the line
    return 0;
}

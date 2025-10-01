#include <iostream>

using namespace std;

// This function takes an integer by reference and modifies it.
// It is now correctly declared as `void` because it doesn't return a value.
void dosomething(int &num) {
    num = num + 10;
    cout << "Value inside function: " << num << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Value before function call: " << n << endl;

    // Call the function to modify the value of n
    dosomething(n);

    cout << "Value after function call: " << n << endl;

    return 0;
}

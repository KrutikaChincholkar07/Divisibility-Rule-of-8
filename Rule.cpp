#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int lastThree = num % 1000;

    if (lastThree % 8 == 0)
        cout << num << " is divisible by 8";
    else
        cout << num << " is not divisible by 8";

    return 0;
}

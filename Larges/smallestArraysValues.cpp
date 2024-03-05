#include <iostream>
using namespace std;

int main() {
    const int i = 10;
    int a[i];
    int largestNum, smallestNum;

    cout << "Please enter 10 values: ";
    cin >> a[0];
    largestNum = a[0];
    smallestNum = a[0];

    for (int j = 1; j < i; j++) {
        cin >> a[j];
        if (a[j] > largestNum) {
            largestNum = a[j];
        }
        if (a[j] < smallestNum) {
            smallestNum = a[j];
        }
    }

    cout << "The largest number is: " << largestNum << endl;
    cout << "The smallest number is: " << smallestNum << endl;

    return 0;
}

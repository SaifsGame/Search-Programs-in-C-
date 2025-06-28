#include<iostream>
using namespace std;

int main() {
    int Arr[10] = {5, 4, 8, 3, 4, 8, 4, 7, 30, 1};
    int search, found = -1;
    bool condition = false;

    cout << "Enter the Number you want to search in the Array: ";
    cin >> search;

    for (int i = 0; i < 10 && !condition; i++) {
        if (Arr[i] == search) {
            condition = true;
            found = i;
        }
    }

    if (condition) {
        cout << "Number Found at Index No: " << found << endl;
    } else {
        cout << "Number Not Found!" << endl;
    }

    return 0;
}
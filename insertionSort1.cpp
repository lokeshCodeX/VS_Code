#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the size: " << endl;
    int n;
    cin >> n;

    cout << "Enter the values for the array:" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Implementation of insertion sort:" << endl;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }

    return 0;
}

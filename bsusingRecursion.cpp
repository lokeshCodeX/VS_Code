#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int end, int k) {
    if (s > end) {
        return -1;
    }
    int mid = s + (end - s) / 2;

    if (arr[mid] == k) {
        return mid;
    } else if (arr[mid] > k) {
        return binarySearch(arr, s, mid - 1, k);
    } else {
        return binarySearch(arr, mid + 1, end, k);
    }
}

int main() {
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    cout << "Enter " << n << " elements in sorted order:\n";
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element you want to find: ";
    int k;
    cin >> k;

    int result = binarySearch(arr, 0, n - 1, k);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

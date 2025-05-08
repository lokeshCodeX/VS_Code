#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int s, int mid, int end) {
    int n1 = mid - s + 1;
    int n2 = end - mid;

    vector<int> left(n1);
    vector<int> right(n2);

    for (int i = 0; i < n1; i++) {
        left[i] = arr[s + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < n1) {
        arr[k++] = left[i++];
    }
    while (j < n2) {
        arr[k++] = right[j++];
    }
}

void mergeSort(vector<int>& arr, int s, int end) {
    if (s >= end) return;

    int mid = s + (end - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, s, mid, end);
}

int main() {
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    cout << "Enter the elements:\n";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

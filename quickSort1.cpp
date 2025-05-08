#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int s, int end) {
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= end; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(vector<int>& arr, int s, int end) {
    if (s >= end) {
        return;
    }

    int p = partition(arr, s, end);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, end);
}

int main() {
    cout << "Enter the size of array:" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements:" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Array after applying quick sort algorithm:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

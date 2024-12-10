#include <iostream>
#include <vector>
using namespace std;

int findPosition(vector<int>& arr, int s, int end) {
    int pivot = arr[s];
    int count = 0;
    
    // Count elements less than pivot
    for (int i = s + 1; i <= end; i++) {
        if (arr[i] < pivot) {
            count++;
        }
    }

    // Place the pivot in its correct position
    swap(arr[s], arr[s + count]);

    int i = s, j = end;
    while (i < s + count && j > s + count) {
        if (arr[i] > pivot && arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        if (arr[i] <= pivot) {
            i++;
        }
        if (arr[j] >= pivot) {
            j--;
        }
    }
    
    return s + count;
}

void quickSort(vector<int>& arr, int s, int end) {
    if (s >= end) {
        return;
    }
    int pos = findPosition(arr, s, end);
    quickSort(arr, s, pos - 1);
    quickSort(arr, pos + 1, end);
}

int main() {
    vector<int> arr = {11, 2, 4, -4, 77, 0, 3, 1};
    int n = arr.size();
    
    quickSort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

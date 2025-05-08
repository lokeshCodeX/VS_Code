#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& arr, int n, int index, vector<vector<int>>& ans) {
    if (index >= n) {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < n; i++) {
        swap(arr[i], arr[index]);
        solve(arr, n, index + 1, ans);
        swap(arr[i], arr[index]); // backtrack
    }
}

int main() {
    cout << "Enter the size of the array:" << endl;
    int n;
    cin >> n;
    
    cout << "Enter the elements of the array:" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> ans;
    int index = 0;
    solve(arr, n, index, ans);

    cout << "These are the permutations of the array:" << endl;
    for (auto& permutation : ans) {
        cout << "[ ";
        for (auto num : permutation) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void solve(const vector<int>& arr, int n, int index, vector<int>& output, vector<vector<int>>& ans) {
    if (index >= n) {
        ans.push_back(output);
        return;
    }

    // Exclude current element
    solve(arr, n, index + 1, output, ans);

    // Include current element
    output.push_back(arr[index]);
    solve(arr, n, index + 1, output, ans);

    // Backtrack: remove the last added element
    output.pop_back();
}

int main() {
    cout << "Enter the size of the array:" << endl;
    int n;
    cin >> n;
    cout << "Enter the numbers into the array:" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "These are the subsets of the array:" << endl;
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(arr, n, index, output, ans);

    for (auto& arrays : ans) {
        cout << "[";
        for (auto a : arrays) {
            cout << a << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}

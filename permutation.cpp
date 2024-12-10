#include<iostream>
#include<vector>
using namespace std;
void permutation(vector<int>arr, int index, int n, vector<vector<int>>&ans){
if(index>=n){
    ans.push_back(arr);
    return ;
}
    for(int i=index;i<n;i++){
        swap(arr[i],arr[index]);
        permutation(arr, index+1, n, ans);
        swap(arr[i], arr[index]);
    }
}



int main(){

vector<int>arr({1,2,3});
int n=3;
int index=0;
vector<vector<int>>ans;

permutation(arr,index, n, ans);
for(auto i:ans){
    for(auto j: i){
        cout<<j<<" ";
    }
    cout<<endl;
}

    return 0;
}
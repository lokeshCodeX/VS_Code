#include<iostream>
#include<vector>
using namespace std;

void powerSet(vector<int>arr, int index, int n,vector<int>output, vector<vector<int>>&ans){
    if(index>=n){
        ans.push_back(output);
        return;

    }

powerSet(arr, index+1,  n,output,  ans);
output.push_back(arr[index]);
powerSet(arr, index+1, n , output, ans);
}

int main(){

vector<int>arr({1,2,3});
int n=3;
vector<int>output;
vector<vector<int>>ans;
int index=0;

powerSet(arr, index, n, output, ans);
cout<<"powerSet are: "<<endl;
for(auto i:ans){
    for(auto j:i){
        cout<<j<<" ";

    }
    cout<<endl;

}

    return 0;
}
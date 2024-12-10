#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&arr, int n){

for(int i=0;i<n-1;i++){
    
    for(int j=1;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);

        }
    }
}

}

int main(){

vector<int>arr({11,3,2,6,-1,0,2,33,3,99});
int n=arr.size();

bubbleSort(arr, n);

for(auto i:arr){
    cout<<i<<" ";
}

    return 0;
}
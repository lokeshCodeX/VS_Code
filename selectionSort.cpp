#include<iostream>
#include<vector>
using namespace  std;

void selectionSort(vector<int>&arr, int n){

for(int i=0;i<n-1;i++){

int mini=i;
for(int j=i+1;j<n;j++){
if(arr[j]<arr[mini]){
    mini=j;
}

}
swap(arr[i],arr[mini]);
}


}

int main(){
    vector<int>arr({11,4,6,9,343,557,-1,0,33,4,1});
    int n=arr.size();

    selectionSort(arr, n);


for(auto i:arr){
    cout<< i<<" ";
}

    return 0;
}
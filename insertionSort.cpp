#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int>&arr, int n){

for(int i=1;i<n;i++){

int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    arr[j]=key;
    j--;
}


}


}

 int main(){

vector<int>arr({1,5,88,0,3,3,-11,99});
int n=arr.size();
insertion(arr, n);
for(auto i:arr){

    cout<<i<<" ";
}

    return 0;
 }
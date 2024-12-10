#include<iostream>
#include<vector>
using namespace std;
void merger(vector<int>&arr, int s, int e){
int mid=s+(e-s)/2;

int len1=mid-s+1;
int len2=e-mid;
int *first=new int[len1];
int * second=new int[len2];

int k=s;
for(int i=0;i<len1;i++){
    first[i]=arr[k++];
}
k=mid+1;
for(int i=0;i<len2;i++){
    second[i]=arr[k++];
}
int i=0, j=0;
 k=s;
while(i<len1 && j<len2){
    if(first[i]<second[j]){
        arr[k++]=first[i++];
    }
    else{
        arr[k++]=second[j++];
    }
}
while(i<len1){
    arr[k++]=first[i++];
}
while(j<len2){
    arr[k++]=second[j++];
}
delete []first;
delete[]second;

}

void mergeSort(vector<int>&arr, int i, int n){
    if(i>=n){
        return ;
    }
    int mid=i+(n-i)/2;
    mergeSort(arr,i, mid );
    mergeSort(arr, mid+1, n);
    merger(arr, i, n);

}
int main(){

vector<int>arr({1,-6,4,5,3,9,0});
int n=arr.size();

mergeSort(arr, 0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}

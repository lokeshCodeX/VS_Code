

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr, int s, int e){

 int mid = s + (e - s) / 2;
int left=mid-s+1;
int right=e-mid;


int *first=new int[left];
int *second=new int[right];
int k=s;
for(int i=0;i<left;i++){
    first[i]=arr[k++];
}
k=mid+1;
for(int i=0;i<right;i++){
    second[i]=arr[k++];
}


int i=0,j=0;
k=s;
while(i<left &&j<right){

if(first[i]<second[j]){
arr[k++]=first[i++];
}else{
    arr[k++]=second[j++];
}


}

while(i<left){
    arr[k++]=first[i++];
}
while(j<right){

    arr[k++]=second[j++];
}
delete[] first;
    delete[] second;


}


void mergeSort(vector<int>&arr , int i, int n){

if(i>=n){
    return;
}

int mid=i+(n-i)/2;
mergeSort(arr, i, mid);
mergeSort(arr,mid+1,n);

merge(arr, i, n);

}

int main(){

vector<int>arr({3,5,2,4,1,-1,0,-11});
int n = arr.size();

mergeSort(arr, 0, n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}

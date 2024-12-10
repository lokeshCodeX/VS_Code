#include<iostream>
#include<vector>
using namespace std;

int  binearySearch(vector<int>arr, int start, int end,int k ){


if(start>end){
    return 0;
}

int mid=start+(end-start)/2;
if(arr[mid]==k){
    return 1;
}
if(arr[mid]>k){
    return binearySearch(arr, start, mid-1, k);
}else{
    return binearySearch(arr, mid+1, end, k);
}
return  0;
}

int main(){

    vector<int>arr({1,2,3,4,5,6,7,8,9});
    int n=arr.size();
    cout<<"enter the element :"<<endl;
    int k;
    cin>>k;
 if(binearySearch(arr,0, n-1, k)==1){
    cout<<"yes number is persent"<<endl;

 }else{
    cout<<"number is not present int the array"<<endl;

 }

    return 0;
}
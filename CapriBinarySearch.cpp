
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int binearySearch(vector<int>arr, int s, int e, int k){

if(s>e){
  return -1;
}

int mid=s+(e-s)/2;

if(arr[mid]==k){
  return mid;

}
else if(arr[mid]>k){
  return binearySearch(arr, s,mid-1, k);
}else{

return binearySearch(arr, mid+1, e, k);


}
return -1;

}


int main(){

vector<int>arr({1,2,3,4,5,6,7,89});
int n=arr.size();

int k;
cout<<"enter the number for search the position in vector"<<endl;

cin>>k;
cout<<binearySearch(arr, 0, n-1, k)<<endl;




  return 0;
}
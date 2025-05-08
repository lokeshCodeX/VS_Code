#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"enter the length of array for the selction sort"<<endl;
  int n;
cin>>n;
cout<<"enter the element for the array"<<endl;
vector<int>arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}

cout<<"result of the selection sort "<<endl;

for(int i=0;i<n-1;i++){
  int k=i;
  for(int j=i+1;j<n;j++){
    if(arr[j]<arr[k]){
      k=j;
    }
  }
  swap(arr[i],arr[k]);

}

for(int i=0;i<n;i++){
  cout<<arr[i]<<","<<endl;
}

  return 0;
}
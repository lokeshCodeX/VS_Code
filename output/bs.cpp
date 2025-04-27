#include<bits/stdc++.h>
using namespace std;

int main(){
cout<<"enter the size of array"<<endl;

int n;
cin>>n;
cout<<"enter the element of the array for bineary search"<<endl;
vector<int>arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"enter the element for search "<<endl;
int k;
cin>>k;

int s=0;
int end=n-1;
while(s<end)
{
  int mid=(end+s)/2;
  if(arr[mid]==k){
    cout<<"position of the element"<<mid<<endl;
    break;
  }
  else if(arr[mid]>k){
    end=mid-1;
  }else{

    s=mid+1;
  }
}


return 0;
}
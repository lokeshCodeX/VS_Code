#include<bits/stdc++.h>
using namespace std;

int main(){
cout <<"enter the size of the array"<<endl;
int n;
cin>>n;
cout<<"enter the elements to the array"<<endl;
vector<int>arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}
// find all duplicate 

vector<int>ans;
map<int, int >mp;
for(int i=0;i<n;i++){
  if(mp.find(arr[i])!= mp.end()){
    ans.push_back(arr[i]);
  }else{
    mp[arr[i]]++;
  }
}

for(auto a: ans)
{
  cout<< a<<" ";
}
  return 0;
}
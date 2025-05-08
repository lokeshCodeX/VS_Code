
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


void solve(vector<int>arr, int n, vector<vector<int>>&ans, vector<int>output, int index){

if(index>=n){
  ans.push_back(output);
  return ;
}

solve(arr, n, ans, output, index+1);
output.push_back(arr[index]);
solve(arr, n, ans, output, index+1);



}

int main(){

vector<int>arr({1,2,3});
int n=arr.size();
vector<vector<int>>ans;
vector<int>output;

solve(arr,n, ans, output, 0);

for(auto i: ans){
  if(i.size()==0){
    cout<<"_"<<endl;
  }else{
  for(auto j:i){
    cout<<j<<" ";
      }
   }
  cout<<endl;
}


  return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
  vector<int> arr({1,2,3,4,5,6,7,8});
int k=3;
  int n=arr.size();

reverse(arr.begin(), arr.end());
reverse(arr.begin(), arr.begin()+k);
reverse(arr.begin()+k, arr.end());

for(auto i: arr){

  cout<<i<< " ";
}







return 0;
}
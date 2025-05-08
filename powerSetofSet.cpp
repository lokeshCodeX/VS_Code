#include<iostream>
#include<vector>
using namespace std;

void powerSet(vector<int>v, int n, int index,vector<int>output, vector<vector<int>>&ans){

if(index>=n){
   ans.push_back(output);
   return;
}

   powerSet(v,n, index+1,output,ans );
   output.push_back(v[index]);
   powerSet(v,n, index+1,output,ans );
   
   

}





int main(){

   vector<int>v({1,2,3});
   vector<int>output;
   int n=3;
   int index=0;

   vector<vector<int>>ans;

   powerSet(v,n,index,output, ans);

   for(auto i: ans){
      for(auto j:i){
         cout<<j<<" ";
      }
      cout<<endl;
   }




   return 0;
}
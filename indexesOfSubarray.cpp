#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>v({7,2,1});
int n=v.size();
int key=2;


int start=0;
int end=0;
for(int i=0;i<n;i++){
int sum=0;
for(int j=i;j<n;j++){

sum+=v[j];
if(sum==key && end-start+1<j-i+1){
   start=i;
   end=j;

}
}
}
cout<<start+1<<endl;
cout<<end+1<<endl;


   return 0;
}
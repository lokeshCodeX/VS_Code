#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;
 int main(){


vector<int>v({5,6,7,8,1,2,3,11});
int n=v.size();

int count=0;
for(int i=1;i<n;i++){
    if(v[i-1]>v[i]){
        count++;
    }

}
if(v[n-1]>v[0]){
    count++;
}

if(count>1){
    cout<<"is not roteted and sorted array"<<endl;

}
else{
    cout<<" yes it's"<<endl;

}



    return 0;
 }
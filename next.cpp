#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

vector<int >arr({1,2,1,1,3,2,4,4,5});

map<int, int>mp;
// count the accourence of the elemeents
for(int i=0;i<arr.size();i++){
    mp[arr[i]]++;
}
int k=0;
int last=arr.size()-1;
// store the elment at fisrt position then  to all at last position;
for(auto i: mp){
    if(i.second==1){
        arr[k++]=i.first;
    }else{

       int n=i.second;
       arr[k++]=i.first;
       for(int j=1;j<n;j++){
           arr[last--]=i.first;
       }

    }
}

//print hte element 
for(auto num: arr){
    cout<< num<<" ";
}

    return 0;
}
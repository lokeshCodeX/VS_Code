#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void solve(vector<int>v, int n, int k, vector<int>&ans){

queue<int>q;
for(int i=0;i<k;i++){

if(v[i]<0){
    q.push(v[i]);
}

}

if(!q.empty()){
    ans.push_back(q.front());
}
else{
    ans.push_back(0);
}



for(int i=k;i<n;i++){

if(v[i]<0){
    q.push(v[i]);
}

if(q.front()==v[i-k]){
    q.pop();
}

if(!q.empty()){
    ans.push_back(q.front());
}
else{
    ans.push_back(0);
}

}


}

int main(){

vector<int>v({-1,2,3,-3,-5,-4,3,5,6});
int n=v.size();
cout<<"enter the size of woindow "<<endl;

int k;
cin>>k;

vector<int>ans;

solve(v, n, k, ans);
for(auto i:ans){
    cout<< i<< " ";
}
cout<<endl;

    return 0;
}
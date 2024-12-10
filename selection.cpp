#include<iostream>
#include<vector>
using namespace std;
int main(){

//cout<<"hello lokesh"<<endl;


vector<int>v({2,4,0,2,9,7,2,4,6,7,-1});
int n=v.size();

for(int i=0;i<n-1;i++){
    int index=i;
    for(int j=i;j<n;j++){
        if(v[index]>v[j]){
            index=j;
        }
    }
    swap(v[index],v[i]);

}

for(auto i:v){
    cout<<i<<" ";
}

    return  0;
}
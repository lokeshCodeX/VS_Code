#include<iostream>
#include<vector>

using namespace std;
int main(){

vector<int>arr({1,5,9,0,-1,4,5,3,44,5,-44});
int n=arr.size();


for(int i=1;i<n;i++){
int key=arr[i];
int j=i-1;
       while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=key;

}

for(auto i: arr){
    cout<<i<<", ";
}

    return 0;
}
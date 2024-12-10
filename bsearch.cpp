#include<iostream>
#include<vector>
using namespace std;


int binearySearch(vector<int>v, int s, int e, int key){

if(s>e){
    return -1;
}
int mid=s+(e-s)/2;
if(v[mid]==key){
    return mid;
}
else if(v[mid]>key){
    return binearySearch(v, s, mid-1,key);
}else{
    return binearySearch(v,mid+1, e, key);
}

}



int main(){

vector<int>v({1,2,3,4,6,44,88,99});
int n=v.size();

cout<<"enter the key "<<endl;
int key;
cin>>key;
cout<<"position of the key in the vector "<<endl;
cout<<binearySearch(v, 0, n-1, key);


    return 0;
}
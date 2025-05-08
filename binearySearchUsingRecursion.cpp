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
 if(v[mid]>key){
 return   binearySearch(v, 0,mid-1,key);

}else{
   return binearySearch(v, mid+1,e, key);

}


}

int main(){
   vector<int> v({1,2,3,4,5,6,78,90});
   int n=v.size();
cout<<endl<<"enter the key "<<endl;

   int key;
   cin>>key;

   cout<<"index of the key value  : ";

   cout<<binearySearch(v,0,n-1, key );




   return 0;
}
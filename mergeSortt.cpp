#include<iostream>
#include<vector>
using namespace std;


void merger(vector<int>&arr, int s, int e){
int mid=s+(e-s)/2;
int left=mid-s+1;
int right=e-mid;

int* first=new int[left];
int* second=new int[right];


int k=s;
for(int i=0;i<left;i++){
    first[i]=arr[k++];
}

k=mid+1;

for(int i=0;i<right;i++){
    second[i]=arr[k++];

}
k=s;
int i=0,j=0;
while(i<left && j<right){
    if(first[i]<second[j]){
        arr[k++]=first[i++];
    }else{
        arr[k++]=second[j++];
    }
}


while(i<left){
arr[k++]=first[i++];
}
while(j<right){
    arr[k++]=second[j++];
}

delete[] first;
delete[] second;


}

void merge (vector<int>&v, int s, int e){


    if(s>=e){
        return ;
    }
int mid =s+(e-s)/2;
merge(v, s, mid);
merge(v, mid+1, e);

merger(v, s, e);


}

int main(){

vector<int>v({1,4,5,9,0,-11,3,4,5});
int n=v.size();

merge(v, 0, n-1);
for(auto i: v){
    cout<<i << " ";
}


    return 0;
}
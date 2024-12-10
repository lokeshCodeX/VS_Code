 #include<iostream>
 #include<algorithm>
 #include<vector>

 using namespace std;
 int main(){

vector<int>v({1,2,3,4,5,6,7,8,9});
int n=v.size();

int k;
cout<<"enter the k for rotated the array"<<endl;
cin>>k;

reverse(v.begin(), v.end());

reverse(v.begin(), v.begin()+k);
reverse(v.begin()+k, v.end() );

for(auto i: v)
{
cout<< i<<" ";
}
    return 0;
 }
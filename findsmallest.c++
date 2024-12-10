#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main(){


vector<int>v({5,2,7,1,1,8,2});
int n=v.size();
vector<int>ans(n,-1);
stack<int>st;
st.push(-1);
for(int i=n-1;i>=0;i--){

   int curr=v[i];
   while(st.top()>=curr){
    st.pop();
   }
   ans[i]=st.top();
   st.push(curr);


}
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}



    return 0;
}
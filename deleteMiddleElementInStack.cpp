#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int solve(stack<int>&st , int n){
if(n==1){
    int num=st.top();
    st.pop();
    return num;
}

int digit=st.top();
st.pop();
int midle=solve(st , n-1);
st.push(digit);
return midle;
}

int main(){


stack<int>st1;
st1.push(1);
st1.push(2);
st1.push(3);
st1.push(4);
st1.push(5);
int n=st1.size();

stack<int>st2;

st2.push(1);
st2.push(2);
st2.push(3);

st2.push(4);
st2.push(5);
st2.push(6);

int n2=st2.size();

    cout<<solve(st1, (n/2)+1);

    cout<<solve(st2, (n2/2)+1);






    return 0;
}
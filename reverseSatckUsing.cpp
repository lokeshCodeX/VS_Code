#include<iostream>
#include<stack>
using namespace std;

void insertAtBottum(stack<int> &st, int num){

    if(st.empty()){
        st.push(num);
        return;
    }

    int digi=st.top();
    st.pop();
    insertAtBottum(st, num);
    st.push(digi);
}

void solve(stack<int>&st ){


    if(st.empty()){
        return;
    }

    int num=st.top();
    st.pop();
    solve(st);
    insertAtBottum(st, num);
}

int main(){

stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);

solve(st);

cout<<"after the reverse  the stack"<<endl;

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

    return 0;
}
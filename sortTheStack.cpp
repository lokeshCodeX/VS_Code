#include<iostream>
#include<stack>

using namespace std;

void sortStack(stack<int> &st, int num){

if(st.empty()|| st.top()>=num){
    st.push(num);
    return;

}

int digi= st.top();
st.pop();
sortStack(st, num);
st.push(digi);

}

void solve(stack<int>&st){

if(st.empty()){
    return ; 
}

int num= st.top();
st.pop();

solve(st);
sortStack(st, num);


}



int main(){

stack<int>st;
st.push(-11);
st.push(0);
st.push(11);
st.push(6);
st.push(11);
st.push(0);
st.push(7);

solve(st);

cout<< " the sorted stack elements" <<endl;

while(!st.empty()){

  cout<<st.top()<<" ";
  st.pop();

}
    return 0;
}
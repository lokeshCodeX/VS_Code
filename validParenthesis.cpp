#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){

    string s="((({{[[[(())]]]}}))";

stack<char>st;
for(int i=0; i <s.length();i++){

char ch=s[i];

if(ch=='{' || ch=='(' || ch=='['){
    st.push(ch);
}else{

if(!st.empty()){
    char top=st.top();
    if((top=='{' && ch=='}') || (top=='(' && ch==')') ||(top=='[' && ch==']')){
        st.pop();
    }
}
    else{
        st.push(ch); // when we return the booelan value then we have not to write this statement --
        cout<<"string donot have valid parenthesis"<<endl;
        break;
    

}
}
}
if(st.empty()){
    cout<<"yesh it is valid parenthesis string"<<endl;

}
else{
    cout<<" it is not valid parenthesis valid string"<<endl;
}







    return 0;
}
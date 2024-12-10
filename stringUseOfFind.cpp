#include<iostream>
using namespace std;
int main(){

string s="abcdef";
string ptr="pqtr";

int found=s.find("abc");

if(found!=string::npos){

    cout<<found;
}

return 0;

}
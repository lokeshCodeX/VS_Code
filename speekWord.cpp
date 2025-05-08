#include<iostream>
using namespace std;


void speekWord(int n){

   if(n%10==0){
      return ;
   }
   speekWord(n/10);
   cout<<n<<" ";
}

int main(){

int n;
cin>>n;
cout<<endl << "speek the word as follow" << endl; 

speekWord(n) ;



   return 0;
}
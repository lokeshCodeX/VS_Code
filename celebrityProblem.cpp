#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
  
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    stack<int> s;
    for(int i=0; i<n; i++){
        s.push(i);
    }

    while(s.size()>=2){
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();

        if(arr[i][j]==1){
            s.push(j);
        }else{
            s.push(i);
        }
    }

    int pot = s.top();
    s.pop();

    for(int i=0; i<n; i++){
        if(i!=pot){
            if(arr[pot][i]==1 || arr[i][pot]==0){
                cout<<"none";
                return 0;
            }
        }
    }

    cout<<pot;


  return 0;

}
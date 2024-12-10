#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;


class graph{

public:
unordered_map<int, list<int>>mp;

void makeGraph(int u, int v, int direction){

mp[u].push_back(v);
if(direction==0){
    mp[v].push_back(u);
}

}

void printGraph(){
    for(auto i:mp){
    cout<<i.first<<"---->"<<i.first<<
    
    
    
    
    
    " ";
    for(auto j:i.second){
        cout<<j<<" ";
    }
    cout<<endl;
    }
}

};


int main(){

graph g;
cout<<"enter the number of nodes"<<endl;
int n;
cin>>n;
cout<<"enter the number of edges "<<endl;
int m;
cin>>m;


for(int i=0;i<m;i++){
int u,v;
cin>> u>>v;
g.makeGraph(u,v,0);


}

g.printGraph();

    return 0;
}
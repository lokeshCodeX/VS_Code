#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>


using namespace std;


class Graph{

public :
map<int, vector<int> >mp;

void insertNode(int u, int v){
  mp[u].push_back(v);
  mp[v].push_back(u);


    }
void print(){

for(auto i:mp){
    cout<<i.first<<"-->>[";
      for(auto j:i.second){
         cout<<j<<" ";
      }
      cout<<"]"<<endl;
}

}

void bfsTraversal(){

map<int, int>visited;
vector<int>ans;
queue<int>q;
for(int i=1;i<=5;i++){

    if(!visited[i]){
     ans.push_back(i);
        q.push(i);
        while(!q.empty()){
            int top=q.front();
            q.pop();
            visited[i]=1;



    for(auto nodes: mp[top]){
        if(!visited[nodes]){
        ans.push_back(nodes);
        q.push(nodes);
        visited[nodes]=1;
        }
    }

    }
    }



}

for(auto i: ans){
    cout<<i<<" ";
}


}


};


int main(){


    Graph g;
    cout<<"entrer the number of nodes"<<endl;
    int n;
    cin>>n;

    cout<<"enter the number edges"<<endl;
    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>> v;

        g.insertNode(u,v);
    }
    g.print();
    g.bfsTraversal();



    return 0;
}
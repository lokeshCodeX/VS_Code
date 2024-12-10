#include<iostream>
using namespace std;

class Node{

public :
int data;
Node* left;
Node* right;
Node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;

}







};

Node* binearyTree(Node* root){
int data;
cin>>data;
root=new Node(data);
if(data==-1){
    return NULL;
}


cout<<"enter the data for left Node"<<endl;

root->left=binearyTree(root->left);

cout<<"entert the data for right Node"<<endl;
root->right=binearyTree(root->right);

return root;


}


void inorederTraversal(Node*root){
    if(root==NULL){
        return ;
    }
 inorederTraversal(root->left);
 cout<<root->data<<endl;
 inorederTraversal(root->right);


}

int main(){
Node* root=NULL;

root=binearyTree(root);

inorederTraversal(root);



    
    cout<<"hello murari thakur"<<endl;
    return 0;
}
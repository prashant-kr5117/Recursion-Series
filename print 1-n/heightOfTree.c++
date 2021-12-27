#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

//function to depth or hieght of a tree by compute the number of nodes along the longest path from root to leaf node.
int maxDepth(node* root){
    if(root==NULL) return 0;

    int left = maxDepth(root->left);    //it point to left node of the root
    int right = maxDepth(root->right);  //it point to right node of the root

    return max(left,right) +1 ;

}

//function to create node 
node* newNode(int data){
    node* Node = new node();
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;

    return(Node);
}
int main(){
    node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

   cout<<"height : "<< maxDepth(root);
return 0;
}
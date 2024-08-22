/*
2. Find the min value in Binary Tree
*/

#include<iostream>
#include<climits>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
class Solution{
public:
    int minVal(TreeNode* root){
          if(root==NULL) return INT_MAX;
          return min(root->val,min(minVal(root->left),minVal(root->right)));
    }
};
int main(){
     TreeNode* a=new TreeNode(10);
     TreeNode* b=new TreeNode(2);
     TreeNode* c=new TreeNode(3);
     TreeNode* d=new TreeNode(4);
     TreeNode* e=new TreeNode(5);
     TreeNode* f=new TreeNode(6);
     TreeNode* g=new TreeNode(7);

     a->left=b;
     a->right=c;
     b->left=d;
     b->right=e;
     c->left=f;
     c->right=g;

     Solution sol;

     cout<<sol.minVal(a);


}
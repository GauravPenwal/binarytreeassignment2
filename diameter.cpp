#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 

class Solution {
public:
int height(TreeNode*root,int &diameter){
    if(root==nullptr) return 0;
    int lh= height(root->left,diameter);
    int rh= height(root->right,diameter);
    diameter = max(diameter,rh+lh);
    return 1+max(lh,rh); // returns the heights...
}


    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};
int main()
{
    
}
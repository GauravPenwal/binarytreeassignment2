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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>lvl;
            for(int i=0;i<size;i++){
                TreeNode* node =q.front();
                q.pop();
                lvl.push_back(node->val);
                if(node->right!=NULL)q.push(node->right);
                if(node->left!=NULL)q.push(node->left);
               }
            ans.push_back(lvl);
        }
    return ans;}
};
int main(){
    
}
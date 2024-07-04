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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int > >ans;
    queue<TreeNode*>nodequeue;
    if(root==nullptr) return ans;
    nodequeue.push(root);
    bool flag = true;// creating a flag to check the status...
    while(!nodequeue.empty()){
        int size = nodequeue.size();
        vector<int>list(size);// arr should have a size of queuesize..
        for(int i=0;i<size;i++){
        TreeNode*node = nodequeue.front();
        nodequeue.pop();

        // mainly zigzag happens here 
        int idx  = (flag)? i : (size-i-1);
        list[idx] = node->val;
        // now same as lvl order traversal.....
        if(node->left)nodequeue.push(node->left);
        if(node->right)nodequeue.push(node->right);    
        }
        flag = !flag;
        ans.push_back(list);
    }
    return ans;}
};
int main(){
    
}
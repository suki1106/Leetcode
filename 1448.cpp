/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int ans=0;
    
    void helper(TreeNode*ptr , int max){
        if(ptr==NULL)return;
        
        
        if(ptr->val >= max){
            max = ptr->val;
            ans++;
        }
        
        helper(ptr->left,max);
        helper(ptr->right,max);
        
    }
    
    
    int goodNodes(TreeNode* root) {
        
        helper(root,root->val);
        
        return ans;
        
    }
};
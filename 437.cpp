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
    
    void helper(TreeNode*ptr,int target,int p=0){
        
        
        if(ptr==NULL)return;
        
        int sum = p+ptr->val;
        
        if(sum==target)ans++;
        
        helper(ptr->left,target,sum);
        helper(ptr->right,target,sum);
        
        helper(ptr->left,target,p);
        helper(ptr->right,target,p);
        
        
        
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        helper(root,targetSum);
        return ans;
    }
};
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;

        //inorder traverse
        stack<TreeNode*>s;
        TreeNode* cur = root;
        while(cur ||!s.empty()){
            while(cur){
                s.push(cur);
                cur = cur->left;
            }

            cur = s.top();
            s.pop();
            if(cur->val >= low && cur->val <= high)sum+=cur->val;

            cur = cur->right;
        }
        return sum;
    }
};
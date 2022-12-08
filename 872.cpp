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

    vector<TreeNode*> s1;
    vector<TreeNode*> s2;

    void inorder(TreeNode* root,vector<TreeNode*>& s){
        if(root){
            inorder(root->left,s);
            if(!root->left&&!root->right)s.push_back(root);
            inorder(root->right,s);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inorder(root1,s1);
        inorder(root2,s2);

        if(s1.size() == s2.size()){
            for(int i = 0 ; i<s1.size();i++)
                if(s1[i]->val!=s2[i]->val)return 0;
            return 1;
        }else{
            return 0;
        }

    }
};
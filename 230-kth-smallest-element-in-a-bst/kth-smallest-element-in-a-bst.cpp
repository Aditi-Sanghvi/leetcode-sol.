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
void inorder(TreeNode* root, vector<int> & ans){
    if(root==NULL){
        return;
    };
    int count=0;
    inorder(root->left,ans);
    ans.push_back(root->val);
    count++;
    inorder(root->right,ans);
}
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);
        int result=ans[k-1];
        return result;
    }
};
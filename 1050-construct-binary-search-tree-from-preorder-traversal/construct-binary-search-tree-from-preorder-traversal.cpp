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
TreeNode* build(vector<int>& preorder, int & i, int UpperBound){
    if(i==preorder.size() || preorder[i]>UpperBound) return NULL;
    TreeNode* root=new TreeNode(preorder[i]);
    i++;
    root->left=build(preorder, i, root->val);
    root->right=build(preorder, i, UpperBound);
    return root;
}
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        int UpperBound=INT_MAX;
        return build(preorder,i,UpperBound);
    }
};
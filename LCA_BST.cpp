/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// LeetCode 235
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root ==NULL)
            return NULL;
        
        if( root->val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left, p ,q);
        
        if( root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right, p ,q);
        
        return root;
    }
//If both the nodes p and q are in the right subtree, then continue the search with right subtree 
//If both the nodes p and q are in the left subtree, then continue the search with left subtree 
//If both step 2 and step 3 are not true, this means we have found the node which is common to node p's and q's subtrees. and hence we return this common node as the LCA.
};

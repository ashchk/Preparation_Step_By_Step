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
 //199. Binary Tree Right Side View
class Solution {
public:
    void clearQueue(queue<TreeNode*>&nextLevel,queue<TreeNode*>&currentLevel){
        while(!nextLevel.empty()){
            currentLevel.push(nextLevel.front());
            //cout<<nextLevel.front()->val<<" ";
            nextLevel.pop();
        }
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        queue<TreeNode*>currentLevel, nextLevel;
        if(root == NULL)
            return result;
        nextLevel.push(root);
        TreeNode *node;
        while( !nextLevel.empty()){
            
            //currentLevel = nextLevel; takes more time to copy this way
            clearQueue(nextLevel,currentLevel); //also copy into currentLevel
            
            while(!currentLevel.empty()){
                
                node = currentLevel.front();
                //cout<<node->val<<" ";
                currentLevel.pop();
                
                if(node->left!=NULL)
                    nextLevel.push(node->left);
                if(node->right!=NULL)
                    nextLevel.push(node->right);
            }
            if(currentLevel.empty())
                result.push_back(node->val);
            //cout<<endl;
        }
        
        
        return result;
    }
    
};
//this is just the first approach, bfs with two queue..next time check how to do it with one queue

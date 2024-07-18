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
    struct Smthn{
        int value=0;
    };
    map<int,Smthn> m;
    void searchWhileAdd(TreeNode* root, int height){
        if(root->left){
            searchWhileAdd(root->left, height+1);
        }
        if(root->right){
            searchWhileAdd(root->right, height+1);
        }
        m[height].value += root->val;
    }
    int deepestLeavesSum(TreeNode* root) {
        searchWhileAdd(root,0);
        int i = 0;
        while(m[i].value != 0){
            i+=1;
        }
        return m[i-1].value;
    }
};
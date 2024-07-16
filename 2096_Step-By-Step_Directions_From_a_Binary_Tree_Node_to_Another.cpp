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
    bool findPath(TreeNode* root, int target, string& path) {
    if (root == nullptr) {
        return false;
    }
    if (root->val == target) {
        return true;
    }
    path.push_back('L');
    if (findPath(root->left, target, path)) {
        return true;
    }
    path.pop_back();
    path.push_back('R');
    if (findPath(root->right, target, path)) {
        return true;
    }
    path.pop_back();
    return false;
}
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string startWay="",destWay="", result="";
        findPath(root, startValue, startWay);
        findPath(root, destValue, destWay);
        if(startWay.length()== 0){return destWay;}
        if(destWay.length()== 0){return string(startWay.length(),'U');}
        int i = 0;
        while(startWay[i] == destWay[i]){
            i += 1;
        }
        result += string(startWay.length()-i,'U');
        result += destWay.substr(i,destWay.length()-i);
        return result;
    }
};


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
// class Solution {
// public:
// int inorder(TreeNode* root, vector<int> &ans,int pos, int k)
// {
//     if(root==NULL) return -1;
//     if(pos==k) return ans.back();;
//     inorder(root->left,ans,pos,k);
//     ans.push_back(root->val,pos++);
//     inorder(root->right,ans,pos,k);
// }
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         int pos=0;
//         vector<int> ans;
//         inorder(root,ans,pos,k);   
//     }
// };
class Solution {
public:
    int inorder(TreeNode* root, int &pos, int k) {
        if (root == NULL) return -1;  
        int left = inorder(root->left, pos, k);
        if (left != -1) return left;
        pos++;
        if (pos == k) return root->val;
        return inorder(root->right, pos, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int pos = 0;
        return inorder(root, pos, k);
    }
};

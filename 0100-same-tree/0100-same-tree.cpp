class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        bool l=isSameTree(p->left,q->left);
        bool r=isSameTree(p->right,q->right);
        bool c=(p->val == q->val) ;
        if(c && l && r) return true;
        return false ;

        
    }
};
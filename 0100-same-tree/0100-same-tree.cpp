class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) { 
    if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        bool isLeftSameTree = isSameTree(p->left,q->left);
        bool isRightSameTree = isSameTree(p->right,q->right);
        return isLeftSameTree && isRightSameTree && p->val == q->val;
    }
};
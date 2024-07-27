#include<iostream>
using  namespace std;


class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() {
        val = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root,
                                   TreeNode* p,
                                   TreeNode* q) {

        if (root == NULL) {
            return NULL;
        }

        if (root->val == p->val or root->val == q->val) {
            return root;
        }

        TreeNode* LSLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* RSLCA = lowestCommonAncestor(root->right, p, q);


        if (LSLCA != NULL and RSLCA != NULL) {
            return root;
        }

        if (LSLCA != NULL and RSLCA == NULL) {
            return LSLCA;

        } else {
            return RSLCA;
        }
    }
};




int main() {

}
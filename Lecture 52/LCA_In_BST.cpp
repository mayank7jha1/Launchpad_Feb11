
#include<iostream>
using  namespace std;



class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == NULL) {
            return NULL;
        }


        if ((root->val > p->val) and (root->val > q->val)) {
            //LCA is in the left half.
            return lowestCommonAncestor(root->left, p, q);
        }

        if ((root->val < p->val) and (root->val < q->val)) {
            //LCA is in the right half.
            return lowestCommonAncestor(root->right, p, q);
        }


        //Any other Scenario:
        return root;

    }
};


int main() {

}
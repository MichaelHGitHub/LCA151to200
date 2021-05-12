#pragma once

#include <stack>
#include "../common/common.h"

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
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        while (root)
        {
            pending.push(root);
            root = root->left;
        }
    }

    int next() {
        int r = pending.top()->val;
        TreeNode* node = pending.top()->right;
        pending.pop();

        while (node)
        {
            pending.push(node);
            node = node->left;
        }

        return r;

    }

    bool hasNext() {
        return !pending.empty();
    }

private:
    stack<TreeNode*> pending;
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

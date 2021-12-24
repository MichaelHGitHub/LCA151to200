#include "../common/common.h"
#include <stack>

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
    BSTIterator(TreeNode* root):
        m_root(root)
    {
        TreeNode* node = root;
        while (node)
        {
            m_nodes.push(node);
            node = node->left;
        }
    }

    int next() {
        TreeNode* node = m_nodes.top();
        int val = node->val;

        m_nodes.pop();
        if (node->right)
        {
            m_nodes.push(node->right);

            node = m_nodes.top()->left;
            while (node)
            {
                m_nodes.push(node);
                node = node->left;
            }
        }

        return val;
    }

    bool hasNext() {
        return !m_nodes.empty();
    }

private:
    TreeNode* m_root;
    std::stack<TreeNode*> m_nodes;
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

void traverse(TreeNode* root)
{
    std::stack<TreeNode*> nodes;

    TreeNode* node = root;
    while (node)
    {
        nodes.push(node);
        node = node->left;
    }

    while (!nodes.empty())
    {
        node = nodes.top();

        nodes.pop();
        //visit

        if (node->right)
        {
            nodes.push(node->right);
            node = nodes.top()->left;

            while (node)
            {
                nodes.push(node);
                node = node->left;
            }
        }
    }
}
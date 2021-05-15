#include <stack>
#include "header.h"


static void addRightMostNode(vector<int>& result, TreeNode* node, int level);

// Recursive
vector<int> rightSideView2(TreeNode* root)
{
    vector<int> result;
    addRightMostNode(result, root, 1);
    return result;
}

static void addRightMostNode(vector<int>& result, TreeNode* node, int level)
{
    if (!node)
    {
        return;
    }
    // Add the very first node(most right) of the level to the result;
    if (result.size() < level)
    {
        result.push_back(node->val);
    }
    // Recursive call right child first
    addRightMostNode(result, node->right, level + 1);
    addRightMostNode(result, node->left, level + 1);
}
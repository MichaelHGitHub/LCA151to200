#include "header.h"

static void rSideView(vector<int>& result, TreeNode* node, int level);

vector<int> rightSideView_r2(TreeNode* root)
{
    vector<int> result;
    rSideView(result, root, 0);
    return result;
}


void rSideView(vector<int>& result, TreeNode* node, int level)
{
    if (nullptr == node)
    {
        return;
    }

    if (result.size() == level)
    {
        result.push_back(node->val);
    }

    rSideView(result, node->right, level + 1);
    rSideView(result, node->left, level + 1);
}
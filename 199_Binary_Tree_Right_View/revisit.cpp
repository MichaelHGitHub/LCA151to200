#include "header.h"
#include <queue>

vector<int> rightSideView_r(TreeNode* root)
{
    vector<int> result;
    std::queue<TreeNode*> pending;

    if (root)
    {
        pending.push(root);
        while (!pending.empty())
        {
            int size = pending.size();
            // Push right child first so that the first in the 
            result.push_back(pending.front()->val);

            for (int i = 0; i < size; i++)
            {
                TreeNode* node = pending.front();
                pending.pop();

                if (node->right)
                {
                    pending.push(node->right);
                }
                if (node->left)
                {
                    pending.push(node->left);
                }
            }
        }
    }
    return result;
}
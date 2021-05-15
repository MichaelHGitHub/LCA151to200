#include <queue>
#include "header.h"

// Interative
// Bredth first traversal, add right child to queue first and add first node
// of each level to result.

vector<int> rightSideView(TreeNode* root)
{
    vector<int> result;
    if (!root)
    {
        return result;
    }

    queue<TreeNode*> pending;
    pending.push(root);
    while (!pending.empty())
    {
        // The number of nodes in the queue right now are at the same level,
        // Add first one(right most node) of the level to result.
        int num_of_level = pending.size();
        result.push_back(pending.front()->val);

        for (int i = 0; i < num_of_level; i++)
        {
            // Add right child first
            if (pending.front()->right)
            {
                pending.push(pending.front()->right);
            }
            if (pending.front()->left)
            {
                pending.push(pending.front()->left);
            }
            pending.pop();
        }
    }
    return result;
}
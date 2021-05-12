#include "header.h"

int main(char** args, int argc)
{
    TreeNode* root = GenerateTree({ 7, 3, 15, NULL_NODE_VALUE, NULL_NODE_VALUE, 9, 20 });

    BSTIterator* obj = new BSTIterator(root);
     int param_1 = obj->next();
     bool param_2 = obj->hasNext();



    return 0;
}
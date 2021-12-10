#include "header.h"

ListNode* getIntersectionNode_r(ListNode* headA, ListNode* headB)
{
    int len_a = 0;
    int len_b = 0;

    ListNode* node_a = headA;
    ListNode* node_b = headB;

    while (node_a || node_b)
    {
        if (node_a)
        {
            ++len_a;
            node_a = node_a->next;
        }

        if (node_b)
        {
            ++len_b;
            node_b = node_b->next;
        }
    }

    node_a = headA;
    node_b = headB;

    while (len_a > len_b)
    {
        node_a = node_a->next;
        --len_a;
    }

    while (len_b > len_a)
    {
        node_b = node_b->next;
        --len_b;
    }

    while (node_a != node_b)
    {
        node_a = node_a->next;
        node_b = node_b->next;
    }

    return node_a;
}
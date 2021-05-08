#include "header.h"

// The test frame doesn't work with this problem because I didn't 
// construct the two list to share same nodes.
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
    int length_A = 0;
    int length_B = 0;
    ListNode* head_A = headA;
    ListNode* head_B = headB;

    while (head_A)
    {
        ++length_A;
        head_A = head_A->next;
    }

    while (head_B)
    {
        ++length_B;
        head_B = head_B->next;
    }

    head_A = headA;
    head_B = headB;
    for (int i = 0; i < abs(length_A - length_B); i++)
    {
        if (length_A > length_B)
        {
            head_A = head_A->next;
        }
        else
        {
            head_B = head_B->next;
        }
    }

    while (head_A && head_B)
    {
        if (head_A == head_B)
        {
            head_A->next = nullptr;
            return head_A;
        }

        head_A = head_A->next;
        head_B = head_B->next;
    }

    return nullptr;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next = NULL;

    while (current != NULL) {

        // Store the next node
        next = current->next;

        // Reverse the link
        current->next = prev;

        // Move prev forward
        prev = current;

        // Move current forward
        current = next;
    }

    return prev;
}
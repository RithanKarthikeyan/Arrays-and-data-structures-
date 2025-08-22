/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == 0) {
        return head;
    }

    struct ListNode* temp = head;

    while (temp->next) {
        if (temp->val == temp->next->val) {
            temp->next = temp->next->next; // REMOVE DUPLICATE 
        } else {
            temp = temp->next; // MOVE FORWARD
        }
    }

    return head;
}

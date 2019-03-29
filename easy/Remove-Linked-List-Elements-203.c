/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *p, *q, *tmp;
    p = head;
    q = tmp = NULL;
    
    while (p) {
        if (p->val == val) {
            if (q)
                q->next = p->next;
            else
                head = p->next;
            tmp = p;
            p = p->next;
            free(tmp);
            continue;
        }
        q = p;
        p = p->next;
    }
   
   
    return head;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
        struct ListNode*  p = NULL; 
        struct ListNode*  q = head;
        int count = 0;
    
        if (n > 0) {
            while (q) {
                ++count;
                if (count >= (n+1)) {
                    if (count == (n+1)) {
                        p = head;
                    } else {
                            p = p->next;
                        }
                    }
                    q = q->next;
            }
            if (head) {
                if (p && p->next) {
                    q = p->next;
                    p->next = p->next->next;
                    free(q);
                } else {
                    if (count == n) {
                        q = head;
                        head = head->next;
                        free(q);
                    }
               }
            }
        }
        return head;
}

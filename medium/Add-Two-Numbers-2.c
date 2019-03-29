/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// this is reverse implementation
#if 0
struct ListNode* addTwoNumbers_int(struct ListNode* l1, struct ListNode* l2, int *carry) {
    node_t *p = NULL;
        
    if (!l1 && !l2)
            return NULL;
    p = (node_t *)malloc(sizeof(node_t));

    if (!l1) {
        p->next = add_numebr_int (NULL, l2->next, head, carry);
        p->val  = (l2->val + *carry)%10;
        *carry = (l2->val + *carry) / 10;
    }       
    if (!l2) {
        p->next = add_numebr_int (l1->next, NULL, head, carry);
        p->val  = (l1->val + *carry)%10;
        *carry = (l1->val + *carry) / 10;
    }       
    if (l1 && l2) { 
        p->next = add_numebr_int (l1->next, l2->next, head, carry);
        *head   = p;
        p->val  = (l1->val + l2->val + *carry)%10;
        *carry = (l1->val + l2->val + *carry) / 10;
    }
    return p;

}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode *p, *q;
    p = addTwoNumbers_int (l1, l2, &carry);
    // printf ("\n ANOOP p val %d \n", p->val);
    if (!p)
        return NULL;
    if (carry) {
        q = (struct ListNode *)malloc(sizeof(struct ListNode)); 
        q->val = carry;
        q->next = p;
        p       = q;
    }
    return p;
}
#endif

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *q, *p = NULL, *head = NULL;
    int carry = 0;
    
    while (l1 && l2) {
        q = (struct ListNode *)malloc(sizeof(struct ListNode));
        q->next = NULL;
        q->val = (l1->val+l2->val + carry)%10;
        carry = (l1->val+l2->val + carry)/10;
        if (head == NULL) {
            head = p = q;
        } else {
            p->next = q;
            p       = q;
        }
        l1    = l1->next;
        l2    = l2->next;
    }
    while (l1) {
        q = (struct ListNode *)malloc(sizeof(struct ListNode));
        q->next = NULL;
        q->val = (l1->val+ carry)%10;
        carry = (l1->val + carry)/10;
        if (head == NULL) {
            head = p = q;
        } else {
            p->next = q;
            p       = q;
        }
        l1    = l1->next;
    }
    while (l2) {
        q = (struct ListNode *)malloc(sizeof(struct ListNode));
        q->next = NULL;
        q->val = (l2->val+ carry)%10;
        carry = (l2->val + carry)/10;
        if (head == NULL) {
            head = p = q;
        } else {
            p->next = q;
            p       = q;
        }
        l2    = l2->next;
    }
    if (carry) {
        q = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->next = q;
        q->val = carry;
        q->next = NULL;
    }
    return head;
}
    

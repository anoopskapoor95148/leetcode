/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int count1=0, count2=0;
    int diff=0;
    struct ListNode *p, *q;
    if (headA == NULL || headB == NULL)
        return NULL;
    p = headA;
    while(p) {
        ++count1;
        p = p->next;
    }
    p = headB;
    while(p) {
        ++count2;
        p = p->next;
    }
    p = headA;
    q = headB;
    if (count1 > count2) {
        p = headA;
        diff = count1-count2;
        q = headB;
    }
    if (count2 > count1) {
        p = headB;
        diff = count2-count1;
        q = headA;
    }
    while  (diff) {
        p = p->next;
        --diff;
    }
    while (p != q) {
        p = p->next;
        q = q->next;
    }
    if (p != q)
        return NULL;
    return p;
    
}

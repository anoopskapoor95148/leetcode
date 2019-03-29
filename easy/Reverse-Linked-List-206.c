/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reverseList_int(struct ListNode* head, struct ListNode **newHead,
                    struct ListNode **parent) {
    if (!head)
        return;
    reverseList_int (head->next,newHead, parent);
    if (*newHead == NULL) {
        *newHead = *parent = head;
    } else {
        (*parent)->next = head;
        *parent       = head;
        head->next    = NULL;
    }
    return;
        
}
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *newHead=NULL, *parent=NULL;
    
    reverseList_int (head, &newHead, &parent);
    return newHead;
}
    

/*
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p, *q, *r;
    
    p = head;
    q = r = NULL;
    
    while (p) {
        r = p->next;
        p->next = q;
        q = p;
        p = r;
    } 
    return q;
}
*/

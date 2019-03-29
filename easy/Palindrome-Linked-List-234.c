/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void
isPalindrome_int (struct ListNode* head, struct ListNode **hp, 
                    int *count, int *count1, bool *flag) {
    if (!head)
        return;
    ++(*count);
    isPalindrome_int (head->next, hp, count, count1, flag);
    if ((*count1) > (*count)/2)
        return;
    ++(*count1);
    if (*flag == false) {
        if ((*hp)->val != head->val) {
            *flag = true;
        }
        *hp = (*hp)->next;
    }
    return;
}

bool isPalindrome(struct ListNode* head) {
        bool flag = false;
        int count=0, count1=0;
        struct ListNode* hp = head;
        isPalindrome_int (head, &hp, &count, &count1, &flag);
        if (flag == false) {
            return true;
        }
        return false;
}

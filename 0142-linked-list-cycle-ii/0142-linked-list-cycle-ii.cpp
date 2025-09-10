/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
        return NULL;
        ListNode *p=head;
        ListNode *q=head;
        while(q && q->next){
            p=p->next;
            q=q->next->next;

            if(p==q)
            break;
        }
        p=head;
        while(q && q->next)
        {
            if(p==q)
            return p;
            else {
                p=p->next;
                q=q->next;
            }
        }
        return NULL;
    }
};
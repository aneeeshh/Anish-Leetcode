/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode *p = head;
        vector<int> nums;
        while(p) {
            nums.push_back(p->val);
            p = p->next;
        }
        sort(nums.begin(),nums.end());
        p = head;
        for(int i = 0; i < nums.size(); i++) {
            p->val = nums[i];
            p = p->next;
        }
        return head;
    }
};
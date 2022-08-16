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
    ListNode* mergeNodes(ListNode* head) {
        //ListNode* temp = head;
        ListNode* dummy = head;
        ListNode* newHead = new ListNode(0);
        ListNode* ans = newHead;
        int sum = 0;
        while(dummy!=NULL && dummy->next!=NULL){
            dummy = dummy->next;
            while(dummy->val != 0){
                sum += dummy->val;
                dummy = dummy->next;
            }
            newHead->next = new ListNode(sum);
            newHead = newHead->next;
            sum = 0;
        }
        return ans->next;
    }
};
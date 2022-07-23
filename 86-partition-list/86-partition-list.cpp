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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(0);
        ListNode* right = new ListNode(0);
        ListNode* leftHead = left;
        ListNode* rightHead = right;
        while(head != NULL){
            if(head->val < x){
                leftHead->next = head;
                leftHead = leftHead->next;
            }
            else{
                rightHead->next = head;
                rightHead = rightHead->next;
            }
            head = head->next;
        }
        rightHead->next = NULL;
        leftHead->next = right->next;
        return left->next;
    }
};
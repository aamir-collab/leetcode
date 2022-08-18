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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     int count = 0;
     ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        if(count == n){
            ListNode* node = head;
            head = head->next;
            delete node;
            return head;
        }
        int steps = count-n;
        count = 0;
        temp = head;
        while(count!=steps-1){
            count++;
            temp = temp->next;
        }
        if(n == 1){
            temp->next = NULL;
        }
        else{
            ListNode* ext = temp->next;
            ListNode* dummy = temp->next->next;
            temp->next = dummy;
            ext->next = NULL;
        }
        return head;
    }
};
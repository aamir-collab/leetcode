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
    ListNode* reverseList(ListNode* head) {
        if(head){
        ListNode* temp = head->next;
        ListNode* dummy = NULL;
        while(temp!=NULL){
            head ->next = dummy;
            dummy = head;
            head = temp;
            temp = temp->next;
        }
        head -> next = dummy;
        return head;
        }  
        else{
            return NULL;
        }
    }
};
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* head = NULL;
        ListNode* temp = NULL;
        
        int deno = 0;
        while(p1 != NULL || p2 != NULL || deno == 1){
            int sum = 0;
            if(p1!=NULL){
                sum+=p1->val;
                p1=p1->next;
            }
            if(p2!=NULL){
                sum+=p2->val;
                p2=p2->next;
            }
            if(deno!=0){
                sum += deno;
                deno = 0;
            }
            if(sum >= 10){
                deno = sum/10;
                sum = sum%10;
            }
            ListNode* node = new ListNode(sum);
            if(head == NULL){
                head = node;
                temp = node;
            }
            else{
                temp->next = node;
                temp = node;    
            }  
        }    
        return head;
    }
};
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
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        ListNode *tempa = heada;
        ListNode *tempb = headb;
        int lengtha = 0;
        while(tempa != NULL){
            tempa = tempa->next;
            lengtha++;
        }
        int lengthb = 0;
        while(tempb != NULL){
            tempb = tempb->next;
            lengthb++;
        }
        int diff = abs(lengtha-lengthb);
        tempa = heada;
        tempb = headb;
        if(lengtha > lengthb){
            while(diff--){
                tempa = tempa->next;
            }
        }
        if(lengthb > lengtha){
            while(diff--){
                tempb = tempb->next;
            }
        }
        while(tempa != tempb){
            tempa = tempa->next;
            tempb = tempb->next;
            if(tempa == NULL || tempb == NULL){
                return NULL;
            }
        }
        return tempa;
    }
};
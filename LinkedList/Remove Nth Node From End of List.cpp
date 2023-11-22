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
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count+=1;
        }
        temp=head;
         for(int i=1;i<count-n;i++){
            temp = temp->next;
        }
        if(count-n==0){
            return head->next;
        }
        if(temp->next!=NULL){
            temp->next=temp->next->next;
            return head;
        }
        else{
            return NULL;
        }
    }
};

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
    bool hasCycle(ListNode *head) {
        ListNode *hi=head;
        ListNode *hello=head;
        while(hello!=NULL && hello->next!=NULL){
            hi=hi->next;
            hello=hello->next->next;
            if(hi==hello){
                return true;
            }
        }
        return false;
    }
};

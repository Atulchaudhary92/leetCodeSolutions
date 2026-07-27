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
       ListNode* twoStep=head;
        while(twoStep!=nullptr && twoStep->next!=nullptr){ 
             head=head->next;
             twoStep=twoStep->next->next;
            if(head==twoStep){
                return true;
            }            
              
        }
        return false;
    }
};

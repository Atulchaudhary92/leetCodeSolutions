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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        ListNode* first=head;
        ListNode* second=head->next;
        while(second!=nullptr){
            if(second->val==val){
              first->next=second->next;
              second=second->next;
            }
            else{
            first=second;
            second=second->next;}
        }
        if(head->val==val) return head->next;
        return head;
    }
};/**
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        ListNode* first=head;
        ListNode* second=head->next;
        while(second!=nullptr){
            if(second->val==val){
              first->next=second->next;
              second=second->next;
            }
            else{
            first=second;
            second=second->next;}
        }
        if(head->val==val) return head->next;
        return head;
    }
};

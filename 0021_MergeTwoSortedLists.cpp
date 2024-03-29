#include <algorithm>
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        if(list1->val < list2->val){
            head=new ListNode(list1->val);
            list1 = list1->next;
        }
        else{
            head = new ListNode(list2->val);
            list2 = list2->next;
        }
        ListNode* tail = head;
        while(list1 && list2){
            if(list1->val < list2->val){
                tail->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else{
                tail->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if(list1 != NULL){
            tail->next = list1;
        }
        if(list2 != NULL){
            tail->next = list2;
        }
        return head;
    }
};
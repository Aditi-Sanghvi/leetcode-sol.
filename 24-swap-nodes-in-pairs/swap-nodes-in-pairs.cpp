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
ListNode* reverse(ListNode* head){
    ListNode* temp=head;
    ListNode* prev=NULL;
    while(temp!=NULL){
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* second=temp->next;
            if(second==NULL) break;
            ListNode* nextPair=second->next;
            second->next=NULL;

            ListNode* newHead=reverse(temp);
            if(temp==head) head=newHead;
            else prev->next=newHead;

            temp->next=nextPair;
            prev=temp;
            temp=nextPair;
        }
        return head;
    }
};
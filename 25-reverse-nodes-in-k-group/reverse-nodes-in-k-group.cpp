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

ListNode* findKThNode(ListNode* head, int k){
    k=k-1;
    ListNode* temp=head;
    while(temp!=NULL && k>0){
        k--;
        temp=temp->next;
    }
    return temp;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        ListNode* kThNode=findKThNode(temp,k);
        while(temp!=NULL){
             ListNode* kThNode=findKThNode(temp,k);
              if(kThNode==NULL){
                if(prevNode) prevNode->next=temp;
                 break;
              }
    
        ListNode* nextNode=kThNode->next;
        kThNode->next=NULL;
        reverse(temp);
        if(temp==head){
            head=kThNode;
        }else{
            prevNode->next=kThNode;
        }
          prevNode=temp;
          temp=nextNode;
        }
        return head;
    }
};
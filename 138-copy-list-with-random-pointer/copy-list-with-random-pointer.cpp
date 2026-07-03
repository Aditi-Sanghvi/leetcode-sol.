/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

void insertCopy(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        Node* nextElement=temp->next;
        Node* copyNode=new Node(temp->val);
        copyNode->next=nextElement;
        temp->next=copyNode;
        temp=nextElement;
    }
}

void connectRandom(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        Node* copyNode=temp->next;
        if(temp->random){
            copyNode->random=temp->random->next;
        }else{
            copyNode->random=nullptr;
        }
        temp=temp->next->next;
    }
}

Node* connectNext(Node* head){
    Node* temp=head;
    Node* dummy=new Node(-1);
    Node* res=dummy;
    while(temp!=NULL){
        res->next=temp->next;
        res=res->next;
        temp->next=temp->next->next;
        temp=temp->next;
    }
    return dummy->next;
}

    Node* copyRandomList(Node* head) {
        insertCopy(head);
        connectRandom(head);
        return connectNext(head);
    }
};
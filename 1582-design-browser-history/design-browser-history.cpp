class Node{
public:
    string data;
    Node* prev;
    Node* next;

    Node(string url){
        data=url;
        prev=NULL;
        next=NULL;
    }
};
    
    
    class BrowserHistory {
public:
     Node* current;

    BrowserHistory(string homepage) {
        current=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode= new Node(url);
        current->next=newNode;
        newNode->prev=current;
        current=newNode;
    }
    
    string back(int steps) {
        while(steps>0 && current->prev!=NULL){
            current=current->prev;
            steps--;
        }
        return current->data;
    }
    
    string forward(int steps) {
        while(steps>0 && current->next!=NULL){
            current=current->next;
            steps--;
        }
        return current->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
/*
class Node {
    public:
    int value;
    Node* next;
    Node* prev;

    Node(int val): value(val), next(nullptr), prev(nullptr) {}
};
*/

class LinkedList {
    public:
    Node* head;
    Node* tail;

    void insertAtIndex(int index, int value) {
        // Complete this function
    Node* newNode=new Node(value);
    
    if(index==0){
        newNode->next=head;
    
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
    }else{
        Node* iter=head;
        for(int i=0;i<index-1;i++){
            iter=iter->next;
        }
        Node* A=iter;
        Node* B=iter->next;
        
        A->next=newNode;
        if(B!=NULL){
        B->prev=newNode;
        }
        newNode->next=B;
        newNode->prev=A;

    }
}
    
    // Don't modify this function
    void printValues() {
        if (head == NULL) {
            return;
        } else {
            Node* current = head;
            while (current != NULL) {
                cout << current -> value << ' ';
                current = current -> next;
            }
            cout << '\n';
        }
    }

};


class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
class MyCircularQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int maxSize;
    int size = 0;
    MyCircularQueue(int k) {
        maxSize = k;
    }
    
    bool enQueue(int value) {
        if(size == maxSize){
            return false;
        }
        Node* newNode = new Node(value);
        if(head == NULL){
            head=newNode;
            tail=newNode;
            size++;
        }
        else{
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
        size++;
        }
        return true;
    }
    
    bool deQueue() {
        if(size == 0 || head == NULL){
            return false;
        }
        size--;
        if(head == tail){
            Node* temp = head;
            head = head->next;
            tail=head;
            tail=NULL;
            head=NULL;
            delete temp;
            return true;
        }
        Node* temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete(temp);
        return true;
    }
    
    int Front() {
        if(head == NULL){
            return -1;
        }
        return head->data;
    }
    
    int Rear() {
        if(tail == NULL){
            return -1;
        }
        return tail->data;
    }
    
    bool isEmpty() {
        if(size == 0){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if(size == maxSize){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
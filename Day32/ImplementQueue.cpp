class Node{
  public:
     int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class Queue {
public:
   Node *head,*tail;
    int size=0;
    Queue() {
        // Implement the Constructor
        head=NULL;
        tail=NULL;
        size=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()) return -1;
        Node *temp=head;
        int x=head->data;
        head=head->next;
        delete(temp);
        size--;
        return x;
        
    }

    int front() {
        // Implement the front() function
        if(isEmpty()) return -1;
        return (head->data);
    }
};

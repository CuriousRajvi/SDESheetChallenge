#
// Stack class.
class Stack {
    int to;
    int arr[10000];
    int size;
public:
    
    Stack(int capacity) {
        // Write your code here.
        to=-1;
        size=capacity;
    }

    void push(int num) {
        // Write your code here.
        if(to>=size)
            return;
        else
            arr[++to]=num;
    }

    int pop() {
        // Write your code here.
        if(to!=-1)
            return arr[to--];
        else
            return -1;
    }
    
    int top() {
        // Write your code here.
        if(to!=-1 && to<size)
            return arr[to];
        else
            return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(to==-1)
            return 1;
        else
            return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(to>=size)
            return 1;
           else
               return 0;
    }
    
};

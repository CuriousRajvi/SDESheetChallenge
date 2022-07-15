
// Implement class for minStack.
class minStack
{
	// Write your code here.
	int Top,size,*minimum,*arr;
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
            size=100000;
            Top=-1;
            arr=new int[size];
            minimum=new int[size];
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
            Top+=1;
            arr[Top]=num;
            if(Top==0)
                minimum[Top]=num;
            else
                minimum[Top]=min(minimum[Top-1],num);
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
            if(Top==-1)
                return -1;
            else
                return arr[Top--];
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
            if(Top==-1)
                return -1;
            else
                return arr[Top];
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(Top==-1)
                return -1;
            else
                return minimum[Top];
		}
};

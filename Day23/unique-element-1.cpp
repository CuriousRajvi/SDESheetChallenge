int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    return x;
}

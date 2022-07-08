int search(int* arr, int n, int key) {
    // Write your code here.
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>=arr[start]){
            if(arr[start]<=key && key<=arr[mid])
                end=mid-1;
            else
                start=mid+1;
        }
            
        else{
            if(arr[end]>=key && key>=arr[mid])
                start=mid+1;
            else
                end=mid-1;
        }
    }
      return -1;
}

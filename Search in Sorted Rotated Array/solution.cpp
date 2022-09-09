// fn to find pivot element of the array
int findPivot(vector<int>& arr, int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        
        mid=s+(e-s)/2;
    }
    return s;
}

//fn to do binary search to find the key value
int binarySearch(vector<int>& arr, int s, int e, int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(key==arr[mid])
            return mid;
        else if(key<arr[mid])
            end=mid-1;
        else
            start=mid+1;
        
        mid=start+(end-start)/2;
    }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{   
    int pivot=findPivot(arr,n); //find the pivot element in the array
    
    //if key value is higher than the pivot element, start becomes the pivot         element and binary search is applied to find the key value
    if(k>=arr[pivot] && k<=arr[n-1]) 
        return binarySearch(arr,pivot,n-1,k);
    
    // else... key value is lesser than the pivot element, end becomes the pivot     element and binary search is applied to find the key value
    else
        return binarySearch(arr, 0,pivot-1,k);
}


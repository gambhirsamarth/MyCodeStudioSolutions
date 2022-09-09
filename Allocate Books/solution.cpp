bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int pageSum=0; // sum of pages of books alotted to a student 
    int studentCount=1; // total student count
    
    for(int i=0;i<n;i++){
        
        if(pageSum + arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        
        else
        {
            studentCount++; //incrementing student count in case the page sum is                             greater than mid value
            if(studentCount>m || arr[i]>mid)
                return false; //if student count>m or i'th elemenet is greater                                 than mid
            
            pageSum=arr[i]; // pageSum won't be again 0, it'll start from the                                 i'th value
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s=0;    // start for binary search
    int sum=0; // sum of pages
    int ans=-1; 
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid; // if its a possible solution, storing it in ans and going                         further to the left by decrementing end
            e=mid-1;
        }
        else
            s=mid+1; // if not possible soln, then going right by incrementing                             start
        mid=s+(e-s)/2; // updating the value of mid
    }
    return ans; 
}

void reverseArray(vector<int> &arr , int m)
{
    // Write your code here.
    int s=m+1;
    int e=arr.size()-1;
    while(s<e)
    {
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        e--;
        s++;
    }
}
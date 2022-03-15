// problem link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

long long maxSubarraySum(int arr[], int n)
{
    // using Kadane's algorithm
    long long sum=*max_element(arr,arr+n),s=0;
    for (int i=0;i<n;i++)
    {
        s+=arr[i];
        sum=max(sum,s);
        if (s<0) s=0;
    }
    return sum;
}

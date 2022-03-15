// problem link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

// Brute force -> sorting 
// TC: O(n*logn)

void sort012(int a[], int n)
{
    sort(a,a+n);
}

// Better -> count no of 0s, 1s and 2s
// TC: O(n)

void sort012(int a[], int n)
{
    int zeros=0,ones=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]==0) zeros++;
        else if (a[i]==1) ones++;
    }
    int i=0;
    for (;i<zeros;i++) a[i]=0;
    for (;i<zeros+ones;i++) a[i]=1;
    for (;i<n;i++) a[i]=2;
}

// Optimal -> Dutch National Flag ALgorithm
// TC: O(n)

void sort012(int a[], int n)
{
    // Dutch national flag algorithm
    int lo=0,hi=n-1,i=0;
    while (i<=hi)
    {
        if (a[i]==0)
        {
            swap(a[i],a[lo]);
            lo++;
            i++;
        }
        else if (a[i]==1)
            i++;
        else
        {
            swap(a[i],a[hi]);
            hi--;
        }
    }
}

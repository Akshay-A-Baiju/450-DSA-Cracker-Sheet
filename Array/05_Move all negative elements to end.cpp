#problem link: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

void segregateElements(int arr[],int n)
{
    int pos[n],neg[n],ps=0,ng=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>=0) pos[ps++]=arr[i];
        else neg[ng++]=arr[i];
    }
    int i=0;
    for (;i<ps;i++) arr[i]=pos[i];
    for (;i<n;i++) arr[i]=neg[i-ps];
}

// TC: O(n)
// SC: O(n)

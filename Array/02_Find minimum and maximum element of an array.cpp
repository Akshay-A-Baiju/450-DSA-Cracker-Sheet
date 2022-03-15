// problem link: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

pair<long long, long long> getMinMax(long long a[], int n) {
    long long mx=a[0],mn=a[0];
    for (int i=1;i<n;i++)
    {
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    pair <long long, long long> pr={mn,mx};
    return pr;
}

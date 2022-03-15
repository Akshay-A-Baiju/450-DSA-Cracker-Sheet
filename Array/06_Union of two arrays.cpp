// problem link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

int doUnion(int a[], int n, int b[], int m) 
{
    // using set
    set <int> st;
    for (int i=0;i<n;i++)
        st.insert(a[i]);
    for (int i=0;i<m;i++)
        st.insert(b[i]);
    return st.size();
}

// TC: O((n+m)*log(n+m))
// SC: O(n+m)

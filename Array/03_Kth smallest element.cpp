// problem link: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#

int kthSmallest(int arr[], int l, int r, int k) {
        // using max heap
        priority_queue <int> pq;
        for (int i=l;i<=r;i++)
        {
            pq.push(arr[i]);
            if (pq.size()>k) pq.pop();
        }
        return pq.top();
    }

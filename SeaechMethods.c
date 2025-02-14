#include "SearchMethods.h"

//顺序查找
int SequentialSearch(ElemType A[],int n,KeyType key) {
    for(int i = 0;i<n;++i)
        if(A[i].key==key)
            return i;
    return -1;
}

//二分查找
int BinarySearch(ElemType A[],int n,KeyType key) {
    int low=0,high=n-1;
    int ans;
    while(low<=high) {
        int mid = (low+high)/2;
        ans = mid;
        if(A[mid].key==key)
            return mid;
        else if(A[mid].key<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return ans;
}
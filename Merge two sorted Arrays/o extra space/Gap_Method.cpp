#include <bits/stdc++.h>

void swapIfGreater(vector<long long> &a,vector<long long> &b, int left, int right){
  if(a[left] > b[right]){
    swap(a[left], b[right]);
  }
}

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a,
  int n = a.size();
  int m = b.size();
  int len = n + m;
  int gap = (len/2) + (len%2);
  while(gap>0){
    int left = 0;
    int right = left + gap;
    while(right<len){
      if(left<n && right>=n){
        swapIfGreater(a,b,left,right-n);
      }
      else if(left>=n){
        swapIfGreater(b,b,left-n,right-n);
      }
      else{
        swapIfGreater(a,a,left,right);
      }
      left++,right++;
    }
    if(gap == 1) break;
    gap = (gap/2) + (gap%2);
  }
}
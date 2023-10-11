#include <bits/stdc++.h>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a,
  int size_a = a.size();
  int size_b = b.size();
  int i = size_a - 1;
  int j = 0;
  while(j<size_b && i>0){
    if(a[i] > b[j]){
      swap(a[i], b[j]);
    }
    i--,j++;
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
}
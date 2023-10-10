#include <bits/stdc++.h>


vector<vector<int>> triplet(int n, vector<int> &arr)
{
  // The Optimal Approach 
  // T.C.  --> O(N^2)
  // S.C.  --> O(N)
  sort(arr.begin(), arr.end());
  set<vector<int>> res;
  int size = arr.size();
  for(int i=0;i<size;i++){
    int j = i+1;
    int k = size-1;
    while(j<k){
      int sum = arr[i] + arr[j] + arr[k];
      if(sum == 0){
        // our solution case!
        vector<int> temp = {arr[i], arr[j], arr[k]};
        res.insert(temp);
        j++;
        k--;
        while(j<k && arr[j] == arr[j-1]) j++;
        while(j<k && arr[k] == arr[k+1]) k--;
      }
      else if(sum>0){
        k--;
      }
      else{
        j++;
      }
    }
  }

  vector<vector<int>> final_res(res.begin(), res.end());
  return final_res;
}

#include <bits/stdc++.h>

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // The better Approach!
    // T.C.  --> O(N^2 * Log N)
    // S.C.  --> O(N)
    set<vector<int>> res;
    int size = arr.size();
    for(int i=0;i<size;i++){
      set<int> hashset;
      for(int j=i+1;j<size;j++){
        int curr_sum = arr[i] + arr[j];
        int rem = -(curr_sum);
        if(hashset.find(rem) != hashset.end()){
          vector<int> temp = {arr[i], arr[j], rem};
          sort(temp.begin(), temp.end());
          res.insert(temp); 
        }
        hashset.insert(arr[j]);
      }
    }
    vector<vector<int>> final_res(res.begin(), res.end());
    return final_res;    
}

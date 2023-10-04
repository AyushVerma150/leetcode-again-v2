// The Optimal Solution

// Extra Space : O(n)
// Time Complexity : O(n)

int getLongestZeroSumSubarrayLength(vector<int> &arr) {
  int size = arr.size();
  unordered_map<int,int> mp;

  int prefix_sum = 0;
  int max_count = INT_MIN;

  for(int i=0;i<size;i++){
    prefix_sum+=arr[i];
    // If the Prefix Sum gets you a sum of "0" !!
    if(prefix_sum == 0){
      max_count = max(max_count, i+1);
    }
    if(mp.find(prefix_sum) != mp.end()){
      // we found the x, 0 sum is there.
      int index = mp[prefix_sum];
      max_count = max(max_count, i - index);
    }
    else{
      // the sum will be added to the map!
      mp[prefix_sum] = i;
    }
  }

  return max_count;
}



set<vector<int>> res;
int size = arr.size();

for (int i = 0; i < size; i++)
{
  for (int j = i + 1; j < size; j++)
  {
    set<int> hashset;
    for (int k = j + 1; k < size; k++)
    {
      int anti_sum = target - (arr[j] + arr[j] + arr[k]);
      if (hashset.find(anti_sum) != hashset.end())
      {
        vector<int> temp = {arr[i], arr[j], arr[k], anti_sum};
        sort(temp.begin(), temp.end());
        res.insert(temp);
      }
      hashset.insert(arr[k]);
    }
  }
}

int n = nums.size(); // size of the array
set<vector<int>> st;

// checking all possible quadruplets:
for (int i = 0; i < n; i++)
{
  for (int j = i + 1; j < n; j++)
  {
    set<long long> hashset;
    for (int k = j + 1; k < n; k++)
    {
      // taking bigger data type
      // to avoid integer overflow:
      long long sum = nums[i] + nums[j];
      sum += nums[k];
      long long fourth = target - sum;
      if (hashset.find(fourth) != hashset.end())
      {
        vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
        sort(temp.begin(), temp.end());
        st.insert(temp);
      }
      // put the kth element into the hashset:
      hashset.insert(nums[k]);
    }
  }
}
vector<vector<int>> ans(st.begin(), st.end());
return ans;
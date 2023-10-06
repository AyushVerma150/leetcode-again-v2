//   The Approach here is to calculate the Prefix and Suffix

#include<vector>
#include <bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	// Optimal Approach -1 
	int size = arr.size();
	int maxi = INT_MIN;
	int prefix = 1,suffix = 1;

	for(int i=0;i<size;i++){
		if(prefix == 0) prefix = 1;
		if(suffix == 0) suffix = 1;

		prefix *= arr[i];
		suffix *= arr[size-i-1];

		maxi = max({prefix,suffix,maxi});
	}

	return maxi;
}
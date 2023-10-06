

// In this solution, we will maximize the Product using Kadane's Algo..
// At each point we will keep note of the maximum and the minimum!


#include<vector>
#include <bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	int min_till_now = arr[0];
	int max_till_now = arr[0];

	int maxi = arr[0];

	for(int i=1;i<arr.size();i++){
		int temp = max({arr[i] , max_till_now * arr[i],  min_till_now * arr[i]});
	    min_till_now = min({arr[i] , max_till_now * arr[i],  min_till_now * arr[i]});
		max_till_now = temp;

		maxi = max(maxi, max_till_now);
	}

	return maxi;

}
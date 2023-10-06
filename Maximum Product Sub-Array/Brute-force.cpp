	
  #include<vector>
#include <bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
  // Brute force --> All sub arrays then multiply the result!
	int size = arr.size();
	int max_res = INT_MIN;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			int res_formed = 1;
			for(int k=i;k<=j;k++){
				// cout<<arr[k]<<"\t";
				res_formed*=arr[k];
			}
			// cout<<"\n";
			max_res=max(max_res,res_formed);

		}
	}
	return max_res;

}
  
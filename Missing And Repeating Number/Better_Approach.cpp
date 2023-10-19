#include <bits/stdc++.h>

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    Brute force Approach!
    int *arr;
    arr = new int[a.size()+1];

    for(int i=0;i<a.size();i++){
        if(arr[ a[i] ] == 0){
            arr[ a[i] ] = 1;
        }
        else if(arr[ a[i] ] == 1){
            arr[ a[i] ] = 2;
        }
    }


    vector< int > res(2);
    for(int i=1;i<a.size()+1;i++){
        if(arr[i] == 2) res[0] = i;
        else if(arr[i] == 0) res[1] = i;
    }
    return res;
}
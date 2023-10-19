#include <bits/stdc++.h>

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // The Optimal Approach!!
    int xr = 0;
    for(int i=0;i<a.size();i++){
        xr^=a[i];
        xr^=(i+1);
    }

    int bitNo = 0;
    while(true){
        if( (xr & (1<<bitNo)) != 0 ){
            break;
        }
        bitNo++;
    }

    // cout<<"The differenciating bit is : "<<bitNo<<"\n";

    int zero = 0;
    int one = 0;
    for(int i=0;i<a.size();i++){
        if( (a[i] & 1<<bitNo ) !=0 ){
            one^=a[i];
        }
        else{
            zero^=a[i];
        }


        if((i+1 & (1<<bitNo)) !=0 ){
            one^=(i+1);
        }
        else{
            zero^=(i+1);
        }
    }

    // cout<<"The one computed is : "<<one<<"\n";
    // cout<<"The zero computed is : "<<zero<<"\n";
    int cnt = 0;
    for(auto el: a){
        if(one == el) cnt++;
    }
    if(cnt == 2) return {one,zero};
    return {zero,one};
}
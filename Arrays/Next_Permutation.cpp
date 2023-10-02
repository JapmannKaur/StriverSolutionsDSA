// code
#include <bits/stdc++.h>
class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        int toswap1 = 0, toswap2 = 0, next_greater = 0, flag = 0;
        for(int i=n-1;i>0;i--) {
            if(a[i-1]<a[i]) {
                toswap1 = i-1;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            sort(a.begin(), a.end());
        }
        else {
            next_greater = a[toswap1+1];
            toswap2 = toswap1+1;
            for(int i=toswap1+2;i<n;i++) {
                if(a[i]>a[toswap1] && a[i] < next_greater) {
                    next_greater = a[i];
                    toswap2 = i;
                }
            }
            std::swap(a[toswap1], a[toswap2]);
            sort(a.begin()+toswap1+1, a.end());
        }
    }
};

// question link
// https://leetcode.com/problems/next-permutation/description/

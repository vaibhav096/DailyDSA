/*
Problem: Find the missing number
You are given an array arr containing n-1 distinct integers. 
The array consists of integers taken from the range 1 to n,
meaning one integer is missing from this sequence. Your task is to find the missing integer.
*/
#include <iostream>
using namespace std;
#include <vector>
int missingNumber(vector<int>&nums) {
    int ans=0;
    for(int i=1;i<=nums.size();i++){  
        ans=ans^i^nums[i-1];
    }
    ans^=nums.size()+1;
    return ans;
}

int main(){
    vector<int> a= {1,2,3,5,6,7};
    cout<<missingNumber(a)<<endl;
}
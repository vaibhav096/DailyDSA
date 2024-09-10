// Problem: Sort an Array of 0s, 1s, and 2s
// You are given an array arr consisting only of 0s, 1s, and 2s. 
// The task is to sort the array in increasing order in linear time (i.e., O(n)) without using any extra space. 
// This means you need to rearrange the array in-place.
# include <iostream>
using namespace std;
# include<vector>
void sortColors(vector<int>&nums){
    int index=0;
    int i=0;
        
    while(index<2){
        for(int j=i;j<nums.size();j++){
            if(nums[j]==index){
                swap(nums[i],nums[j]);
                i++;
            }
                
        }
        index++;
    }
};


int main(){

// main function

    return 0;
}
/*
Problem: Find the duplicate number
You are given an array arr containing n+1 integers, where each integer is in the range [1, n] inclusive. There is exactly one duplicate number in the array, but it may appear more than once. Your task is to find the duplicate number without modifying the array and using constant extra space.
Input :
An integer array arr of size n+1, where each element is an integer in the range [1, n].
Example : arr = [3, 1, 3, 4, 2]

*/


#include<iostream>
using namespace std;
#include <vector>

int findDuplicate(vector<int>& nums) {
       // we have to use a slow and fast pointer to gf[ind the duplicates in tha aray]
       // find the intersection point of the two pointers
       int slow = nums[0];
       int fast =nums[0];

       do{
        slow=nums[slow];
        fast=nums[nums[fast]];
        cout<<"slow"<<slow;
       cout<<" fast"<<fast<<endl;
       }while(slow!=fast);


       // now the pointers on the intersection point 
       // now take one pointer to the intial pos and then traverse them only by one pointer at time
       fast =nums[0];
       while(slow!=fast){
        fast=nums[fast];
        slow=nums[slow];
       }
        cout<<"slow"<<slow;
       cout<<" fast"<<fast<<endl;
       return slow;

    }
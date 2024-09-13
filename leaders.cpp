/*
Day 5 of 30 🗓

Problem : Find the Leaders in an Array
You are given an integer array arr of size n. An element is considered a leader if it is greater than all the elements to its right. Your task is to find all such leader elements in the array.

Input :
An integer array arr of size n.
Example : 
arr = [16, 17, 4, 3, 5, 2]

Output :
Return an array containing all the leader elements in the order in which they appear in the original array.
Example:
Leaders: [17, 5, 2]
*/

#include<vector>
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void leader(vector<int> arr){
    vector<int> ans;
    int size = arr.size();
    int maxNum = arr[size-1];
    ans.push_back(arr[size-1]);

    for(int i=size-2;i>=0;i--){
        if(maxNum < arr[i]){
            maxNum = arr[i];
            ans.push_back(arr[i]);
        }
    }
    
    reverse(ans.begin(),ans.end());

    for(int i=0;i<=ans.size()-1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1 = {16, 17, 4, 3, 5, 2};

    leader(v1);
    
    return 0;
}
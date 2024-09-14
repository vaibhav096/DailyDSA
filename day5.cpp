#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Function to find all subarrays with zero sum
vector<pair<int, int>> findZeroSumSubarrays(const vector<int>& arr) {
    vector<pair<int, int>> result;
    unordered_map<int, vector<int>> prefixSumMap;
    int sum = 0;
    
    // Insert initial prefix sum 0 at index -1 to handle subarrays starting from index 0
    prefixSumMap[0].push_back(-1);
    
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        
        // If sum has been seen before, it means there's a zero-sum subarray
        if(prefixSumMap.find(sum) != prefixSumMap.end()) {
            for(int startIndex : prefixSumMap[sum]) {
                result.push_back({startIndex + 1, i});
            }
        }
        
        // Store the current sum with the current index
        prefixSumMap[sum].push_back(i);
    }
    
    return result;
}

void printResult(const vector<pair<int, int>>& result) {
    cout << "[ ";
    for(const auto& p : result) {
        cout << "( " << p.first << " " << p.second << " ) ";
    }
    cout << "]" << endl;
}

int main() {
    // Test Case 1
    vector<int> array1 = {4, -1, -3, 1, 2, -1}; 
    vector<pair<int, int>> result1 = findZeroSumSubarrays(array1);
    cout << "Result test case 1: "; printResult(result1);
    
    // Test Case 2
    vector<int> array2 = {1, 2, 3, 4}; 
    vector<pair<int, int>> result2 = findZeroSumSubarrays(array2);
    cout << "Result test case 2: "; printResult(result2);
    
    // Test Case 3
    vector<int> array3 = {0, 0, 0}; 
    vector<pair<int, int>> result3 = findZeroSumSubarrays(array3);
    cout << "Result test case 3: "; printResult(result3);
    
    // Test Case 4
    vector<int> array4 = {-3, 1, 2, -3, 4, 0}; 
    vector<pair<int, int>> result4 = findZeroSumSubarrays(array4);
    cout << "Result test case 4: "; printResult(result4);
    
    return 0;
}

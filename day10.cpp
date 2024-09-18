#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagramGroups;
        
        for (const auto& s : strs) {
            std::string key = s;
            std::sort(key.begin(), key.end());
            anagramGroups[key].push_back(s);
        }
        
        std::vector<std::vector<std::string>> result;
        for (const auto& group : anagramGroups) {
            result.push_back(group.second);
        }
        
        return result;
    }
};

// Helper function to print the result
void printResult(const std::vector<std::vector<std::string>>& result) {
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << "\"" << result[i][j] << "\"";
            if (j < result[i].size() - 1) std::cout << ", ";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution solution;
    
    // Test case
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    std::cout << "Input: ";
    for (const auto& s : strs) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    
    std::vector<std::vector<std::string>> result = solution.groupAnagrams(strs);
    
    std::cout << "Output: ";
    printResult(result);
    
    return 0;
}
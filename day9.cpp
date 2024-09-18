#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) {
            return "";
        }
        
        // Sort the array of strings
        std::sort(strs.begin(), strs.end());
        
        // Compare the first and last strings
        const std::string& first = strs[0];
        const std::string& last = strs[strs.size() - 1];
        
        std::string result;
        for (size_t i = 0; i < first.length() && i < last.length(); ++i) {
            if (first[i] != last[i]) {
                break;
            }
            result += first[i];
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    std::vector<std::string> strs1 = {"flower", "flow", "flight"};
    std::cout << "Test case 1: " << solution.longestCommonPrefix(strs1) << std::endl;
    
    // Test case 2
    std::vector<std::string> strs2 = {"dog", "racecar", "car"};
    std::cout << "Test case 2: " << solution.longestCommonPrefix(strs2) << std::endl;
    
    // Test case 3
    std::vector<std::string> strs3 = {"interspecies", "interstellar", "interstate"};
    std::cout << "Test case 3: " << solution.longestCommonPrefix(strs3) << std::endl;
    
    return 0;
}
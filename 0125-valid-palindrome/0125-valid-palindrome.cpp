#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Move the left pointer if the current character is not alphanumeric
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
            // Move the right pointer if the current character is not alphanumeric
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            
            // Compare the lowercase versions of the characters
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }
            
            // Move both pointers inward
            left++;
            right--;
        }
        
        return true;
    }
};

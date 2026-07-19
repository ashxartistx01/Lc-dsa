#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }
        
        // Frequency array for 26 lowercase English letters
        std::vector<int> count(26, 0);
        
        // Count frequencies of characters in string s
        for (char c : s) {
            count[c - 'a']++;
        }
        
        // Decrement frequencies using string t
        for (char c : t) {
            count[c - 'a']--;
            // If count drops below 0, t has more of character 'c' than s
            if (count[c - 'a'] < 0) {
                return false;
            }
        }
        
        return true;
    }
};

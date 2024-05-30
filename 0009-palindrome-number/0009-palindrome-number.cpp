class Solution {
public:
    bool isPalindrome(int num) {
        // Negative numbers are not palindromes
        if (num < 0) return false;
        
        int original = num;
        long reversed = 0; // Use long to handle overflow for large inputs
        
        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        
        return original == reversed;
    }
};

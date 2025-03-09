
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */
    
    
    /*
    Additional Notes : None
    */

    
    //Two Pointer approach
class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1, flag = 0;
        while(left < right){
            if(s[left] != s[right]){
              return validPalinrome2(s, left + 1, right) || validPalinrome2(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalinrome2(string s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/valid-palindrome-ii/
    */
    
    

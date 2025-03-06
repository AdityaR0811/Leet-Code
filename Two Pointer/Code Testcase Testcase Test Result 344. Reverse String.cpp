
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
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
    
    
    /*
    Author : AdityaR0811
    https://leetcode.com/problems/reverse-string/
    */
    
    

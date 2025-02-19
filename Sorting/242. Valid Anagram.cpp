
    /*
    Time complexity : O(nlogn)
    Space complexity : O(1)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/valid-anagram/
    */
    
    
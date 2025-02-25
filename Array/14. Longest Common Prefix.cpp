
    /*
    Time complexity : O(n.m)
    Space complexity : O(m)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string result = "";
        for (int i = 0; i < strs[0].size(); i++){
            for(int j = 1; j < strs.size(); j++){
                if(i == strs[j].size() || strs[j][i] != strs[0][i]){
                    return result;
                }
            }
            result += strs[0][i];
        }
        return result;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/longest-common-prefix/
    */
    
    
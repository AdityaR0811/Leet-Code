
    /*
    Time complexity : O(n.mlogm)
    Space complexity : O(m.n)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<int>> anagrams;
        for(int i = 0; i < strs.size(); i++){
            string currString = strs[i];
            sort(currString.begin(), currString.end());
            if(anagrams.find(currString) != anagrams.end()) anagrams[currString].push_back(i);
            else anagrams[currString] = {i};
        }
        vector<vector<string>> answer;
        for(auto& i : anagrams){
            vector<string> currStrings;
            for(auto itr : i.second){
                currStrings.push_back(strs[itr]);
            }
            answer.push_back(currStrings);
        }
        return answer;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/group-anagrams/
    */
    
    
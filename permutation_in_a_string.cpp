// the solution is exactly same as the previous one just when we first find an anagram we return true and if not then false.
class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        vector<int> pVector(26,0);
        vector<int> cur(26,0);
        vector<int> res;
        for(char c : s1) 
        {
            pVector[c - 'a']++;
        }
        for(int i = 0; i < s2.size(); i++) 
        {
            cur[s2[i] - 'a']++;
            if(i >= s1.size()) 
            {
                cur[s2[i - s1.size()] - 'a']--;
            }
            if(cur == pVector) 
            {
                return true;
            }
        }
        return false;
    }
};
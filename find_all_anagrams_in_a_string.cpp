class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> pVector(26,0);
        vector<int> cur(26,0);
        vector<int> res;
        for(char c : p) 
        {
            pVector[c - 'a']++;
        }
        for(int i = 0; i < s.size(); i++) 
        {
            cur[s[i] - 'a']++;
            if(i >= p.size()) 
            {
                cur[s[i - p.size()] - 'a']--;
            }
            if(cur == pVector) 
            {
                res.push_back(i - p.size() + 1);
            }
        }
        return res;
    }
};
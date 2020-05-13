class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int res = 0;
        unordered_map<int,int> m;
        for(auto i : S)
        {
            m[i]++;
        }
        for(int i = 0; i < J.length(); i++)
        {
            if(m.find(J[i]) != m.end())
            {
                res += m[J[i]];
            }
        }
        return res;
    }
};
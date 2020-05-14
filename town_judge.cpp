class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
        vector<int>temp(N+1);
        for(int i = 0; i < trust.size();i++)
        {
            temp[trust[i][0]]--;
            temp[trust[i][1]]++;
        }
        for(int i = 1; i<=N; i++)
        {
            if(temp[i] == N-1)
            {
                return i;
            }
        }
        return -1;
    }
};
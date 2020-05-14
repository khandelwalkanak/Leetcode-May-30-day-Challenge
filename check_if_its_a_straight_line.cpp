class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) 
    {
        double slope = INT_MIN;
        double temp = 0;
        double x;
        double y;
        for(int i = 0; i < c.size() - 1; i++)
        {
            x = c[i+1][0] - c[i][0];
            y = c[i+1][1] - c[i][1];
            temp = (double) y / x;
            if(slope == INT_MIN)
            {
                slope = temp;
            }
            else if(slope != temp)
            {
                return false;
            }
        }
        return true;
    }
};
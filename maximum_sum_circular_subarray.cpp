class Solution {
public:
    
    int solve(vector<int>& v)
    {
        int n = v.size(); int sum = 0; int maxi = v[0];
        for(int i : v)
        {
            sum += i;
            if(maxi < sum)
            {
                maxi = sum;
            }
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& A) 
    {
        int s1 = solve(A); 
        int sum = 0; bool flag = false;
        for(auto i : A)
        {
            if(i >= 0)
            {
                flag = true;
                break;
            }
        }
        if(!flag) { return s1; }
        
        for(int i = 0; i < A.size(); i++)
        {
            sum += A[i];
            A[i] *= -1;
        }
        int s2 = solve(A);
        s2 += sum;
        return max(s1,s2);
    }
};
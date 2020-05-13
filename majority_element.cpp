class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int res = 0;
        int count = 0;
        for(auto i : nums)
        {
            if(count == 0)
            {
                res = i;
                count = 1;
                continue;
            }
            if(res == i)
            {
                count++;
                continue;
            }
            count--;
        }
        return res;
    }
};



/* another way :-
int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sum = 0;
        int ele = nums[0];

        for(auto it:nums)
        {            
            if(sum <= 0)
            {
                ele = it;
            }
            if(it == ele)
            {
                sum ++;
            }
            else
            {
                sum --;

            }
        }
        
        return ele;
            
    }
};
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if(n < 3) return nums[n-1];

        int i = n-2;
        int count = 1;
        while(i >= 0){
            if(count == 3) return nums[i+1];
            else if(nums[i] == nums[i+1]) i--;
            else{
                count++;
                if(i > 0) i--;
                else break;
            }
        }
        if(count == 3) return nums[i];
        else return nums[n-1];
    }
};
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int min = INT_MAX;
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min){
                min = nums[i];
            }
            else{
                maxi = max(maxi, nums[i] - min);
            }
        }
        return maxi;
	
	 // int n = nums.size();
        // int ans = 0;
        // for(int i = 0; i < n; i++){
        //     int maxi = 0;
        //     for(int j = i+1; j < n; j++){
        //         maxi = max(maxi,nums[j] - nums[i]);
        //     }
        //     ans = max(ans, maxi);
        // }
        // return ans;
    }
};
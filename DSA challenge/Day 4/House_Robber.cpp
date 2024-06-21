// //brute force
// class Solution {
// public:


//     void solve(int start, vector<int>& nums ,int& currSum,int& maxi){
//         maxi=max(maxi,currSum);

//         for(int i=start;i<nums.size();++i){
//             currSum+=nums[i];

//             solve(i+2,nums,currSum,maxi);

//             currSum-=nums[i];
//         }
//     }
//     int rob(vector<int>& nums) {
//         int maxi=INT_MIN;
//         int currSum=0;
        
//         solve(0,nums,currSum,maxi);
//         return maxi;
//     }
// };

// using include exclude pattern

// class Solution {
// public:

//     int robHelper(vector<int>& nums,int i){
//         if(i>=nums.size()){
//             return 0;
//         }

//         int rob1Amt=nums[i] + robHelper(nums,i+2);
//         int rob2Amt=0+robHelper(nums,i+1);

//         return max(rob1Amt,rob2Amt);
//     }
//     int rob(vector<int>& nums) {
//         return robHelper(nums , 0);
//     }
// };
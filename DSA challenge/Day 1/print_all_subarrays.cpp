#include<iostream>
#include<vector>

using namespace std;

void backtrack(int i,vector<int>&nums,vector<int>&current,vector<vector<int>>&result){

    result.push_back(current);

    for(int j=i;j<nums.size();++j){
        current.push_back(nums[j]);

        backtrack(i+1,nums,current,result);

        current.pop_back();


    }
    
}


vector<vector<int>>subsets(vector<int>&nums){
    vector<vector<int>>result;
    vector<int>current;
    // int i=0;
    backtrack(0,nums,current,result);
    return result;
}








int main(){
   vector<int>nums{1,2,3};
   vector<vector<int>>ans=subsets(nums);

     
}
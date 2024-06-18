#include<bits/stdc++.h>
using namespace std;

//brute force approach
int bruteForce(vector<int>nums){
    int n=nums.size();
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){ 
        for(int j=i;j<n;j++){

                int sum=0;
                // here k will traverse from i to j
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }

                maxi=max(maxi,sum);
            

        }
    }

    return maxi;

}

//better approach
int betterApproach(vector<int>nums){
    int maxi=INT_MIN;

    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
            
            sum+=nums[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}



int main(){
    vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
    // int maxsum=INT_MIN;
    cout<<"Bruteforce approach : "<<bruteForce(nums)<<endl;
    cout<<"Better Approach : "<<betterApproach(nums)<<endl;
}
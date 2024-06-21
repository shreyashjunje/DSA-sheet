


//BRUTE FORCE APPROACH

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/
#include<bits/stdc++.h>
class Solution{
    public:
    void solve(int start,vector<int>&A, int n,int& sum, vector<int>&curr,
       vector<pair<int,int>>&res){
          
          res.push_back(make_pair(curr.size(),sum));

          
        //   res.push_back(make_pair(curr.size(),sum));
          
          for(int i=start;i<n;++i){
              curr.push_back(A[i]);
              sum=sum+A[i];
              solve(i+1,A,n,sum,curr,res);
              sum=sum-A[i];
              curr.pop_back();
          }
      }
      
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        vector<pair<int,int>>res;
        vector<int>curr;
        int sum=0;
        solve(0,A,n,sum,curr,res);
            // Variable to keep track of the maximum length of arrays with sum 0
        int maxLength = 0;
    
        // Iterate through the vector of pairs
        for(const auto& pair : res) {
            // Check if the sum (second element) is 0
            if(pair.second == 0) {
                // Update maxLength if the current length (first element) is greater
                if(pair.first > maxLength) {
                    maxLength = pair.first;
                }
            }
        }
        
        return maxLength;
    }
    
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends


//nishant chahar approach
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        
        int sum=0;
        int ans=0;
        mp[0]=-1;
        
        
        
        for(int i=0;i<n;++i){
            sum+=A[i];
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
                
            }else{
                mp[sum]=i;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends


//lakshya approach
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        
        int sum=0;
        int ans=0;
        mp[0]=-1;
        
        
        
        for(int i=0;i<n;++i){
            sum+=A[i];
           if(sum==0){

             ans=max(ans,i+1);
           }else if(mp.find(sum)!=mp.end()){
            //agar map me already entry prresent hai
             ans=max(ans,i-mp[sum]);
           }else{
            //map me is sum ki koi entry present nahi hai 
             mp[sum]=i;
           }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends

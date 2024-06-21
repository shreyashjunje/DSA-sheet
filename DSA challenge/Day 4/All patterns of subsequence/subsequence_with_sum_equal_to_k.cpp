#include<bits/stdc++.h>
using namespace std;

		void solve(int i,int arr[],int n,int sum,int& totalSum , int & ans){
	    //base condition
	    if(i>=n){
	       if(totalSum==sum){
	           ans+=1;
	       }
	    }
	    
	    //exclude
	    solve(i+1,arr,n,sum,totalSum,ans);
	    
	    //include
	    totalSum+=arr[i];
	    solve(i+1,arr,n,sum,totalSum,ans);
	    
	    
	}
	
	
	
	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int totalSum=0;
        int ans=0;
        solve(0,arr,n,sum,totalSum,ans);
        return ans;
        
	}
int main(){

    int arr[]={5, 2, 3, 10, 6, 8};
    int n=6;
    int sum=10;
    cout<<"no. of sebsequence with sum "<<sum<<" : "<<perfectSum(arr,n,sum);

}


//brute force approach


// #include<bits/stdc++.h>
// using namespace std;

// 	void solve(int start,int arr[],int n,int sum,
// 	                pair<vector<int>,int>&p,int &ans){
	                    
// 	    if(p.second==sum){
// 	        ans=ans+1;
// 	    }
	    
	    
// 	    for(int i=start;i<n;++i){
// 	        p.first.push_back(arr[i]);
// 	        p.second+=arr[i];
	        
// 	        solve(i+1,arr,n,sum,p,ans);
	        
// 	        p.first.pop_back();
// 	        p.second-=arr[i];
	        
// 	    }
// 	}
// 	int perfectSum(int arr[], int n, int sum)
// 	{
//         // Your code goes here
//         int ans=0;
        
//         pair<vector<int>,int>p;
//         solve(0,arr,n,sum,p,ans);
//         return ans;
// 	}


// int main(){

//     int arr[]={5, 2, 3, 10, 6, 8};
//     int n=6;
//     int sum=10;
//     cout<<"no. of sebsequence with sum "<<sum<<" : "<<perfectSum(arr,n,sum);

// }
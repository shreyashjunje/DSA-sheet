#include<iostream>
#include<string>
#include<vector>
using namespace std;


void generateAllSubsequence(int i, string s,string& str,vector<string>&ans){
   //base case;
   if(i>=str.length()){
    ans.push_back(s);
    return;
   }

   //exclude
   generateAllSubsequence(i+1,s,str,ans);

   //include
   s.push_back(str[i]);
   generateAllSubsequence(i+1,s,str,ans);

}



int main(){
    string str="abc";
    vector<string>ans;
    int i=0;
    string s="";

    generateAllSubsequence(i,s,str,ans);

    cout<<"printing subsequence"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}
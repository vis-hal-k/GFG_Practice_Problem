//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
           int hash[26] = {0} ;
           for(int i =0 ; i<S.size() ; i++) {
               hash[S[i] - 'a']  +=  1 ;
               if(S[i] == S[i-1] && i> 0) {
                   hash[S[i]-'a']-- ;
               }
           }
           int count = 0 ;
           for(int i = 0 ; i < 26 ; i++) {
               if(hash[i]==N){
                   
                   count++ ;
               }
           }
           return count ;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
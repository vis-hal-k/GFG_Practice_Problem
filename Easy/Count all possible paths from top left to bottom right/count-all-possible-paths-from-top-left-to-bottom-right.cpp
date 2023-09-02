//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod = 1e9+7 ;
    long long int f(int m  , int n , vector<vector<long long int>> &dp){
        if(n==0 &&  m == 0 ) {
            return 1 ;
        }
        if(m < 0 || n < 0) return 0 ;
        if(dp[m][n] != -1) { return dp[m][n] ; }
        int c1 = f(m-1 , n , dp ) ;
        int c2 = f(m , n-1 , dp ) ;
        dp[m][n] =  (c1+c2)%mod ;
        return dp[m][n] ;
    }
    long long int numberOfPaths(int m, int n){
        vector<vector<long long int>> dp(m , vector<long long int>(n,-1)) ;
        return f(m-1,n-1,dp) ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
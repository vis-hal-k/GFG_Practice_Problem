//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    bool f(int k , int ind , vector<int> &ds , vector<int> arr, int s , int n) { 
        if(s > k ) return false ; 
        if(ind == n) {
            //  satisfied ;
            if(s == k){
                 return true ;
            }
            // not satisfied ;
            else return false ;
        }
        ds.push_back(arr[ind]) ;
        s += arr[ind] ;
        
    if( f(k,ind+1 ,ds,arr,s , n) == true ) { return true ;} ;
        s -= arr[ind] ; 
        ds.pop_back() ;
    if( f(k,ind+1 ,ds,arr,s , n) == true ) { return true ; } ;
    return false ;
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        
        vector<int> ds ;
        int sum = 0 ;
       return f(k,0,ds ,arr , sum  , n) ;
     
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    }
    return 0;
}
// } Driver Code Ends
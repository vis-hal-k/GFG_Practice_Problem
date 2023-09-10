//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void method1(int N , vector<int> &met1 , int arr[]) {
        int i = 0 ;
        while(N!=0 && i>=0) {
            if(arr[i] <= N) {
                N = N - arr[i] ;
                met1.push_back(arr[i]) ;
                i-- ;
            }
            i++ ;
        }
        return  ;
    } 
    vector<int> minPartition(int N)
    {
        vector<int> ans ; 
        // vector<int> dp(11,-1) ;
        int arr[10] =  { 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        method1(N , ans , arr) ;
        return ans ;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
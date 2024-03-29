//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        int din = -1 ;
        for(int  i =n-2 ; i >=0 ; i--){
            if(arr[i] < arr[i+1] ) {
                din = i ;
                break ;
            }
        }
        
        if(din ==-1) { reverse(arr.begin() , arr.end()) ;  
        return arr ; }
        for (int i = n-1  ; i > din ; i--) {
            if(arr[din] < arr[i]) {
                swap(arr[i] , arr[din]) ;
                break ;
            }
        }
        reverse(arr.begin()+1+din , arr.end() ) ;
        return arr ;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
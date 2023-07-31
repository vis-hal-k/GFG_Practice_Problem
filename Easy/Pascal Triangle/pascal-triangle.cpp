//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    ll int mod=1e9+7;
    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<ll> ans(n);
        ans[0]=1;
        for(int i=0;i<n;i++){
            for(int j=i;j>0;j--){
                ans[j]=(ans[j]+ans[j-1])%mod;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends
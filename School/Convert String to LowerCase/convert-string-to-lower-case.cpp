//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
        string Str = "" ;
        for(int i = 0 ; i<S.size() ; i++) {
            if(S[i]>=65 && S[i]<=90){
                char ch = S[i] + 32 ;
                Str =Str +  ch; 
            }
            else {
                Str = Str + S[i] ;
            }
        }
        return Str ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends
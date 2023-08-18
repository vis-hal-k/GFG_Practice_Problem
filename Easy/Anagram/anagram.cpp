//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
       if(a.size()>1 || b.size() > 1){
        sort(a.begin() , a.end()) ;
        sort(b.begin() , b.end()) ;
       }
       bool ans= true ;
        if(a.size() != b.size() ) {
            ans = false ;
            return  ans ;
        }
        else {
        for(int i=0 ; i<a.size() ; i++) {
            if(a[i] != b[i]) {
                ans = false ;
                return ans ;
            }
        }
        ans= true ;
        return ans ;
        }
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
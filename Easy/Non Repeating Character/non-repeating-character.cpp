//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n = S.size() ;
        int ch;
       vector<int> ans(26, 0) ;
       for(int i = 0 ; i< n ; i++) {
           ch = S[i]-97 ;
           ans[ch] += 1 ;
       }
       
       int index = 0 ;
       for(int i = 0 ; i < n ; i++ ){
        int in = S[i]-97 ;
        if(ans[in] == 1){
            char ans = 97+in ;
            return ans ;
        }
        }
      return '$';
       
       
       
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends
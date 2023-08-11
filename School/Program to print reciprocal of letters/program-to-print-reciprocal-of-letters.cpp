//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code hered
        string  str = "" ;
        
        for(int i = 0 ; i< S.size() ; i++ ){
            if(S[i]>=65 && S[i]<=90){
                char ch = S[i] - 64 ;
                str += 91 - ch ;  
            }
            else if(S[i]>= 97 && S[i]<=122) {
                char ch = S[i] - 96 ;
                str += 123 - ch ;
            }
            else {
                str+=S[i] ;
            } 
        }
        return str ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends
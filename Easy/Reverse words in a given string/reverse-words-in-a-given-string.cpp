//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
         string str = "" ;
        // string s = "" ;
        stack <string> st ;  
        string sets = "" ;
        int n = s.size() ;
 

        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i+1]=='.' && s[i] == '.'){
                continue ;
            }
            if(s[i] != '.') {
                sets += s[i] ;
            }
            if(s[i]=='.' ||  i == n-1 ){
                st.push(sets) ;
                sets = "" ;
            }
            
        }
        // cout<<st.top()<<endl ;
        while(!st.empty()) {
            if(st.size()>1){
            str += st.top()+"." ;
            st.pop() ;
            }
            else{
                str += st.top() ;
                st.pop() ;
            }
        }
        int m = str.size() ;
        if(str[m-1]=='.'){
        str.pop_back() ;
    }
        return str ;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    long long ExtractNumber(string S){
        
        //code here
       string ans="";
        long long res=-1,sol;
        bool flag=true;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>=48 and S[i]<=57)
            {
                while(S[i]>=48 and S[i]<=57)
                 {
                     if(S[i]=='9')
                     {
                        flag=false;
                     }
               
                    ans+=S[i];
                    i++;
                 }
                 if(flag==false)
                 {
                     flag=true;
                     ans="";
                 }
                  if(ans=="") 
                 {
                    sol=-1;
                 }
                 else
                 sol=stol(ans);
                
                 res=max(res, sol);
                 ans="";
            }
        }
       
        return res;
    }
};


//{ Driver Code Starts.
int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.ExtractNumber(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends
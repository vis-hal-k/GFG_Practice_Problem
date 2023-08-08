//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    int n=s.size() ;
    string str = "" ;
    for(int i =0;i<n ; i++) 
    {
        if(i==0 && s[i]>=97 && s[i]<=122) {
            char c = s[i] -32 ;
            s[i] = c ;
        }
        if(s[i] ==' ' && s[i+1]>=97 && s[i+1]<=122 ){
            char ch = s[i+1] -32 ;
            s[i+1] = ch  ;
            
        }
    }
    return s ;
}
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
    // if(str1.length()!=str2.length()) return false;
       int n1 = str1.length();
       string anti = "";
       for(int i=0; i<n1 ; i++)
           anti += str1[(i + 2) % n1];
    //   cout<<anti<<endl ;
       if(anti==str2)  return true;
       string cloc = "";
       for(int i=0; i<n1; i++)
           cloc += str1[(i - 2 + n1) % n1];
    //   cout<<cloc<<endl;
       if(cloc==str2) return true;
       else  return false;
    }
};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n==0) {
            return 0 ;
        }
        // Your logic here
        int x = 0 ;
        int val = 0 ;
        while(1<<x <= n){
            x++ ;
            val = 1<<x ;
        } // lp = largest_power of 2.
        int lp = x-1;
        int result1 = ((1<<(lp-1))*lp) ;
        int result2 = (n+1 - (1<<lp)) ;
        int rest =  n - (1<<lp) ;
        int ans = result1 + result2 + countSetBits(rest);
    return ans ;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends
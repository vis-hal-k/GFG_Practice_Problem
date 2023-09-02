//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void f(int ind , vector<vector<int>> &re , vector<int> &A , vector<int> imp ) {
        if(ind >= A.size() ) {
            re.push_back(imp) ;
            return  ;
        }
        imp.push_back(A[ind])  ;
        f(ind+1, re, A, imp ) ;
        imp.pop_back()   ;
        f(ind+1 , re, A , imp) ;
        return ;
    }
    
    vector<vector<int>> subsets(vector<int>& A)
    {
        vector<vector<int>> ans ; 
        vector <int> imp ;
        int ind = 0; 
        f(ind , ans , A , imp) ;
        sort(ans.begin() , ans.end()) ;
        return ans ;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends
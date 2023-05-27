//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> ans ;
        int temp,i,t;
        temp= 0 ; i=0;  t = 0 ;
        while(i<nums.size()){
         temp = temp^nums[i] ;
         i++ ;
        } 
        int right_bit  = temp&~(temp-1) ;
        for(int j=0 ; j<nums.size() ;j++) {
            if(nums[j]&right_bit){
                t=t^nums[j] ;
            }
        }
        ans.push_back(t^temp);
        ans.push_back(temp^temp^t) ;
        sort(ans.begin() , ans.end());
        return ans; 
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends
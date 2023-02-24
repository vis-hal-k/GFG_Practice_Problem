#User function Template for python3
class Solution:
	def minJumps(self, arr, n):
	    if n<=1:
	        return 0 
	    if arr[0]==0:
	        return -1
	    maxReach,steps,jumps =arr[0],arr[0],1
	    for i in range(1,n):
	        if i==n-1:
	            return jumps
	        maxReach = max(maxReach, i+arr[i]) 
	        steps-=1 ;
	        if steps==0:
	            jumps+=1
	            steps=maxReach-i
	            if maxReach==i:
	                return -1
        return -1          
	                
	        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		Arr = [int(x) for x in input().split()]
		ob = Solution()
		ans = ob.minJumps(Arr,n)
		print(ans)
# } Driver Code Ends
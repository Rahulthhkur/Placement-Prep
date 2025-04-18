//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    long long nthFibonacci(int n) {
        // code here
        if(n==0) return 0;
        if(n==1) return 1 ;
        
        long long a = 0, b=1 , c;
        
        for(int i=2 ; i<=n ; i++){
            c = a + b;
            a =b ;
            b =c ;
        }
        return b ;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends

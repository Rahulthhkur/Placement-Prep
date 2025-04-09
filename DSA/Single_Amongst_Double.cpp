//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findOnce(vector<int>& arr) {
        // code here.
        int low = 0 ;
        int high = arr.size()-1 ;
        
        while(low < high){
            int mid = low + (high-low)/2 ;
            
            if(mid % 2 == 1){
                mid--;
            }
            if(arr[mid] == arr[mid+1]){
                low = mid+2;
            }
            else{
                high = mid;
            }
        }
        return arr[low];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.findOnce(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends

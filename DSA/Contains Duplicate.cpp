#include <iostream>
#include <algorithm>
using namespace std;

bool isDuplicate(int nums[], int N){
    //Check if the array is zero or 1
    if(N<=1){
        return false;
}
    sort(nums, nums+N);
    
    for(int i=1; i<N; i++){
        if(nums[i] == nums[i-1]){
            return true;
        }
    }
    return false;
}


int main() {
    int nums1[] ={1,2,3,1};
    int N1= sizeof(nums1)/sizeof(nums1[0]);
    
    cout<< (isDuplicate(nums1, N1) ? "True" : "False") <<endl;
    
    int nums2[]= {1,2,3,4};
    int N2= sizeof(nums2)/sizeof(nums2[0]);

    cout<< (isDuplicate(nums2, N2) ? "True" : "False") <<endl;    
    return 0;
}

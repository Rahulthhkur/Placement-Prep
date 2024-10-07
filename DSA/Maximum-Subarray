#include <iostream>
#include <limits.h>
using namespace std;

int maxarr(int A[], int N){
    int current_sum = 0;
    int max_sum = 0;
    
    for(int i=0; i<N; i++){
        current_sum = max(A[i], current_sum + A[i]);
        max_sum = max(current_sum, max_sum);
    }
    return max_sum;
}

int main() {
    // Write C++ code here
    int A[]= {-2,1,-3,4,-1,2,1,-5,4};
    int N = sizeof(A) / sizeof(A[0]);
    
    cout<<"Maximum subarray sum is"<< maxarr(A, N);
    

    return 0;
}

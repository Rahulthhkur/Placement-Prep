#include <iostream>
#include <limits.h>
using namespace std;

int miniarr(int A[], int N){
    int mini =INT_MAX;
    for(int i=0; i<N; i++){
        if(A[i]< mini){
            mini = A[i];
        }
    }
    return mini;
}

int maxarr(int A[], int N){
    int maxi =INT_MIN;
    for(int i=0; i<N; i++){
        if(A[i]> maxi){
            maxi = A[i];
        }
    }
    return maxi;
}

int main() {
    // Write C++ code here
    int A[]= {10,20,30,40,50};
    int N= 5;
    
    cout << "The minimum value here is: " <<miniarr(A,N)<<endl;
    cout << "The maximum value here is: " <<maxarr(A,N)<<endl;

    return 0;
}

#include <iostream>
#include <limits.h>
using namespace std;

void reversearr(int A[], int N){
    int temp[N];
    
    for(int i=0; i<N; i++){
        temp[i] = A[N-i-1];
    }
    for(int i=0; i<N; i++){
        A[i]= temp[i];
    }
}

int main() {
    // Write C++ code here
    int A[]= {10,20,30,40,50};
    int N= 5;
    
    reversearr(A,N);
    cout << "Reversed array: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void fibonacii(int n){
    if(n>=0) cout<< "0" <<" ";
    if(n>=1) cout<< "1" <<" ";
    
    int a= 0 , b=1 , c;
    
    for(int i=2 ; i<=n ; i++){
        c = a+b ;
        cout<< c << " ";
        a = b ;
        b = c ;
    }
    cout<< endl;
    
}

int main() {
	// your code goes here
	int t ;
	std::cin >> t;
	
	while(t--){
	    int n;
	    cin>> n ;
	    fibonacii(n);
	}

}

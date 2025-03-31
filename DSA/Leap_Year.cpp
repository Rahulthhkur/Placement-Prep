class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if(n % 4 == 0 and (n % 100 !=0 or n % 400 == 0 ) ){
            return true;
        }
        return false;
    }
};

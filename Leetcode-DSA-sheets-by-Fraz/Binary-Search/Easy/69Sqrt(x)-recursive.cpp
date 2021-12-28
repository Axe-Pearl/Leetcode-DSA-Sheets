// recursive approach

class Solution {
public:
     int root;
    int searchRoot(int low, int high, int x){
        long long int mid = (low+high)/2;
        if(high>=low){
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid > x){
                return searchRoot(low, mid-1, x);
            }
            else if(mid*mid < x){
                root = mid;
                return searchRoot(mid+1 , high, x);
            }
        }
        return root;
    }
    
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        return searchRoot(low, high, x);
    }
};

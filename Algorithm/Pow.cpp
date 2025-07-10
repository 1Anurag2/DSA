class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 1) return 1.0;
        if(x == 0) return 0.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;

        long binaryForm = n;
        if(binaryForm < 0){
            x = 1/x;
            binaryForm = -binaryForm;
        }
        double ans = 1;
        while(binaryForm > 0){
            if(binaryForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binaryForm /= 2;
        }
        return ans;
    }
};
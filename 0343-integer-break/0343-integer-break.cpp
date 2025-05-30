class Solution {
public:
    int integerBreak(int n) {
        if (n == 2) {
            return 1;
        }
        if (n == 3) {
            return 2;
        }
        if (n % 3 == 0) {
            return (int)pow(3, n / 3);
        } else if (n % 3 == 1) {
            return (int)pow(3, (n - 4) / 3) * 4;
        } else {
            return (int)pow(3, (n - 2) / 3) * 2;
        }
    
}
};
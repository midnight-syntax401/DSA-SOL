class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid = s + (e - s) / 2;
        int ans = -1;

        // Sirf ek while loop
        while (s <= e) {
            long long int square = mid * mid;

            // Agar exact square root mil gaya
            if (square == x) {
                return mid;
            }

            // Agar square chota hai -> right side jao aur ans save karo
            if (square < x) {
                ans = mid;
                s = mid + 1;
            } 
            // Agar square bada nikal gaya -> left side jao
            else {
                e = mid - 1;
            }

            mid = s + (e - s) / 2;
        }

        return ans;
    }
};
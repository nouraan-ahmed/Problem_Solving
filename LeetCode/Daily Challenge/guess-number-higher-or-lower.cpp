/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long mid=0;
        long l=1;
        long r=n;
        while(l<=r){
            mid=(l+r)/2;
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)==1){
                l=mid+1;
            }
            else if(guess(mid)==-1){
                r=mid-1;
            }
        }
       return -1;
    }
};

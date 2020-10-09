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
        int minNumber = 1;
        int maxNumber = n;
        
        while(true)
        {
            int meanNumber = (maxNumber-minNumber)/2+ minNumber;
            
            int res = guess(meanNumber);
            
            if(res==0)
            {
                return meanNumber;
            }
            else if( res==1)
            {
                minNumber = meanNumber+1;
            }
            else
            {
                maxNumber = meanNumber-1;
            }
        }
        
    }
};
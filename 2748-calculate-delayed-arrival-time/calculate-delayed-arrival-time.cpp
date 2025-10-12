class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int c=arrivalTime + delayedTime;
        if(c==24){
            return 0;
        }
        else if(c>24){
            return c-24;
        }
        return c;

        
    }
};
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;     
        int empties = numBottles;   

        while (empties >= numExchange) {
            int a= empties / numExchange; 
            total += a;                    
            empties = a + (empties % numExchange); 
        }

        return total;
    }
};
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
       int empty=numBottles;
       int a=numBottles;
       
       while(empty>=numExchange){
            empty-=numExchange;
             a++;
             empty++;
            
             numExchange++;
       }
       return a;
    }
};
class Solution {
public:
int numDWB(int numBottles, int numExchange) {
    int DB = numBottles;
        while(numBottles >= numExchange) {
       int Q =  numBottles / numExchange;
         int reminderB = numBottles % numExchange;
        DB = DB + Q;
        numBottles = Q + reminderB;
}
return DB;
}
    int numWaterBottles(int numBottles, int numExchange) {
        return numDWB(numBottles, numExchange);                    
        }
    
};
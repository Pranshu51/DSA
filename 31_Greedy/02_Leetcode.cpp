// 948. Bag of Tokens

// You start with an initial power of power, an initial score of 0, and a bag of tokens given as an integer array tokens, where each tokens[i] denotes the value of tokeni.
// Your goal is to maximize the total score by strategically playing these tokens. In one move, you can play an unplayed token in one of the two ways (but not both for the same token):
// Face-up: If your current power is at least tokens[i], you may play tokeni, losing tokens[i] power and gaining 1 score.
// Face-down: If your current score is at least 1, you may play tokeni, gaining tokens[i] power and losing 1 score.
// Return the maximum possible score you can achieve after playing any number of tokens.

// Example 1:

// Input: tokens = [100], power = 50

// Output: 0

// Explanation: Since your score is 0 initially, you cannot play the token face-down. You also cannot play it face-up since your power (50) is less than tokens[0] (100).



// class Solution {
// public:
//     int bagOfTokensScore(vector<int>& tokens, int power) {
//         int n = tokens.size();
//         int score=0;
//         sort(tokens.begin(),tokens.end());
//         int maxScore=0;
//         int i =0;int j =n-1;
//         while(i<=j){
//             if(power>=tokens[i]){
//                 power-=tokens[i];
//                 score++;
//                 i++;

//                 maxScore=max(maxScore,score);
//             }else if (score>=1){
//                 power+=tokens[j];
//                 score--;
//                 j--;
//             }else return maxScore;
//         }
//         return maxScore;
//     }
// };




// 1710. Maximum Units on a Truck

// You are assigned to put some amount of boxes onto one truck. You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:

// numberOfBoxesi is the number of boxes of type i.
// numberOfUnitsPerBoxi is the number of units in each box of the type i.
// You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck. You can choose any boxes to put on the truck as long as the number of boxes does not exceed truckSize.

// Return the maximum total number of units that can be put on the truck.

 

// Example 1:

// Input: boxTypes = [[1,3],[2,2],[3,1]], truckSize = 4
// Output: 8
// Explanation: There are:
// - 1 box of the first type that contains 3 units.
// - 2 boxes of the second type that contain 2 units each.
// - 3 boxes of the third type that contain 1 unit each.
// You can take all the boxes of the first and second types, and one box of the third type.
// The total number of units will be = (1 * 3) + (2 * 2) + (1 * 1) = 8.

// bool cmp(vector<int> &a,vector<int> &b){
//         return a[1]>b[1];
//     }

// class Solution {
// public:
    
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//         sort(boxTypes.begin(),boxTypes.end(),cmp);
//         int profit=0;
//         for(int i=0;i<boxTypes.size();i++){
//             if(boxTypes[i][0]<=truckSize){
//                 profit+=boxTypes[i][0]*boxTypes[i][1];
//                 truckSize-=boxTypes[i][0];
//             }else{
//                 profit+=truckSize*boxTypes[i][1];
//                 truckSize=0;
//             }
//             if(truckSize==0) break;
//         }
//         return profit;
//     }
// };



// 881. Boats to Save People

// You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.

// Return the minimum number of boats to carry every given person.

 

// Example 1:

// Input: people = [1,2], limit = 3
// Output: 1
// Explanation: 1 boat (1, 2)

// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         int n = people.size();
//         sort(people.begin(),people.end());
//         int boats=0;
//         int i=0; int j = n-1;
//         while(i<=j){
//             if(people[i]+people[j]<=limit){ 
//                 i++;
//                 j--;
//             }else{
//                 j--;
//             }
//             boats+=1;
//         }
//         return boats;
//     }
// };



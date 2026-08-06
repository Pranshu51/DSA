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







// 2182. Construct String With Repeat Limit

// You are given a string s and an integer repeatLimit. Construct a new string repeatLimitedString using the characters of s such that no letter appears more than repeatLimit times in a row. You do not have to use all characters from s.
// Return the lexicographically largest repeatLimitedString possible.
// A string a is lexicographically larger than a string b if in the first position where a and b differ, string a has a letter that appears later in the alphabet than the corresponding letter in b. If the first min(a.length, b.length) characters do not differ, then the longer string is the lexicographically larger one.

 

// Example 1:

// Input: s = "cczazcc", repeatLimit = 3
// Output: "zzcccac"
// Explanation: We use all of the characters from s to construct the repeatLimitedString "zzcccac".
// The letter 'a' appears at most 1 time in a row.
// The letter 'c' appears at most 3 times in a row.
// The letter 'z' appears at most 2 times in a row.
// Hence, no letter appears more than repeatLimit times in a row and the string is a valid repeatLimitedString.
// The string is the lexicographically largest repeatLimitedString possible so we return "zzcccac".
// Note that the string "zzcccca" is lexicographically larger but the letter 'c' appears more than 3 times in a row, so it is not a valid repeatLimitedString.

// class Solution {
// public:
//     string repeatLimitedString(string s, int repeatLimit) {
//         unordered_map<char,int> mp;
//         for(auto x: s){
//             mp[x]++;
//         }
//         priority_queue<pair<char,int>> pq;
//         for(auto x: mp){
//             pq.push(x);
//         }
//         string result="";
//         while(!pq.empty()){
//             auto largest = pq.top();
//             pq.pop();
//             int len = min(largest.second,repeatLimit);
//             for(int i=0;i<len;i++){
//                 result+=largest.first;
//             }
//             pair<char,int> secondLargest;
//             if(largest.second-len>0){
//                 if(!pq.empty()){
//                 secondLargest = pq.top();
//                 pq.pop();
//                 result+=secondLargest.first;
//                 }else return result;
//                 if(secondLargest.second-1>0) pq.push({secondLargest.first,secondLargest.second-1});
//                 pq.push({largest.first,largest.second-len});
//             }
//         }
//         return result;
//     }
// };





// 781. Rabbits in Forest

// There is a forest with an unknown number of rabbits. We asked n rabbits "How many other rabbits have the same color as you?" and collected the answers in an integer array answers where answers[i] is the answer of the ith rabbit.
// Given the array answers, return the minimum number of rabbits that could be in the forest.

// Example 1:

// Input: answers = [1,1,2]
// Output: 5
// Explanation:
// The two rabbits that answered "1" could both be the same color, say red.
// The rabbit that answered "2" can't be red or the answers would be inconsistent.
// Say the rabbit that answered "2" was blue.
// Then there should be 2 other blue rabbits in the forest that didn't answer into the array.
// The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't.



// class Solution {
// public:
//     int numRabbits(vector<int>& ans) {
//         unordered_map<int,int> mp;
//         for(auto x: ans){
//             mp[x]++;
//         }
//         int total=0;
//         for(auto y: mp){
//             int x = y.first;
//             int count = y.second;
//             int groupSize = x+1;
//             int group = ceil((double)(count)/groupSize);
//             total += group* groupSize;
//         }
//         return total;
//     }
// };


// Meeting Rooms II

// Given two arrays start[] and end[] such that start[i] is the starting time of ith meeting and end[i] is the ending time of ith meeting. Return the minimum number of rooms required to attend all meetings.

// Note: A person can also attend a meeting if it's starting time is same as the previous meeting's ending time.

// Examples:

// Input: start[] = [1, 10, 7], end[] = [4, 15, 10]
// Output: 1
// Explanation: Since all the meetings are held at different times, it is possible to attend all the meetings in a single room.




// class Solution {
//   public:
//     int minMeetingRooms(vector<int> &start, vector<int> &end) {
//         // code here
//         map <int,int> events;
//         for(int i=0;i<start.size();i++){
//             events[start[i]]++;
//             events[end[i]]--;
//         }
//         int overlap =0;
//         int maxOverlap=0;
        
//         for(auto x: events){
//             overlap += x.second;
//             if(overlap>maxOverlap){
//                 maxOverlap=overlap;
//             }
//         }
//          return maxOverlap;
//     }         
// };


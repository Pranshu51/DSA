// 1011. Capacity To Ship Packages Within D Days
// A conveyor belt has packages that must be shipped from one port to another within days days.
// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.
// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.
// Example 1:

// Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
// Output: 15
// Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
// 1st day: 1, 2, 3, 4, 5
// 2nd day: 6, 7
// 3rd day: 8
// 4th day: 9
// 5th day: 10

// Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.


// class Solution {
// public:
//     bool check(int mid,vector<int>& weights, int days ){
//        int n = weights.size();
//        int m =mid; //for partial capacity and is is for full capacity
//        int count =1;
//        for(int i=0;i<n;i++){
//         if(m>=weights[i]){
//             m -=weights[i];
//         }else{
//             count++;
//             m =mid;
//             m -=weights[i];
//         }
//        }
//         if(count>days) return false;
//         else return true;
//     }
//     int shipWithinDays(vector<int>& weights, int days) {
//         int n = weights.size();
//         int max =INT_MIN;
//         int sum =0;
//         for(int i=0;i<n;i++){
//             if(max<weights[i]) max=weights[i];
//             sum+=weights[i];
//         }
//         int lo=max;
//         int hi=sum;
//         int minCapacity =sum;
//         while(lo<=hi){
//             int  mid = lo+ (hi-lo)/2;
//             if(check(mid , weights, days)){
//                  minCapacity =mid;
//                 hi=mid-1;
//             }
//             else lo =mid+1;
//         }
//         return minCapacity;
//     }
// };










// 875. Koko Eating Bananas

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
// Return the minimum integer k such that she can eat all the bananas within h hours.

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30


// class Solution {
// public:
//     bool check(int speed ,vector<int>& piles, int h){
//         int n = piles.size();
//         int count =0;
//         for(int i=0;i<n;i++){
//             if(count>h) return false;
//             if(speed>=piles[i]) count++;
//             else if(piles[i]%speed==0) count+= piles[i]/speed;
//             else count+= piles[i]/speed +1;
//         }
//         if(count>h) return false;
//         else return true;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n =piles.size();
//         int mx=-1;
//         for(int i =0;i<n;i++){
//             mx =max(mx,piles[i]);
//         }

//         int lo=1;
//         int hi=mx;
//         int ans=-1; //minEatingSpeed and mid=eating speed(current)
//         while(lo<=hi){
//             int mid = lo+ (hi-lo)/2;
//             if(check(mid,piles,h)){
//                 ans =mid;
//                 hi=mid-1;
//             }else{
//                 lo=mid+1;
//             }
//         }
//         return ans;
//     }
// };






// 2187. Minimum Time to Complete Trips
// You are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.
// Each bus can make multiple trips successively; that is, the next trip can start immediately after completing the current trip. Also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus.
// You are also given an integer totalTrips, which denotes the number of trips all buses should make in total. Return the minimum time required for all buses to complete at least totalTrips trips.

// Example 1:

// Input: time = [1,2,3], totalTrips = 5
// Output: 3
// Explanation:
// - At time t = 1, the number of trips completed by each bus are [1,0,0]. 
//   The total number of trips completed is 1 + 0 + 0 = 1.
// - At time t = 2, the number of trips completed by each bus are [2,1,0]. 
//   The total number of trips completed is 2 + 1 + 0 = 3.
// - At time t = 3, the number of trips completed by each bus are [3,1,1]. 
//   The total number of trips completed is 3 + 1 + 1 = 5.
// So the minimum time needed for all buses to complete at least 5 trips is 3.




// class Solution {
// public:
//    bool check(long long mid,vector<int>& time, int totalTrips){
//     int n =time.size();
//     long long trips =0;
//     for(int i=0;i<n;i++){
//         trips+=mid/time[i];
//     }
//     if(trips<totalTrips) return false;
//     else return true;
//    }
//     long long minimumTime(vector<int>& time, int totalTrips) {
//         int n = time.size();
//         int mx=-1;
//         for(int i=0;i<n;i++){
//             mx = max(mx,time[i]);
//         }
//         long long lo=1;
//         long long hi=(long long)mx * (long long)totalTrips;
//         long long ans =-1;
//         while(lo<=hi){
//             long long mid = lo + (hi -lo)/2;
//             if(check(mid,time,totalTrips)){
//                 ans=mid;
//                 hi=mid-1;
//             }else{
//                 lo=mid+1;
//             }
//         }
//         return ans;
//     }
// };
// 295. Find Median from Data Stream

// The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.

// For example, for arr = [2,3,4], the median is 3.
// For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
// Implement the MedianFinder class:

// MedianFinder() initializes the MedianFinder object.
// void addNum(int num) adds the integer num from the data stream to the data structure.
// double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.
 

// Example 1:

// Input
// ["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
// [[], [1], [2], [], [3], []]
// Output
// [null, null, null, 1.5, null, 2.0]

// Explanation
// MedianFinder medianFinder = new MedianFinder();
// medianFinder.addNum(1);    // arr = [1]
// medianFinder.addNum(2);    // arr = [1, 2]
// medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)
// medianFinder.addNum(3);    // arr[1, 2, 3]
// medianFinder.findMedian(); // return 2.0



// class MedianFinder {
// public:
//     priority_queue<int> left;//max Heap
//     priority_queue<int , vector<int> ,greater<int>> right;//Min Heap
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         if(left.size()==0 || num<left.top()) left.push(num);//O(logn)
//         else right.push(num);

//         if(left.size()>right.size()+1){
//             right.push(left.top());//O(logn)
//             left.pop();
//         }
//         if(right.size()>left.size()+1){
//             left.push(right.top());//O(logn)
//             right.pop();
//         }

//     }
    
//     double findMedian() {//O(1)
//      if(left.size()==right.size()) return ((left.top()+right.top())/2.0);
//      else if(left.size()>right.size()) return left.top();
//      else return right.top();
//     }
// };total Time Complexity : O(logn) for addNum and O(1) for findMedian




// 632. Smallest Range Covering Elements from K Lists

// You have k lists of sorted integers in non-decreasing order. Find the smallest range that includes at least one number from each of the k lists.

// We define the range [a, b] is smaller than range [c, d] if b - a < d - c or a < c if b - a == d - c.

 

// Example 1:

// Input: nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]
// Output: [20,24]
// Explanation: 
// List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
// List 2: [0, 9, 12, 20], 20 is in range [20,24].
// List 3: [5, 18, 22, 30], 22 is in range [20,24].


// class Solution {
// public:
//     typedef pair<int,pair<int,int>> pip;//element and its row and col
//     vector<int> smallestRange(vector<vector<int>>& arr) {
//         priority_queue<pip,vector<pip>,greater<pip>> pq;
//         int mx = INT_MIN;
//         for(int i=0;i<arr.size();i++){
//             mx =max(mx,arr[i][0]);
//             pq.push({arr[i][0],{i,0}});//that element and its row and columns
//         }
//         int mn = pq.top().first;
//         int start = mn; int end = mx;
//         while(true){
//             int row = pq.top().second.first;
//             int col = pq.top().second.second;
//             pq.pop();
//             if(col==arr[row].size()-1) break;
//             pq.push({arr[row][col+1],{row,col+1}});
//             mx = max(mx,arr[row][col+1]);
//             mn = pq.top().first;
//             if(mx-mn<end-start){
//                 end = mx;
//                 start = mn;
//             }
//         }
//         vector<int> ans;
//         ans.push_back(start);
//         ans.push_back(end);
//         return ans;
///////////////////////////////
// or         return {start,end};

//     }
// };

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// bool isBalanced(string s){
//     stack<char> st;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='(') st.push(s[i]);
//         else{
//             if(st.size()==0) return false;
//             else st.pop();
//         }
//     }
//     if (st.size()==0) return true;
//     else return false;
// }


// int main(){
//     string s= "()()()(";
//     cout<<isBalanced(s);
// }




//REMOVE CONSECUTIVE DUPLICATES IN A STRING
// string removeDuplicate(string s){
//     stack<char> st;
//     st.push(s[0]);
//     for(int i=1;i<s.length();i++){
//         if(st.top()!=s[i]) st.push(s[i]);
//     }
//     s= "";
//     while(st.size()>0){
//         s+=st.top();
//         st.pop();
//     }
//     reverse(s.begin(),s.end());
//     return s;
// }

// int main(){
//     string s ="aaabbbccddeff";
//     cout << s<<" ";
//     cout<<endl;
//     s=removeDuplicate(s);
//     cout<<s<<" ";
// }



//NEXT GREATEST ELEMENT BRUTE FORCE
//t.c=O(n^2) s.c=O(1)

// int main(){
//     int arr[] = {3,2,5,6,7,5,6,9,4};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int nge[n];
//     for(int i=0;i<n;i++){
//         nge[i] =-1;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 nge[i] =arr[j];
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
// }



//NEXT GREATEST ELEMENT STACK
//t.c=O(n) s.c=O(n)

// int main(){
//     int arr[] = {3,2,5,6,7,5,6,9,4};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     stack<int> st;
//     int nge[n];
//    nge[n-1]=-1;
//    st.push(arr[n-1]);
//    //Pop,Ans,Push
//    for(int i=n-2;i>=0;i--){
//     //pop
//    while(st.size()>0 && st.top()<=arr[i]) st.pop();
//    //ans
//     if(st.size()==0) nge[i]=-1;
//     else nge[i]=st.top();
//     //push
//     st.push(arr[i]);
//    }
//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
// }

//PREVIOUS GREATER ELEMENT

// int main(){
//     int arr[] = {3,2,5,6,7,5,6,9,4};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     stack<int> st;
//     int pge[n];
//     pge[0]=-1;
//     st.push(arr[0]);
//     for(int i=1;i<n;i++){
//         while(st.size()>0 && st.top()<=arr[i]) st.pop();
//         if(st.size()==0) pge[i]=-1;
//         else pge[i]=st.top();
//         st.push(arr[i]);
//     }
//      for(int i=0;i<n;i++){
//         cout<<pge[i]<<" ";
//     }
// }



//STOCK SPAN PROBLEM

// The **Stock Span Problem** is a financial problem where we find the "span" of a stock’s price for each day.
// The **span** of the stock’s price on a given day is defined as the **maximum number of consecutive days** (starting from today and going backward) for which the price of the stock was less than or equal to its price on that day.

// ### Example Scenario

// Imagine you are tracking a stock's price over 7 days.

// **Input Array (Prices):**
// `[100, 80, 60, 70, 60, 75, 85]`

// **Output Array (Spans):**
// `[1, 1, 1, 2, 1, 4, 6]`

// ---

// ### Day-by-Day Visual Breakdown

// Let's look at why each day gets its specific span value:

// * **Day 0 (Price = 100):** There are no previous days.
// * *Span = 1* (just today).


// * **Day 1 (Price = 80):** The previous day's price was 100. Since 100 is greater than 80, the streak stops immediately.
// * *Span = 1* (just today).


// * **Day 2 (Price = 60):** The previous day's price was 80. Since 80 is greater than 60, the streak stops.
// * *Span = 1* (just today).


// * **Day 3 (Price = 70):** Look backward: Day 2's price was 60 (smaller, keep going). Day 1's price was 80 (larger, stop).
// * *Consecutive days $\le 70$:* [70, 60]
// * *Span = 2*.


// * **Day 4 (Price = 60):** The previous day's price was 70. 70 is greater than 60, so the streak stops.
// * *Span = 1* (just today).


// * **Day 5 (Price = 75):** Look backward: Day 4 was 60 (smaller), Day 3 was 70 (smaller), Day 2 was 60 (smaller), Day 1 was 80 (larger, stop).
// * *Consecutive days $\le 75$:* [75, 60, 70, 60]
// * *Span = 4*.


// * **Day 6 (Price = 85):** Look backward: 75 is smaller, 60 is smaller, 70 is smaller, 60 is smaller, 80 is smaller... all the way until we hit 100 (which is larger, stop).
// * *Consecutive days $\le 85$:* [85, 75, 60, 70, 60, 80]
// * *Span = 6*.




// int main(){
//     int arr[] = {3,2,5,6,7,5,6,9,4};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     stack<int> st;
//     int pgi[n];
//     pgi[0]=1;
//     st.push(0);
//     for(int i=1;i<n;i++){
//         while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
//         if(st.size()==0) pgi[i]=-1;
//         else pgi[i]=st.top();
//         pgi[i]=i-pgi[i];
//         st.push(i);
//     }
//      for(int i=0;i<n;i++){
//         cout<<pgi[i]<<" ";
//     }
// }





// 84. Largest Rectangle in Histogram

// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

// Example 1:
// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.


// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n =heights.size();
//         stack<int> st;
//         vector<int> psi(n);
//         psi[0]=-1;
//         st.push(0);
//         for(int i=1;i<n;i++){
//             while(st.size()>0 && heights[st.top()]>=heights[i] ) st.pop();
//             if(st.size()==0) psi[i] = -1;
//             else psi[i] = st.top();
//              st.push(i);
//         }

//         stack<int> gt;
//         vector<int> nsi(n);
//         nsi[n-1]=n;
//         gt.push(n-1);
//         for(int i=n-2;i>=0;i--){
//             while(gt.size()>0 && heights[gt.top()]>=heights[i] ) gt.pop();
//             if(gt.size()==0) nsi[i] = n;
//             else nsi[i] = gt.top();
//              gt.push(i);
//         }
//         int maxArea=0;
//         for(int i=0;i<heights.size();i++){
//             int height= heights[i];
//             int breadth= nsi[i]-psi[i]-1;
//             int area = height*breadth;
//             maxArea=max(maxArea,area);
//         }
//         return maxArea;
//     }
// };
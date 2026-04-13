  //Logical Operator=> They work on boolean values and return a boolean result.
                                    // 1.AND -> &&
                                    // 2.OR -> ||
                                    // 3.NOT -> !

// Bitwise OPerator=> They work on bits and perform bit by bit operation.                  
// 1.AND -> &       //table of both are same but logical operator works on boolean values and bitwise operator works on bits.
// 2.OR -> |
// 3.XOR -> ^
// 4.NOT -> ~


// 2^0 = 1 => binary 1
// 2^1 = 2 => binary 10
// 2^2 = 4 => binary 100
// 2^3 = 8 => binary 1000
// 2^4 = 16 => binary 10000
// we are noticing that in binary representation of 2^n there is only one bit which is 1 and rest all are 0.
// so if we have to findout 2^x then we can left shift 1 by x times.
// 1<<0 = 1 => binary 1
// 1<<1 = 2 => binary 10
// 1<<2 = 4 => binary 100
// 1<<3 = 8 => binary 1000
// 1<<4 = 16 => binary 10000

#include <iostream>
using namespace std;


// int binary_to_decimal(string &str){
//     int n=str.size();
//     int ans=0;
//     for(int i=n-1;i>=0;i--){
//         char ch=str[i];
//         int bit=ch-'0'; //converting char to int
//         ans=ans+(bit*(1<<(n-i-1))); //1<<(n-1-i) is same as 2^(n-1-i)
//     }
//     return ans;
// }



// int main(){
//     string str="1001";
//     cout<<binary_to_decimal(str)<<endl;
// }


//if you want to findout decimal to binary you have to keep divinding the number by 2 so remaider willgive you lalst digit and the quotient will give you the next digit and you have to keep doing this until the quotient becomes 0.
//then you have to read it in reverse order to get the binary representation of the number.
//for this we will use right shift operator when we right shift something we are dividing it by 2 and when we left shift something we are multiplying it by 2.
//for every even no. lsb wil be 0 and for every odd no. lsb will be 1.
//so we have to  keep dividing means take rightshift then we have to check the lsb if it is 1 then we will add 1 to our answer and then we will right shift the number until it becomes 0.



// string decimal_to_binary(int nums){
//    string ans="";
//    while(nums>0){
//     if(nums%2==0){
//         ans="0"+ans;
//     }
//     else{
//         ans="1"+ans;
//     }
//     // nums=nums/2;//or below
//     nums=nums>>1;
//    } 
//    return ans;
// }

// int main(){
//     cout<<decimal_to_binary(2)<<endl;
// }



//que=>Find the no. of set bits for any integer n.
//set bit is a bit which is 1 in binary representation of a number.
//and 0 is said to be unset bit/offbit.
//in simplelanguage kisi bhi decimal no. kibinary represntation me kitne 1 h.
//in c++ we have a built in function to findout the no. of set bits in a number 
//which is
// __builtin_popcount(n)//
//where n is the number for which we want to findout the no. of set bits.


// int count_set_bits(int n){
//     return __builtin_popcount(n);
// }

// int main(){
//     cout<<count_set_bits(64)<<endl;
// }

 

//Brian Kernighan's Algorithm=> It is an efficient algorithm to count the number of set bits in a number.
// The idea is to repeatedly flip the least significant set bit of the number to 0 and count how many times we can do this until the number becomes 0.
// The expression n & (n-1) flips the least significant set bit of n to 0.
//har iteration me ek set bit 0 ban jaega to jitne no. of iteration me poora number 0 banega wahi uski setbit hogi.
//ye hum achieve krenge x & (x-1) se. har baar x me se ek set bit 0 ban jaega to jitne baar x me se set bit 0 banega wahi uski set bit hogi.
//har x and x-1 me ek region same hoga aur dusra region different hoga.humesha flipped region me ek hi setbit hoga. to uska  & le lenge  to wo eliminate ho jaega.

// int count_set_bits(int n){
//     int count =0;
//     while(n>0){
//         n = n & (n-1);
//         count++;
//     }
//     return count;
// }

// int main(){
//     cout<<count_set_bits(10)<<endl;//10 in binary is 1010 so it has 2 set bits.
// }




//Que=> GIven an integer n, find the maximum power of two that is smaller than n.
//agr binary kuch bhi h e.g =>10101011
//agr hum is binary ko => 10000000 bana denge to yahi iska maximum power of 2 hoga jo isse chota hoga.
//to iske liye humko is binary me se ek bit ko 1 banani hogi aur baaki sab bit ko 0 banani hogi.


// int main(){
//     int x=90;
//     int temp;
//     while(x!=0){
//         temp =x;
//         x= x & (x-1);
//     }
//     cout<<temp<<endl;//64
// }

// agar koi bole ki x se just badi power niklo to same uper wala procedure karke 2 se multiply kar denge

//m-2

//  int max_power_of_2(int n){
//         n = n| (n>>1);
//         n = n| (n>>2);
//         n = n| (n>>4);
//         n = n| (n>>8);
//         n = n| (n>>16);
//         return (n+1)>>1;//n+1/2;

//     }
// int main(){
//    int n=90;
//    cout<<max_power_of_2(n)<<endl;//64
// }




//Que=> given an integer n, flip all its bits i.e. if the given bit is 1 , change it to  0 and vice versa.
//not logic

// Fussi method  works for decimal

// int main() {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;

//     // ~ is the bitwise NOT operator
//     int flippedN = ~n;

//     cout << "Original: " << n << endl;
//     cout << "After flipping bits: " << flippedN << endl;

//     return 0;
// }




//main methoda
// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     if (n == 0) {
//         cout << "Flipped: 1" << endl;
//         return 0;
//     }

//     // Step 1 & 2: Create a mask of all 1s
//     // We use the same bit-propagation trick from your image!
//     int mask = n;
//     mask |= (mask >> 1);
//     mask |= (mask >> 2);
//     mask |= (mask >> 4);
//     mask |= (mask >> 8);
//     mask |= (mask >> 16); // Covers 32-bit integers

//     // Step 3: XOR the original number with the mask
//     int result = n ^ mask;

//     cout << "Mask (All 1s): " << mask << endl;
//     cout << "Flipped value: " << result << endl;

//     return 0;
// }



//Que=>calculate the minimum number of bit flip to convert from one number to another.


// int main(){
//     int x=23;
//     int y=31;
//     cout << __builtin_popcount(x^y) << endl; //x^y will give us the bits which are different in both x and y and then we will count the number of set bits in that to get the minimum number of bit flip required to convert from x to y.
// }



//GIven an integer array where every element occurs twice except one occurs once.find that unique element.
//m-1 using xor operator same no. ka xor 0 hota h aur same no. ka xor 0 hota h to jab hum sare elements ka xor karenge to jo unique element hoga wahi bachega kyuki uska xor 0 hoga aur baaki sab ka xor 0 hoga to result me wahi unique element bachega.
//aur 0 ko kisi bhi no. ke saat xor wo no. hi hota h isiliye unique element ko 0 lenge taaki akhri me jo bhi backega wo return kar pae.
// int main(){
//     int arr[] ={1,2,1,2,3,4,5,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int unique=0;
//     for(int i=0;i<n;i++){
//         unique=unique^arr[i];
//     }
//     cout<<unique<<endl;

// }



#include <vector>
#include <algorithm> // Required for sort()

// int findUniqueWithSorting(vector<int>& nums) {
//     // Step 1: Sort the array
//     sort(nums.begin(), nums.end());

//     // Step 2: Iterate through the array in steps of 2
//     for (int i = 0; i < nums.size() - 1; i += 2) {
//         // Step 3: Compare current with the next element
//         if (nums[i] != nums[i + 1]) {
//             return nums[i];
//         }
//     }

//     // Step 4: If no mismatch found, it must be the last element
//     return nums.back();
// }

// int main() {
//     vector<int> arr = {4, 1, 2, 1, 2};
    
//     int result = findUniqueWithSorting(arr);
//     cout << "The unique element is: " << result << endl;
    
//     return 0;
// }




//Que=> Given an integer array nums, in which exactly two element exactly appers only once and all the other elements exactly appears twice. Find the two elements that exactly appear only once.



// 260. Single Number III
// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.
// You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.
 
// Example 1:
// Input: nums = [1,2,1,3,2,5]
// Output: [3,5]
// Explanation:  [5, 3] is also a valid answer.



// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans;
//         int xored=0;
//         for(int i=0;i<n;i++){
//             xored^=nums[i];
//         }
//         int temp =xored;
//         int exbit=0;
//         while(true){
//             if((temp & 1)==1) break;
//             else{
//                temp= temp>>1;
//                 exbit++;
//             }
//         }
//         int setBasket=0;
//         int unsetBasket=0;
//         for(int i=0;i<n;i++){
//             if(((nums[i]>>exbit) & 1) == 1) setBasket^=nums[i];
//             else unsetBasket ^=nums[i];
//         }
//         ans.push_back(setBasket);
//         ans.push_back(unsetBasket);
//         return ans;
//     }
// };





//Que=>Given an integer array.Find the length of longest subarray which has maximum possible bitwise AND value.




#include <climits>

int main() {
    int arr[] = {12, 3, 1, 6, 1, 6, 18, 18, 6, 6, 6, 4, 3, 8, 13, 13, 13, 8};
    int n = 18; // Updated to 18 based on the actual count of elements in the array
    int ans = 0;
    int max_el = INT_MIN;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_el) {
            max_el = arr[i];
            count = 1;
        } else if (arr[i] == max_el) {   
            count++;
        }
        ans = max(ans, count);
    }

    cout << ans << "\n";

    return 0;
}
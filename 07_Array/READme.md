# WHAT IS AN ARRAY?
Aisa data structure which contains ismilar elemetns in continuous manner(only string ,only char,only int not all simltaenously)
1. collection of elements
2. similar elements
3. continuous memory block
4. list of similar items
5. data structure
6. Linear ds


# Why array needed 
if there are 30k elements then you have to make 30k variables manualluy it is not possible
# MEMORY WASTAGE HAPPENS

| Data Structure | Memory Wastage | Reason                       |
| -------------- | -------------- | ---------------------------- |
| Array          | ✅ Yes          | Fixed size → unused elements =>INTERNAL FRAGMENTATION|
| Linked List    | ❌ (less)       | Memory allocated as needed   |

when we write int a=10 => 4 byte block get created in memory and has value of 10.
+-----------+
|       10  |
+-----------+
a
symbol table:-> it is madeby compiilerl we dont do anything
a->104(address)


# Creating an array DECLARATION
fro declaration
int  arr      [10]; =>10 integer ka continuous space arr ko allocate kia jata h => 40 byte
^     ^         ^
data variable   size of 
type  name      array


e.g:int marks[6]; => array of size 6 and type is int... => SPACE OCCUPIED=> 6*4=24 bytes

marks =>it is pointing to first address which is 1000
  |
  v
+---------+---------+---------+---------+---------+---------+
| marks[0]| marks[1]| marks[2]| marks[3]| marks[4]| marks[5]|
+---------+---------+---------+---------+---------+---------+
|   78    |   85    |   90    |   66    |   72    |   88    |   ← values (example)
+---------+---------+---------+---------+---------+---------+
| 1000    | 1004    | 1008    | 1012    | 1016    | 1020    |   ← addresses (int = 4 bytes)


# Initialization
int arr[]= {2,4,5,5,6};



# Index && Access in array
(Base Address)arr+index*datatypeSize
arr[0]=>arr + 0*4=arr=>address of 0 index i.e address of array we can say
arr[1]=>value at(arr+1*4)


# Memset function
memset (memory set) is a C standard library function that fills a block of memory with a specific byte value. It's available in C++ through the <cstring> header.

void* memset(void* dest, int ch, size_t count);

dest: Pointer to the memory block to fill

ch: Byte value to set (converted to unsigned char)

count: Number of bytes to fill

Returns: dest (the original pointer) 
#include <cstring>
#include <iostream>

int main() {
    int arr[10];
    memset(arr, 0, sizeof(arr));  // Set all bytes to 0
    
    // All elements are now 0
    for(int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";  // Output: 0 0 0 0 0 0 0 0 0 0
    }
    return 0;
}


# Array always do pass by refernecce

# in functins and arrays you have to pass size always
because if we have intialized int arr[10]={1,2,3},
then other 7 left will be zero we dont want this so we give explicitely size of array ,
also by sizeof(arr)=> we can find total no.of blocks in array (4*10=40) but cant find how many elements are ther in the array.


# Linear Search
┌─────────────────────────────────────────────────────────────┐
│                    LINEAR SEARCH PROCESS                     │
├─────────────────────────────────────────────────────────────┤
│  Array: [17, 23, 5, 41, 8, 32, 12]                          │
│  Target: 41                                                 │
├─────────────────────────────────────────────────────────────┤
│                                                            │
│  Step 1: Compare 17 with 41 → ❌ No match                   │
│          [17, 23, 5, 41, 8, 32, 12]                        │
│           ^                                                │
│                                                            │
│  Step 2: Compare 23 with 41 → ❌ No match                   │
│          [17, 23, 5, 41, 8, 32, 12]                        │
│                ^                                           │
│                                                            │
│  Step 3: Compare 5 with 41 → ❌ No match                    │
│          [17, 23, 5, 41, 8, 32, 12]                        │
│                     ^                                      │
│                                                            │
│  Step 4: Compare 41 with 41 → ✅ MATCH FOUND!              │
│          [17, 23, 5, 41, 8, 32, 12]                        │
│                         ^                                  │
│                                                            │
│  Result: Element found at index 3 (position 4)             │
└─────────────────────────────────────────────────────────────┘
┌─────────────────────────────────────────────────────────────┐
│            LINEAR SEARCH VISUALIZATION                      │
├─────────────────────────────────────────────────────────────┤
│  Initial State:                                             │
│  ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐               │
│  │ 17  │ 23  │  5  │ 41  │  8  │ 32  │ 12  │               │
│  └─────┴─────┴─────┴─────┴─────┴─────┴─────┘               │
│  Target: 41                                                 │
│                                                            │
│  Search Progress:                                           │
│                                                            │
│  1.  ┌─────┐                                                │
│      ▼                                                     │
│     ┌───┬───┬───┬───┬───┬───┬───┐                          │
│     │17 │23 │ 5 │41 │ 8 │32 │12 │                          │
│     └───┴───┴───┴───┴───┴───┴───┘                          │
│     17 ≠ 41 → Move right                                    │
│                                                            │
│  2.      ┌─────┐                                            │
│          ▼                                                 │
│     ┌───┬───┬───┬───┬───┬───┬───┐                          │
│     │17 │23 │ 5 │41 │ 8 │32 │12 │                          │
│     └───┴───┴───┴───┴───┴───┴───┘                          │
│     23 ≠ 41 → Move right                                    │
│                                                            │
│  3.          ┌─────┐                                        │
│              ▼                                             │
│     ┌───┬───┬───┬───┬───┬───┬───┐                          │
│     │17 │23 │ 5 │41 │ 8 │32 │12 │                          │
│     └───┴───┴───┴───┴───┴───┴───┘                          │
│     5 ≠ 41 → Move right                                     │
│                                                            │
│  4.              ┌─────┐                                    │
│                  ▼                                         │
│     ┌───┬───┬───┬───┬───┬───┬───┐                          │
│     │17 │23 │ 5 │41 │ 8 │32 │12 │                          │
│     └───┴───┴───┴───┴───┴───┴───┘                          │
│     41 = 41 → ✅ ELEMENT FOUND!                            │
│                                                            │
│  Conclusion: Found at position 4 (index 3)                 │
└─────────────────────────────────────────────────────────────┘
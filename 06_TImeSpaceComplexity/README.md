# What is Time Complexity??
1. Amount of time taken by an algorith to run as a funciton of length of input
f directly prooportional to n (n=>no. of operation and f is time  TC=>O(n))

# Why t o stuyd T&S complelxity?

1. Good computer engineer always thinks about the complexity of the code written by him.
2. Resources are litmited
3. Measure algorithm to make efficient programs
4. Asked by interviewer after every solution you give.

# Space Complexity?
1. Amount of space taken by an algorith to run as a funciton of length of input

# Unit of Represent Complexity
1. Big O:Upper Bound => Algo. max max how much time it will take(worst case) =>Best representation of algo
2. Theta : Average Case
3. Omega : Lower Bound=> min time taken by the algo.


## Big o: Complexities
1. COnstant time: O(1) e.g=>inta =5
2. Linear time: O(n) e.g=>loop
3. Logarithmic time:O(logN)
4. Quadratic Time:O(N^2)=>e.g=> lopp inside loop
4. Cubic Time:O(N^3)e.g=>3 loops nesting


Got it 👍
You want a **text / ASCII-style graph** that you can **paste directly into VS Code as notes/comments**, **not code and not an image**.

Below is a **clean, exam-friendly, VS Code–friendly time complexity graph** with **small n (0, 1, 2 …)** and **short explanations**.

---

## 📈 Time Complexity Graph (Text / Notes Format)

```
Time
 ↑
 |                                      O(n³)
 |                                     /
 |                                   /
 |                                O(n²)
 |                              /
 |                           /
 |                        O(n log n)
 |                     /
 |                  /
 |              O(n)
 |           /
 |       O(log n)
 |     /
 |  O(1)  ------------------------------
 |
 +--------------------------------------------→ n (Input Size)
   0    1     2     3     4     5     6
```

---

## 🔍 Explanation (Very Short & Clear)

```
O(1)        → Constant time
              Time does not depend on input size
              Example: accessing array element

O(log n)    → Logarithmic time
              Input reduces by half each step
              Example: Binary Search

O(n)        → Linear time
              Time grows directly with input size
              Example: Single loop

O(n log n)  → Linearithmic time
              Combination of divide & process
              Example: Merge Sort, Quick Sort (avg)

O(n²)       → Quadratic time
              Nested loops
              Example: Bubble Sort

O(n³)       → Cubic time
              Three nested loops
              Example: Matrix multiplication (basic)
```

---

## 🧠 Small `n` Growth Comparison Table

```
n     O(1)   O(log n)   O(n)   O(n²)
-----------------------------------
0      1        0        0       0
1      1        0        1       1
2      1        1        2       4
3      1        2        3       9
4      1        2        4      16
5      1        3        5      25
```

---

## ✅ Best Way to Paste in VS Code

Paste this inside comments like:

```
/*
   TIME COMPLEXITY GRAPH
   (ASCII NOTES)
*/
```

or

```
// ===== Time Complexity Graph =====
```





#### O(1) < O(log n) < O(√n) < O(n) < O(n log n) < O(n²) < O(n³) < O(2ⁿ) < O(n!) < O(nⁿ)


# Examples

1. 
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // First loop runs n times → O(n)
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }

    // Second loop runs m times → O(m)
    for (int j = 0; j < m; j++) {
        cout << j << " ";
    }

    return 0;
}


tc: o(n) +o(m)=>O(n+m)


2. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop runs n times
    for (int i = 0; i < n; i++) {

        // Inner loop runs n times for each i
        for (int j = 0; j < n; j++) {
            cout << i << "," << j << " ";
        }
        cout << endl;
    }

    return 0;
}

Tc: O(n)*O(n)=>O(n^2) takes always the bigger value




3. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Nested loops → O(n²)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
    }

    // Separate loop → O(n)
    for (int k = 0; k < n; k++) {
        cout << k;
    }

    return 0;
}

Tc: O(n^2) +O(n)=>O(n^2)



4.#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop runs n times
    for (int i = 0; i < n; i++) {

        // Inner loop starts from n and decrements
        for (int j = n; j > 0; j--) {
            cout << "*";
        }
    }

    return 0;
}


Total operations = n × n = n²
Time Complexity = O(n²)

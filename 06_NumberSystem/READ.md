# what is number system?
1.Method to represent numeric values or quantitie susing different digits

# Decicmal System
1. the decimal numberssystem ahs base 10
2. it uses digiits from 0 to9
3. BASE:  It is th eno. of sysmbols (digits ) a no. system uses.(0-9)

# Binary Number System
1. Number system suing base 2.
2. It uses only two digits i.e ,0 and 1.

## Note => cpu,computer,memory all uses BINARY
+---------+----------+
| Decimal | Binary   |
+---------+----------+
|   0     | 0        |
|   1     | 1        |
|   2     | 10       |
|   3     | 11       |
|   4     | 100      |
|   5     | 101      |
|   6     | 110      |
|   7     | 111      |
|   8     | 1000     |
|   9     | 1001     |
|  10     | 1010     |
|  11     | 1011     |
|  12     | 1100     |
|  13     | 1101     |
|  14     | 1110     |
|  15     | 1111     |
|  16     | 10000    |
|  17     | 10001    |
|  18     | 10010    |
|  19     | 10011    |
|  20     | 10100    |
+---------+----------+

# Decimat to Binary converison
  # division method
  1. Divide number by 2 
  2. store reminder(That will be a bt in binary numbers)
  3. repeat above steps with the quotient until quotient is lessthan 2
  4. Reverse the bits so obatained

Here is a **clear step-by-step example of Decimal → Binary using the Division Method**.

---

## 🔢 Example: Convert **Decimal 13** into **Binary**

### **Step 1: Divide by 2 repeatedly**

Write the **quotient** and **remainder** at each step.

```
13 ÷ 2 = 6   remainder = 1
6  ÷ 2 = 3   remainder = 0
3  ÷ 2 = 1   remainder = 1
1  ÷ 2 = 0   remainder = 1
```

---

### **Step 2: Write remainders from bottom to top**

(Read the remainders **upwards** ⬆️)

```
1 1 0 1
```

---

### ✅ **Final Answer**

```
(13)₁₀ = (1101)₂
```

---

## 📌 Quick Reminder

* Always divide by **2**
* Write **remainders**
* **Read from bottom to top**
* Stop when quotient becomes **0**

---

### ✨ One more quick example (optional)

**Convert 10 to Binary**

```
10 ÷ 2 = 5   r = 0
5  ÷ 2 = 2   r = 1
2  ÷ 2 = 1   r = 0
1  ÷ 2 = 0   r = 1
```

➡️ Binary = (1010)2




# Decimal to Binary Conversion
  # Bitwise Method
1. Obtain bit with bitwise AND operation ,i.e(N & 1)
2. Right shift N by 1(N=N>>1)
3. Repeat above steps till N>0
4. Reverse the bits so obatained.



# Binary to Decimal Conversion
1. Nuktiple each digit with its place value
2. Add up all places values
3. Sum is the Deicmal number

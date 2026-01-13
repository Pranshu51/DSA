#include <iostream>
using namespace std;

int main(){
    int val;
    cout<<"Enter the number:";
    cin>>val;
    switch(val){
        case 1:cout<<"Pranshu";
        break;
        case 2:cout<<"Rahul";
        break;
        case 3:cout<<"Sourav";
        break;
        case 4:cout<<"Ankit";
        break;
        default:cout<<"Invalid Input";
    }
}
// Wothout break all the statement will 
/*
NOTE:

Below is a **clear, exam-oriented answer for `switch–case`** (mainly **C / C++ / Java**).
Each point has **✔️ Allowed / ❌ Not Allowed**, **example output**, and **one-line explanation**.

---

## 1️⃣ Can we use a **String** instead of `1`?

### C / C++

❌ **Not Allowed**

```c
switch(x) {
  case "hello":   // ❌ error
}
```

**Output:** Compile-time error
**Explanation:** C/C++ `case` labels must be **constant integral expressions**, not strings.

---

### Java

✔️ **Allowed (Java 7+)**

```java
String s = "hi";
switch(s) {
  case "hi": System.out.println("Hello");
}
```

**Output:** `Hello`
**Explanation:** Java allows `String` in `switch` (internally uses hash comparison).

---

## 2️⃣ Can we use a **character** like `'a'`?

✔️ **Allowed (C / C++ / Java)**

```c
char ch = 'a';
switch(ch) {
  case 'a': printf("Character matched");
}
```

**Output:** `Character matched`
**Explanation:** `char` is treated as an **integer ASCII value**.

---

## 3️⃣ Can we use an **expression** in `case`?

✔️ **Allowed (if constant expression)**

```c
switch(x) {
  case 2+3:
    printf("Matched");
}
```

**Output:** Depends on `x == 5`
**Explanation:** Expression must be **compile-time constant**.

---

❌ **Not Allowed (runtime expression)**

```c
int y = 3;
case y+2:   // ❌
```

**Explanation:** `case` cannot use **variables**.

---

## 4️⃣ Can we have **two cases with same value**?

❌ **Not Allowed**

```c
case 1:
case 1:   // ❌ error
```

**Output:** Compile-time error
**Explanation:** Duplicate `case` labels are not permitted.

---

## 5️⃣ Are **negative numbers** allowed?

✔️ **Allowed**

```c
switch(x) {
  case -1:
    printf("Negative");
}
```

**Output:** `Negative` (if x = -1)
**Explanation:** Negative integers are valid constant expressions.

---

## 6️⃣ Are **float values** allowed?

❌ **Not Allowed**

```c
case 1.5:   // ❌
```

**Output:** Compile-time error
**Explanation:** `switch` does **not support float/double** values.

---

## 7️⃣ Are **sentences / strings** allowed?

* **C / C++** → ❌ Not Allowed
* **Java** → ✔️ Allowed

```java
case "hello world":
```

**Explanation:** Depends on language support.

---

## 8️⃣ Can we use `continue` instead of `break`?

❌ **Not Allowed (normally)**

```c
case 1:
  continue;   // ❌ error
```

**Output:** Compile-time error
**Explanation:** `continue` works only inside **loops**, not directly in `switch`.

✔️ **Allowed only if switch is inside a loop**

```c
while(1) {
  switch(x) {
    case 1: continue;
  }
}
```

---

## 9️⃣ Can we use **operators** in place of `1`?

✔️ **Allowed (if result is constant)**

```c
case 10 >> 1:
```

**Output:** Matches when case value = `5`
**Explanation:** Operators allowed only in **constant expressions**.

❌ **Not Allowed (with variables)**

```c
case x+1:   // ❌
```

---

## 🔟 Summary Table (Very Important for Exams)

| Case Value Type     | Allowed | Reason            |
| ------------------- | ------- | ----------------- |
| Integer (`1`)       | ✔️      | Integral constant |
| Character (`'a'`)   | ✔️      | ASCII integer     |
| String (Java)       | ✔️      | Java feature      |
| String (C/C++)      | ❌       | Not integral      |
| Expression (`2+3`)  | ✔️      | Compile-time      |
| Variable expression | ❌       | Runtime           |
| Duplicate case      | ❌       | Ambiguity         |
| Negative number     | ✔️      | Constant          |
| Float / Double      | ❌       | Not integral      |
| `continue`          | ❌       | Loop-only         |
| Operators           | ✔️      | If constant       |

---

*/




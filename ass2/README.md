## Problem Statement
Create a matrix of size 50×50 of numbers ranging from 0 to 9. Find the length of the largest sorted component reverse diagonally.

---
## Running the Code 

```
#Download project
git clone https://github.com/grenmon2202/DAA
```
Initialisation: 
```
cd DAA
#create assignment-02 folder
mkdir assignment-02

#go to assignment-02
cd assignment-02

#Create file
touch readme.md
touch main.cpp
.
.
```
---

Compile and Run the code
```
g++ main.cpp -o output
./output 
```
Sample Input and Output
```

```
---

**Test cases**

```
Test Case-1
Input:
3
4 8 9
4
2 5 7 10
Output:
2 4 5 7 8 9 10
#--------------------------#
Test Case-2
Input:
4
2 8 34 78
5
4 23 32 45 89
Output:
2 4 8 23 32 34 45 78 89
```

---

### Theory
The idea is to traverse arr1 and arr2 simultaneously, using two iterators and compare the element of current position of both arrays and insert the smaller one in the 3rd array.

---

### Analysis

**Time Complexity**

The worst case time complexity of this algorithm is O(n1+n2), while the best case complexity will be Ω(1) when n1=n2=1.

**Space Complexity**

The space complexity of this algorithm is O(n1+n2)

---

### References

https://www.geeksforgeeks.org/merge-two-sorted-arrays/

https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

https://medium.com/swlh/merge-two-sorted-arrays-without-extra-space-efficiently-o-1-gap-method-detailed-simplified-57a336146601

https://www.geeksforgeeks.org/merge-k-sorted-arrays-set-2-different-sized-arrays/

https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/

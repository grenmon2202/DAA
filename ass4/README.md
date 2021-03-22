## Problem Statement
Find the kth largest element in a merged array of 2 sorted arrays.

---
## Running the Code 

```
#Download project
git clone https://github.com/grenmon2202/DAA
```
Initialisation: 
```
cd DAA
#create assignment-03 folder
mkdir assignment-03

#go to assignment-02
cd assignment-03

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
4 4 3
2 4 7 8
3 4 6 7
Output: 4
#--------------------------#
```

---

### Theory
Compare the middle elements of arrays arr1 and arr2, let us call these indices mid1 and mid2 respectively.
Let us assume arr1[mid1]  k, then clearly the elements after mid2 cannot be the   required element. 
Set the last element of arr2 to be arr2[mid2]. 
In this way, define a new subproblem with half the size of one of the arrays.


---

### Analysis

**Time Complexity**

The worst case time complexity of this algorithm is O(logm + logn), while the best case complexity will be Ω(1)

**Space Complexity**

The space complexity of this algorithm is O(logk)

---

### References

[1]vaibhav29498, ’K-th Greatest Element in a two sorted arrays’, GeeksforGeeks, 2018.    [Online] [Accessed: 1-Feb-2021] 
[2]’Divide and Conquer’, tutorialspoint. [Online][Accessed: 1-Feb-2021] 
[3]GeeksforGeeks, ’Divide and Conquer — Set 1 (Introduction)’, GeeksforGeeks, 2018. [Online][Accessed: 1-Feb-2021]
[4]https://lh3.googleusercontent.com/proxy/mKO_ixx5uUiB93Juy0xjQx7sPvRWmYMZB4EwBpoVn97ZTaED_BMriwLtjjmttoL9_ttqoRbfFRlHeTsMUJEHkWYfqEOjqqK2iB2PR-HdTiNVFGZ0QmX104waXu-HrFEfksEks8OjUjAbrwLy5GADZTU

## Problem Statement
Find the index of the kth largest element in given max heap.

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
7
20 15 18 8 10 5 17
3
Output: 17
#--------------------------#
Test Case-2
Input:
7
100 50 80 10 25 20 75
4
Output: 50
```

---

### Theory
To find the index of the kth greatest element forthe given Binary Max heap Array :
1.  Create the max heap (priorityqueue in stl)pq.
2.  Push the root of given max heap array (i.efirst element of the Heap array).
3.  Repeat the steps for k-1 steps.
	a.Pop  from  the  max  heap  pq  (greaterelement in the max heap pq)
	b.Insert the left and right of the popped element if the children exist.
4.  The greatest element in the pq is the kthgreatest element in the given heap.

To get the left child and right child of the nodewe need index, so the pair of value and its indexis pushed into the priorityqueue (max heap).

---

### Analysis

**Time Complexity**

The worst case time complexity of this algorithm is O(klog(k)), while the best case complexity will be Ω(1) when k=1.

**Space Complexity**

The space complexity of this algorithm is O(k)

---

### References

[1] https://www.geeksforgeeks.org/k-th-greatest-element-in-a-max-heap/

[2] https://www.tutorialspoint.com/data_structures_algorithms/heap_data_structure.htm

[3] https://www.geeksforgeeks.org/priority-queue-set-1-introduction/

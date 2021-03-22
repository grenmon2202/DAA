#include <bits/stdc++.h>
using namespace std;

int findKthElement (int[], int[], int, int, int, int, int);
int main(){
	int k, n, m;
	cin>>m>>n>>k;
	int arr1[m], arr2[n];
	
	for (int i = 0; i<m; i++)
		cin>>arr1[i];
	for (int i = 0; i<n; i++)
		cin>>arr2[i];

	cout<< findKthElement(arr1, arr2, m, n, k, 0, 0);
}

int findKthElement (int arr1[], int arr2[], int m, int n, int k, int in1, int in2){
	
	int current = k/2;

	if (in1 == m){
		return arr2[in2+k-1];
	}	

	if (in2 == n){
		return arr1[in1+k-1];
	}

	if (k==0 || k>((m-in1)+(n-in2))){
		return -1;
	}

	if (k==1){
		int x = arr1[in1]<arr2[in2] ? arr1[in1]:arr2[in2];
		return x;
	}

	if (current -1 >= m-in1){
		if (arr1[m-1] < arr2[in2+current-1])
			return arr2[in2+(k-(m-in1)-1)];
		else 
			return findKthElement(arr1, arr2, m, n, k-current, in1, in2+current);
	}

	if (current-1 >= n-in2){
		if (arr2[n-1] < arr1[in1+current-1])
			return arr1[in1+(k-(n-in2)-1)];
		else 
			return findKthElement(arr1, arr2, m, n, k-current, in1+current, in2);
	}

	else {
		if (arr1[current+in1-1] < arr2[in2+current-1])
			return findKthElement(arr1, arr2, m, n, k-current, in1+current, in2);
		else 
			return findKthElement(arr1, arr2, m, n, k-current, in1, in2+current);
	
	}
}
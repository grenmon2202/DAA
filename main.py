#this the funtion where arrray 1 and array 2 are merged and then stored in a 3rd array
def merge(arr1, arr2, n1, n2):
    i = 0
    j = 0
    k = 0
    arr3=[None]*(n1+n2)
    
    while i<n1 and j<n2:
        if arr1[i]<arr2[j]:
            arr3[k]=arr1[i]
            k+=1 
            i+=1 
        else :
            arr3[k] = arr2[j] 
            k+=1 
            j+=1 
    
    #remaining elements need to be stored
    
    while i < n1: 
        arr3[k] = arr1[i]; 
        k+=1 
        i+=1 
        
    while j < n2: 
        arr3[k] = arr2[j]; 
        k+=1 
        j+=1 
    
    print("Array 1: ")
    for i in range(n1): 
        print(str(arr1[i]), end = " ")
    print("\nArray 2: ")
    for i in range(n2): 
        print(str(arr2[i]), end = " ")
    print("\nMerged Array: ")
    for i in range(n2+n1): 
        print(str(arr3[i]), end = " ")
        

#driver code 
arr1 = []
arr2 = []

n1 = int(input("Enter the size of the first array: "))

print("Enter the elements of the first array:")
for i in range(0,n1):
    tmp=int(input())
    arr1.append(tmp)
    
n2 = int(input("Enter the size of the second array: "))

print("Enter the elements of the second array:")
for i in range(0,n2):
    tmp=int(input())
    arr2.append(tmp)
    
merge(arr1, arr2, n1, n2);
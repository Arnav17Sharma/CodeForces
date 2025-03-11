def insertion_sort(arr1, arr2):
    for ele in arr2:
        arr1.insert(0, ele)
        for i in range(1, len(arr1)):
            key = arr1[i]
            j = i - 1
            while j >= 0 and arr1[j] > key:
                arr1[j + 1] = arr1[j]
                j -= 1
            arr1[j + 1] = key
    return arr1

n = int(input("Enter the length of array: "))
print("First array: ")
list1 = [float(input()) for i in range(n)]
print("Second array: ")
list2 = [float(input()) for i in range(n)]
print(insertion_sort(list1, list2))










































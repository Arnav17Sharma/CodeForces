def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if(arr[j] < pivot):
            i+=1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i+1

def quick_sort(arr, low, high):
    if(low < high):
        part = partition(arr, low, high)
        quick_sort(arr, low, part-1)
        quick_sort(arr, part+1, high)
    return arr

n = int(input("Enter the number of elements: "))
arr = [float(input()) for i in range(n)]
result = quick_sort(arr, 0, len(arr) - 1)

print(result)























































'''
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        # Move elements of arr[0..i-1] that are greater than key to one position ahead
        # of their current position
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr


def test_insertion_sort():
    test_cases = [
        [64, 34, 25, 12, 22, 11, 90],
        [1, 2, 3, 4, 5],
        [5, 4, 3, 2, 1],
        [10, -2, 3, 7, 0, 5],
        [],                           # Empty array
        [42]                    \\\
    ]
    for idx, test in enumerate(test_cases):
        print(f"Test Case {idx + 1}:")
        print(f"Input: {test}")
        sorted_array = insertion_sort(test.copy())
        print(f"Sorted: {sorted_array}")
        print("-" * 40)
if __name__ == "__main__":
    test_insertion_sort()

'''



'''
def merge_sort(arr):
    """
    Perform Merge Sort on the given array.

    Parameters:
        arr (list): List of integers to be sorted.

    Returns:
        list: Sorted list.
    """
    if len(arr) > 1:
        # Divide the array into two halves
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]]
        merge_sort(left_half)
        merge_sort(right_half)

        # Merge the sorted halves
        i = j = k = 0
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1
        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1
    return arr


def test_merge_sort():
    test_cases = [
        [64, 34, 25, 12, 22, 11, 90],  # Random unsorted array
        [1, 2, 3, 4, 5],              # Already sorted array
        [5, 4, 3, 2, 1],              # Reverse sorted array
        [10, -2, 3, 7, 0, 5],         # Array with negative numbers
        [],                           # Empty array
        [42]                          # Single-element array
    ]

    for idx, test in enumerate(test_cases):
        print(f"Test Case {idx + 1}:")
        print(f"Input: {test}")
        sorted_array = merge_sort(test.copy())  # Sort the array
        print(f"Sorted: {sorted_array}")
        print("-" * 40)


if __name__ == "__main__":
    test_merge_sort()
'''


'''
def max_crossing_subarray(arr, low, mid, high):
    left_sum = float('-inf')
    right_sum = float('-inf')
    total = 0

    # Find the maximum sum of the left half
    for i in range(mid, low - 1, -1):
        total += arr[i]
        if total > left_sum:
            left_sum = total
            left_index = i

    total = 0
    # Find the maximum sum of the right half
    for i in range(mid + 1, high + 1):
        total += arr[i]
        if total > right_sum:
            right_sum = total
            right_index = i

    return left_index, right_index, left_sum + right_sum


def max_subarray(arr, low, high):
    if low == high:
        return low, high, arr[low]

    mid = (low + high) // 2

    left_low, left_high, left_sum = max_subarray(arr, low, mid)
    right_low, right_high, right_sum = max_subarray(arr, mid + 1, high)
    cross_low, cross_high, cross_sum = max_crossing_subarray(arr, low, mid, high)

    if left_sum >= right_sum and left_sum >= cross_sum:
        return left_low, left_high, left_sum
    elif right_sum >= left_sum and right_sum >= cross_sum:
        return right_low, right_high, right_sum
    else:
        return cross_low, cross_high, cross_sum


def test_max_subarray():
    test_cases = [
        [-2, 1, -3, 4, -1, 2, 1, -5, 4],
        [1, 2, 3, 4, 5],
        [-1, -2, -3, -4, -5],
        [5, -4, 7, 8, -1, -2, 3],
        [0, -1, -2, -3, -4, 5]
    ]

    for idx, test in enumerate(test_cases):
        print(f"Test Case {idx + 1}: {test}")
        low, high, max_sum = max_subarray(test, 0, len(test) - 1)
        print(f"Maximum Subarray Sum: {max_sum}")
        print(f"Subarray: {test[low:high+1]}")
        print("-" * 40)


if __name__ == "__main__":
    test_max_subarray()

'''


'''
def max_heapify(arr, n, i):
    largest = i  # Initialize the largest as the root
    left = 2 * i + 1
    right = 2 * i + 2 
    if left < n and arr[left] > arr[largest]:
        largest = left
    if right < n and arr[right] > arr[largest]:
        largest = right
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]  # Swap
        max_heapify(arr, n, largest)  # Recursively heapify the affected subtree


def build_max_heap(arr):
    n = len(arr)
    # Build max-heap (rearrange array)
    for i in range(n // 2 - 1, -1, -1):
        max_heapify(arr, n, i)


def heap_sort(arr):
    n = len(arr)
    build_max_heap(arr)
    for i in range(n - 1, 0, -1):
        arr[0], arr[i] = arr[i], arr[0]]
        max_heapify(arr, i, 0)

    return arr


def test_heap_sort():
    test_cases = [
        [12, 11, 13, 5, 6, 7]  
    ]

    for idx, test in enumerate(test_cases):
        print(f"Test Case {idx + 1}:")
        print(f"Input: {test}")
        sorted_array = heap_sort(test.copy()) 
        print(f"Sorted: {sorted_array}")
        print("-" * 40)


if __name__ == "__main__":
    test_heap_sort()
'''


'''
import heapq

def max_heapify(arr, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < n and arr[left] > arr[largest]:
        largest = left

    if right < n and arr[right] > arr[largest]:
        largest = right

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        max_heapify(arr, n, largest)


def build_max_heap(arr):
    n = len(arr)
    for i in range(n // 2 - 1, -1, -1):
        max_heapify(arr, n, i)


def kth_maximum(arr, k):
    n = len(arr)
    build_max_heap(arr)
    
    for _ in range(k-1):
        arr[0], arr[n-1] = arr[n-1], arr[0]
        n -= 1
        max_heapify(arr, n, 0)
    
    return arr[0]


def kth_minimum(arr, k):
    min_heap = [-x for x in arr]
    heapq.heapify(min_heap)
    
    for _ in range(k-1):
        heapq.heappop(min_heap)
    
    return -min_heap[0]


def test_heap_operations():
    test_cases = [
        ([12, 11, 13, 5, 6, 7], 3),
        ([1, 2, 3, 4, 5], 2),
        ([5, 4, 3, 2, 1], 4),
        ([10, -2, 3, 7, 0, 5], 1),
    ]
    
    for idx, (test, k) in enumerate(test_cases):
        print(f"Test Case {idx + 1}:")
        print(f"Input Max-Heap: {test}")
        
        kth_max = kth_maximum(test.copy(), k)
        print(f"{k}-th Maximum: {kth_max}")
        
        kth_min = kth_minimum(test.copy(), k)
        print(f"{k}-th Minimum: {kth_min}")
        print("-" * 40)


if __name__ == "__main__":
    test_heap_operations()
'''



'''
import random

def quick_sort_first_pivot(arr, low, high):
    if low < high:
        pivot_index = partition_first(arr, low, high)
        quick_sort_first_pivot(arr, low, pivot_index - 1)
        quick_sort_first_pivot(arr, pivot_index + 1, high)

def partition_first(arr, low, high):
    pivot = arr[low]
    left = low + 1
    right = high

    while True:
        while left <= right and arr[left] <= pivot:
            left += 1
        while left <= right and arr[right] >= pivot:
            right -= 1
        if left <= right:
            arr[left], arr[right] = arr[right], arr[left]
        else:
            break

    arr[low], arr[right] = arr[right], arr[low]
    return right


def quick_sort_last_pivot(arr, low, high):
    if low < high:
        pivot_index = partition_last(arr, low, high)
        quick_sort_last_pivot(arr, low, pivot_index - 1)
        quick_sort_last_pivot(arr, pivot_index + 1, high)

def partition_last(arr, low, high):
    pivot = arr[high]
    left = low
    right = high - 1

    while True:
        while left <= right and arr[left] <= pivot:
            left += 1
        while left <= right and arr[right] >= pivot:
            right -= 1
        if left <= right:
            arr[left], arr[right] = arr[right], arr[left]
        else:
            break

    arr[left], arr[high] = arr[high], arr[left]
    return left


def quick_sort_random_pivot(arr, low, high):
    if low < high:
        pivot_index = partition_random(arr, low, high)
        quick_sort_random_pivot(arr, low, pivot_index - 1)
        quick_sort_random_pivot(arr, pivot_index + 1, high)

def partition_random(arr, low, high):
    random_index = random.randint(low, high)
    arr[random_index], arr[high] = arr[high], arr[random_index]
    pivot = arr[high]
    left = low
    right = high - 1

    while True:
        while left <= right and arr[left] <= pivot:
            left += 1
        while left <= right and arr[right] >= pivot:
            right -= 1
        if left <= right:
            arr[left], arr[right] = arr[right], arr[left]
        else:
            break

    arr[left], arr[high] = arr[high], arr[left]
    return left


def test_quick_sort():
    test_cases = [
        [12, 11, 13, 5, 6, 7],
        [1, 2, 3, 4, 5],
        [5, 4, 3, 2, 1],
        [10, -2, 3, 7, 0, 5],
        [25, 12, 9, 20, 15]
    ]

    for idx, test in enumerate(test_cases):
        print(f"Test Case {idx + 1}: {test}")

        arr_first = test.copy()
        quick_sort_first_pivot(arr_first, 0, len(arr_first) - 1)
        print(f"Sorted using First Pivot: {arr_first}")

        arr_last = test.copy()
        quick_sort_last_pivot(arr_last, 0, len(arr_last) - 1)
        print(f"Sorted using Last Pivot: {arr_last}")

        arr_random = test.copy()
        quick_sort_random_pivot(arr_random, 0, len(arr_random) - 1)
        print(f"Sorted using Random Pivot: {arr_random}")
        print("-" * 40)


if __name__ == "__main__":
    test_quick_sort()
'''


'''
def counting_sort(arr):
    if not arr:
        return arr
    
    max_val = max(arr)
    min_val = min(arr)
    
    count_range = max_val - min_val + 1
    count = [0] * count_range
    output = [0] * len(arr)
    
    for num in arr:
        count[num - min_val] += 1
    
    for i in range(1, count_range):
        count[i] += count[i - 1]
    
    for num in reversed(arr):
        output[count[num - min_val] - 1] = num
        count[num - min_val] -= 1
    
    for i in range(len(arr)):
        arr[i] = output[i]
    
    return arr


def test_counting_sort():
    test_cases = [
        [12, 11, 13, 5, 6, 7],
        [1, 2, 3, 4, 5],
        [5, 4, 3, 2, 1],
        [10, -2, 3, 7, 0, 5],
        [25, 12, 9, 20, 15]
    ]

    for idx, test in enumerate(test_cases):
        print(f"Test Case {idx + 1}: {test}")
        sorted_array = counting_sort(test.copy())
        print(f"Sorted Array: {sorted_array}")
        print("-" * 40)


if __name__ == "__main__":
    test_counting_sort()
'''



'''
def counting_sort_radix(arr, exp):
    n = len(arr)
    output = [0] * n
    count = [0] * 10
    
    for i in range(n):
        index = arr[i] // exp
        count[index % 10] += 1
    
    for i in range(1, 10):
        count[i] += count[i - 1]
    
    i = n - 1
    while i >= 0:
        index = arr[i] // exp
        output[count[index % 10] - 1] = arr[i]
        count[index % 10] -= 1
        i -= 1
    
    for i in range(n):
        arr[i] = output[i]
    
    return arr

def radix_sort(arr):
    max_val = max(arr)
    
    exp = 1
    while max_val // exp > 0:
        counting_sort_radix(arr, exp)
        exp *= 10
    return arr

def test_radix_sort():
    test_cases = [
        [170, 45, 75, 90, 802, 24, 2, 66],
        [5, 1, 8, 3, 7, 2],
        [12, 234, 4, 23, 87, 45, 12],
        [0, 0, 0, 0, 0],
        [56, 89, 23, 12, 77, 45]
    ]
    
    for idx, test in enumerate(test_cases):
        print(f"Test Case {idx + 1}: {test}")
        sorted_array = radix_sort(test.copy())
        print(f"Sorted Array: {sorted_array}")
        print("-" * 40)

if __name__ == "__main__":
    test_radix_sort()
'''


# class Item:
#     def __init__(self, value, weight):
#         self.value = value
#         self.weight = weight

# def fractionalKnapsack(W, arr, n):
#     arr.sort(key=lambda x: x.value / x.weight, reverse=True)
#     curWeight = 0
#     finalvalue = 0.0
#     for i in range(n):
#         if curWeight + arr[i].weight <= W:
#             curWeight += arr[i].weight
#             finalvalue += arr[i].value
#         else:
#             remain = W - curWeight
#             finalvalue += arr[i].value / arr[i].weight * remain
#             break
#     return finalvalue



# # n = 3
# # W = 50
# # arr = [Item(60, 10), Item(100, 20), Item(120, 30)]
# n = int(input("Enter number of items: "))
# W = int(input("Enter knapsack capacity: "))
# arr = []
# for i in range(1, n+1):
#     weight = int(input(f"Enter weight of item {i}: "))
#     profit = int(input(f"Enter profit of item {i}: "))
#     arr.append(Item(profit, weight))
# ans = fractionalKnapsack(W, arr, n)
# print("The maximum value is", ans)

def toup(k):
    return k.upper();
x = ['ab', 'cd']
print(list(map(toup, x)))


*args
















































'''

INF = float('inf')

def floyd_warshall(graph):
    num_vertices = len(graph)
    dist = [[graph[i][j] for j in range(num_vertices)] for i in range(num_vertices)]

    for k in range(num_vertices):
        for i in range(num_vertices):
            for j in range(num_vertices):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
    return dist


def print_matrix(matrix):
    for row in matrix:
        print(['INF' if val == INF else val for val in row])

if __name__ == "__main__":
    test_cases = {
        "Test Case 1": [
            [0, 3, INF, INF],
            [INF, 0, 1, INF],
            [INF, INF, 0, 7],
            [2, INF, INF, 0]
        ],
        "Test Case 2": [
            [0, 5, INF, 10],
            [INF, 0, 3, INF],
            [INF, INF, 0, 1],
            [INF, INF, INF, 0]
        ],
        "Test Case 3": [
            [0, 1, 4, INF],
            [INF, 0, 4, 2],
            [INF, INF, 0, 3],
            [INF, INF, INF, 0]
        ]
    }

    for test_name, graph in test_cases.items():
        print(f"\n{test_name}:")
        print("Input graph (Adjacency Matrix):")
        print_matrix(graph)
        
        shortest_paths = floyd_warshall(graph)
        
        print("\nShortest paths between all pairs of nodes:")
        print_matrix(shortest_paths)

'''


'''
import heapq

def prim_mst(graph, start=0):
    num_vertices = len(graph)
    visited = [False] * num_vertices  # Track visited nodes
    min_heap = [(0, start, -1)]  # (weight, node, parent)
    total_cost = 0
    mst_edges = []

    while min_heap:
        weight, node, parent = heapq.heappop(min_heap)

        if visited[node]:
            continue

        visited[node] = True
        total_cost += weight
        if parent != -1:  # Avoid adding the initial node to MST edges
            mst_edges.append((parent, node, weight))
        for neighbor in range(num_vertices):
            if not visited[neighbor] and graph[node][neighbor] != float('inf'):
                heapq.heappush(min_heap, (graph[node][neighbor], neighbor, node))

    return total_cost, mst_edges


def print_result(total_cost, mst_edges):
    print(f"Total Cost of MST: {total_cost}")
    print("Edges in the MST:")
    for u, v, weight in mst_edges:
        print(f"({u}, {v}) - Weight: {weight}")

if __name__ == "__main__":
    test_cases = {
        "Test Case 1": [
            [0, 2, float('inf'), 6, float('inf')],
            [2, 0, 3, 8, 5],
            [float('inf'), 3, 0, float('inf'), 7],
            [6, 8, float('inf'), 0, 9],
            [float('inf'), 5, 7, 9, 0]
        ],
        "Test Case 2": [
            [0, 10, float('inf'), float('inf'), float('inf'), 5],
            [10, 0, 3, float('inf'), float('inf'), float('inf')],
            [float('inf'), 3, 0, 1, float('inf'), float('inf')],
            [float('inf'), float('inf'), 1, 0, 4, float('inf')],
            [float('inf'), float('inf'), float('inf'), 4, 0, 2],
            [5, float('inf'), float('inf'), float('inf'), 2, 0]
        ],
        "Test Case 3": [
            [0, 1, 2, float('inf')],
            [1, 0, 4, 6],
            [2, 4, 0, 3],
            [float('inf'), 6, 3, 0]
        ]
    }

    for test_name, graph in test_cases.items():
        print(f"\n{test_name}:")
        total_cost, mst_edges = prim_mst(graph)
        print_result(total_cost, mst_edges)
'''


'''
import heapq

def dijkstra(graph, start):
    num_vertices = len(graph)
    distances = [float('inf')] * num_vertices  # Distance from start to each vertex
    distances[start] = 0
    min_heap = [(0, start)]  # (distance, vertex)
    visited = [False] * num_vertices
    paths = {i: [] for i in range(num_vertices)}  # Stores paths for all vertices
    paths[start] = [start]  # Path to start vertex is itself
    while min_heap:
        curr_dist, curr_vertex = heapq.heappop(min_heap)
        if visited[curr_vertex]:
            continue
        visited[curr_vertex] = True
        for neighbor in range(num_vertices):
            if graph[curr_vertex][neighbor] != float('inf') and not visited[neighbor]:
                new_dist = curr_dist + graph[curr_vertex][neighbor]
                if new_dist < distances[neighbor]:
                    distances[neighbor] = new_dist
                    heapq.heappush(min_heap, (new_dist, neighbor))
                    # Update the path
                    paths[neighbor] = paths[curr_vertex] + [neighbor]
    return distances, paths


def print_result(start, distances, paths):
    print(f"Shortest paths from vertex {start}:")
    for vertex, dist in enumerate(distances):
        path_str = " -> ".join(map(str, paths[vertex])) if paths[vertex] else "No path"
        print(f"Vertex {vertex}: Distance = {dist}, Path = {path_str}")


# Test the algorithm with different test cases
if __name__ == "__main__":
    test_cases = {
        "Test Case 1": [
            [0, 1, 4, float('inf'), float('inf'), float('inf')],
            [1, 0, 4, 2, 7, float('inf')],
            [4, 4, 0, 3, 5, float('inf')],
            [float('inf'), 2, 3, 0, 4, 6],
            [float('inf'), 7, 5, 4, 0, 7],
            [float('inf'), float('inf'), float('inf'), 6, 7, 0]
        ],
        "Test Case 2": [
            [0, 10, float('inf'), 30, 100],
            [10, 0, 50, float('inf'), float('inf')],
            [float('inf'), 50, 0, 20, 10],
            [30, float('inf'), 20, 0, 60],
            [100, float('inf'), 10, 60, 0]
        ],
        "Test Case 3": [
            [0, 2, float('inf'), 1],
            [2, 0, 3, float('inf')],
            [float('inf'), 3, 0, 5],
            [1, float('inf'), 5, 0]
        ]
    }

    for test_name, graph in test_cases.items():
        print(f"\n{test_name}:")
        print("Input Graph (Adjacency Matrix):")
        for row in graph:
            print(["INF" if val == float('inf') else val for val in row])
        
        start_vertex = 0  # Set the starting vertex (can be changed)
        distances, paths = dijkstra(graph, start_vertex)
        print_result(start_vertex, distances, paths)
'''


'''
class Item:
    def __init__(self, value, weight):
        self.value = value
        self.weight = weight
        self.ratio = value / weight  # Value-to-weight ratio
def fractional_knapsack(items, capacity):
    items.sort(key=lambda x: x.ratio, reverse=True)
    max_value = 0.0
    selected_items = []
    for i, item in enumerate(items):
        if capacity >= item.weight:
            max_value += item.value
            capacity -= item.weight
            selected_items.append((i, 1))  # Item index and fraction taken
        else:
            fraction = capacity / item.weight
            max_value += item.value * fraction
            selected_items.append((i, fraction))
            break
    return max_value, selected_items


def print_result(max_value, selected_items, items):
    print(f"\nMaximum value achievable: {max_value:.2f}")
    print("Selected items (index, fraction):")
    for index, fraction in selected_items:
        print(f"Item {index} -> Fraction: {fraction:.2f}, Value: {items[index].value}, Weight: {items[index].weight}")
if __name__ == "__main__":
    test_cases = {
        "Test Case 1": {
            "items": [(60, 10), (100, 20), (120, 30)],  # (value, weight)
            "capacity": 50
        },
        "Test Case 2": {
            "items": [(500, 30), (400, 20), (300, 10)],  # (value, weight)
            "capacity": 40
        },
        "Test Case 3": {
            "items": [(200, 5), (300, 10), (400, 20), (500, 30)],  # (value, weight)
            "capacity": 25
        }
    }
    for test_name, data in test_cases.items():
        print(f"\n{test_name}:")
        item_list = [Item(value, weight) for value, weight in data["items"]]
        knapsack_capacity = data["capacity"]
        print("Items (value, weight):")
        for item in data["items"]:
            print(item)
        max_val, selected = fractional_knapsack(item_list, knapsack_capacity)
        print_result(max_val, selected, item_list)
'''

'''
import sys
def matrix_chain_order(dims):
    n = len(dims) - 1  # Number of matrices
    dp = [[0] * n for _ in range(n)]
    split = [[0] * n for _ in range(n)]
    for chain_len in range(2, n + 1):
        for i in range(n - chain_len + 1):
            j = i + chain_len - 1
            dp[i][j] = sys.maxsize  # Initialize with infinity
            for k in range(i, j):
                cost = dp[i][k] + dp[k + 1][j] + dims[i] * dims[k + 1] * dims[j + 1]
                if cost < dp[i][j]:
                    dp[i][j] = cost
                    split[i][j] = k
    optimal_parens = reconstruct_parentheses(split, 0, n - 1)
    return dp[0][n - 1], optimal_parens


def reconstruct_parentheses(split, i, j):
    if i == j:
        return f"A{i + 1}"
    else:
        left = reconstruct_parentheses(split, i, split[i][j])
        right = reconstruct_parentheses(split, split[i][j] + 1, j)
        return f"({left} x {right})"
if __name__ == "__main__":
    test_cases = {
        "Test Case 1": [10, 20, 30, 40, 30],
        "Test Case 2": [40, 20, 30, 10, 30],
        "Test Case 3": [10, 20, 30],
        "Test Case 4": [5, 10, 3, 12, 5, 50, 6]
    }

    for test_name, dims in test_cases.items():
        print(f"\n{test_name}:")
        print(f"Dimensions: {dims}")
        min_cost, optimal_parens = matrix_chain_order(dims)
        print(f"Minimum number of multiplications: {min_cost}")
        print(f"Optimal Parenthesization: {optimal_parens}")
'''

'''
def rod_cutting(prices, n, memo):
    if n in memo:
        return memo[n]
    if n == 0:
        return 0
    max_revenue = float('-inf')
    for i in range(1, n + 1):
        if i <= len(prices):
            max_revenue = max(max_revenue, prices[i - 1] + rod_cutting(prices, n - i, memo))
    memo[n] = max_revenue
    return max_revenue
def print_result(prices, length):
    memo = {}
    max_revenue = rod_cutting(prices, length, memo)
    print(f"Rod length: {length}")
    print(f"Prices: {prices}")
    print(f"Maximum revenue: {max_revenue}")
    print("-" * 40)
if __name__ == "__main__":
    test_cases = {
        "Test Case 1": {"prices": [1, 5, 8, 9, 10, 17, 17, 20], "length": 8},
        "Test Case 2": {"prices": [3, 5, 8, 9, 10, 17, 17, 20], "length": 8},
        "Test Case 3": {"prices": [2, 5, 7, 8], "length": 4},
        "Test Case 4": {"prices": [3, 5, 8, 9, 10], "length": 5},
    }

    for test_name, data in test_cases.items():
        print(f"\n{test_name}:")
        print_result(data["prices"], data["length"])
'''

'''
class Node:
    def __init__(self, data):
        self.data = data
        self.color = "RED"  # New nodes are always red initially
        self.left = None
        self.right = None
        self.parent = None


class RedBlackTree:
    def __init__(self):
        self.TNULL = Node(0)
        self.TNULL.color = "BLACK"  # Sentinel node (used to represent NIL leaves)
        self.root = self.TNULL

    def insert(self, key):
        # Create the new node
        new_node = Node(key)
        new_node.parent = None
        new_node.left = self.TNULL
        new_node.right = self.TNULL
        parent = None
        current = self.root
        while current != self.TNULL:
            parent = current
            if key < current.data:
                current = current.left
            else:
                current = current.right

        new_node.parent = parent
        if not parent:
            self.root = new_node  # The tree was empty
        elif key < parent.data:
            parent.left = new_node
        else:
            parent.right = new_node
        self.fix_insert(new_node)

    def fix_insert(self, node):
        while node.parent and node.parent.color == "RED":
            if node.parent == node.parent.parent.left:  # Parent is a left child
                uncle = node.parent.parent.right
                if uncle.color == "RED":
                    uncle.color = "BLACK"
                    node.parent.color = "BLACK"
                    node.parent.parent.color = "RED"
                    node = node.parent.parent
                else:
                    if node == node.parent.right:
                        node = node.parent
                        self.left_rotate(node)
                    node.parent.color = "BLACK"
                    node.parent.parent.color = "RED"
                    self.right_rotate(node.parent.parent)
            else:
                uncle = node.parent.parent.left
                if uncle.color == "RED":
                    uncle.color = "BLACK"
                    node.parent.color = "BLACK"
                    node.parent.parent.color = "RED"
                    node = node.parent.parent
                else:
                    if node == node.parent.left:
                        node = node.parent
                        self.right_rotate(node)
                    node.parent.color = "BLACK"
                    node.parent.parent.color = "RED"
                    self.left_rotate(node.parent.parent)
        self.root.color = "BLACK"

    def left_rotate(self, node):
        y = node.right
        node.right = y.left
        if y.left != self.TNULL:
            y.left.parent = node
        y.parent = node.parent
        if not node.parent:
            self.root = y
        elif node == node.parent.left:
            node.parent.left = y
        else:
            node.parent.right = y
        y.left = node
        node.parent = y

    def right_rotate(self, node):
        y = node.left
        node.left = y.right
        if y.right != self.TNULL:
            y.right.parent = node
        y.parent = node.parent
        if not node.parent:
            self.root = y
        elif node == node.parent.right:
            node.parent.right = y
        else:
            node.parent.left = y
        y.right = node
        node.parent = y

    def inorder_traversal(self, node):
        if node != self.TNULL:
            self.inorder_traversal(node.left)
            print(f"{node.data} ({node.color})", end=" ")
            self.inorder_traversal(node.right)

    def display_tree(self):
        print("\nInorder Traversal of Red-Black Tree:")
        self.inorder_traversal(self.root)
        print()

if __name__ == "__main__":
    rbt = RedBlackTree()
    input_data = [10, 20, 30, 15, 25, 5, 1]
    print(f"Input data: {input_data}")

    for num in input_data:
        rbt.insert(num)
    rbt.display_tree()
'''
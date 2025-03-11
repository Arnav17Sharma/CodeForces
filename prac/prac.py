# from collections import deque
# def bfs(graph, start, goal):
#     queue = deque([(start, [start])])
#     visited = set()
#     while queue:
#         node, path = queue.popleft()
#         if node == goal:
#             return path
#         if node not in visited:
#             visited.add(node)
#             for neighbor in graph[node]:
#                 queue.append((neighbor, path + [neighbor]))
#     return None
# graph = {
#     'A': ['B', 'C'],
#     'B': ['D', 'E'],
#     'C': ['F'],
#     'D': [],
#     'E': ['F'],
#     'F': []
# }

# graph = {}
# n = int(input("Enter no. of nodes: "))
# for i in range(n):
#     name = input("Enter node name: ")
#     graph[name] = []
#     cnt = int(input("Enter no of neighbours: "))
#     for j in range(cnt):
#         name2 = input("Enter node name: ")
#         graph[name].append(name2)

# print(bfs(graph, 'A', 'F'))






# def dfs(graph, start, goal, path=None, visited=None):
#     if path is None:
#         path = [start]
#     if visited is None:
#         visited = set()
#     if start == goal:
#         return path
#     visited.add(start)
#     for neighbor in graph[start]:
#         if neighbor not in visited:
#             result = dfs(graph, neighbor, goal, path + [neighbor], visited)
#             if result is not None:
#                 return result
#     return None
# graph = {
#     'A': ['B', 'C'],
#     'B': ['D', 'E'],
#     'C': ['F'],
#     'D': [],
#     'E': ['F'],
#     'F': []
# }
# print(dfs(graph, 'A', 'F'))


# def iddfs(graph, start, goal, max_depth):
#     for depth in range(max_depth):
#         visited = set()
#         result = dls(graph, start, goal, depth, visited)
#         if result is not None:
#             return result
#     return None
# def dls(graph, node, goal, depth, visited):
#     if depth == 0 and node == goal:
#         return [node]
#     elif depth > 0:
#         visited.add(node)
#         for neighbor in graph[node]:
#             if neighbor not in visited:
#                 result = dls(graph, neighbor, goal, depth - 1, visited)
#                 if result is not None:
#                     return [node] + result
#     return None
# graph = {
#     'A': ['B', 'C'],
#     'B': ['D', 'E'],
#     'C': ['F'],
#     'D': [],
#     'E': ['F'],
#     'F': []
# }
# print(iddfs(graph, 'A', 'F', 3))


# from collections import deque
# def solve_8_puzzle(start, goal):
#     queue = deque([(start, [])])
#     visited = set()
#     while queue:
#         current, path = queue.popleft()
#         if current == goal:
#             return path
#         if tuple(map(tuple, current)) not in visited:
#             visited.add(tuple(map(tuple, current)))
#             for move, neighbor in get_neighbors(current):
#                 queue.append((neighbor, path + [move]))
#     return None

# def get_neighbors(state):
#     neighbors = []
#     zero_pos = find_zero(state)
#     for move in [(0, -1), (0, 1), (-1, 0), (1, 0)]:
#         new_pos = (zero_pos[0] + move[0], zero_pos[1] + move[1])
#         if 0 <= new_pos[0] < 3 and 0 <= new_pos[1] < 3:
#             new_state = [row[:] for row in state]
#             new_state[zero_pos[0]][zero_pos[1]] = new_state[new_pos[0]][new_pos[1]]
#             new_state[new_pos[0]][new_pos[1]] = 0
#             neighbors.append((move, new_state))
#     return neighbors

# def find_zero(state):
#     for i in range(3):
#         for j in range(3):
#             if state[i][j] == 0:
#                 return (i, j)
#     return None

# start = [[1, 2, 3], [8, 5, 6], [4, 7, 0]]
# goal = [[1, 2, 3], [4, 5, 6], [7, 8, 0]]
# print(solve_8_puzzle(start, goal))


# from collections import deque
# def water_jug_bfs(capacity_jug1, capacity_jug2, target):
#     queue = deque([((0, 0), [])])
#     visited = set()
#     while queue:
#         (jug1, jug2), path = queue.popleft()
#         if jug1 == target or jug2 == target:
#             return path + [(jug1, jug2)]
#         if (jug1, jug2) not in visited:
#             visited.add((jug1, jug2))
#             queue.append(((capacity_jug1, jug2), path + [(jug1, jug2)]))
#             queue.append(((jug1, capacity_jug2), path + [(jug1, jug2)]))
#             queue.append(((0, jug2), path + [(jug1, jug2)]))
#             queue.append(((jug1, 0), path + [(jug1, jug2)]))
#             pour_amount = min(jug1, capacity_jug2 - jug2)
#             queue.append(((jug1 - pour_amount, jug2 + pour_amount), path + [(jug1, jug2)]))
#             pour_amount = min(jug2, capacity_jug1 - jug1)
#             queue.append(((jug1 + pour_amount, jug2 - pour_amount), path + [(jug1, jug2)]))
#     return None
# print(water_jug_bfs(4, 3, 2))


# from collections import deque
# def is_valid(state):
#     missionaries_left, cannibals_left, boat, missionaries_right, cannibals_right = state
#     if missionaries_left < 0 or cannibals_left < 0 or missionaries_right < 0 or cannibals_right < 0:
#         return False
#     if (missionaries_left > 0 and missionaries_left < cannibals_left) or (missionaries_right > 0 and missionaries_right < cannibals_right):
#         return False
#     return True
# def missionaries_cannibals():
#     start_state = (3, 3, 1, 0, 0)
#     goal_state = (0, 0, 0, 3, 3)
#     queue = deque([(start_state, [])])
#     visited = set()
#     while queue:
#         state, path = queue.popleft()
#         if state == goal_state:
#             return path
#         if state not in visited:
#             visited.add(state)
#             missionaries_left, cannibals_left, boat, missionaries_right, cannibals_right = state
#             if boat == 1:
#                 for m in range(3):
#                     for c in range(3):
#                         if m + c >= 1 and m + c <= 2:
#                             new_state = (missionaries_left - m, cannibals_left - c, 0, missionaries_right + m, cannibals_right + c)
#                             if is_valid(new_state):
#                                 queue.append((new_state, path + [new_state]))
#             else:
#                 for m in range(3):
#                     for c in range(3):
#                         if m + c >= 1 and m + c <= 2:
#                             new_state = (missionaries_left + m, cannibals_left + c, 1, missionaries_right - m, cannibals_right - c)
#                             if is_valid(new_state):
#                                 queue.append((new_state, path + [new_state]))
#     return None
# print(missionaries_cannibals())


# def steepest_hill_climbing(start, goal, neighbors, heuristic):
#     current = start
#     while True:
#         if current == goal:
#             return current
#         neighbor_states = neighbors(current)
#         if not neighbor_states:
#             return None
#         best_neighbor = min(neighbor_states, key=lambda x: heuristic(x, goal))
#         if heuristic(best_neighbor, goal) >= heuristic(current, goal):
#             return None
#         current = best_neighbor
# def heuristic(state, goal):
#     return abs(state - goal)
# def neighbors(state):
#     return [state - 1, state + 1]
# start = 5
# goal = 10
# print(steepest_hill_climbing(start, goal, neighbors, heuristic))


# import heapq
# def greedy_best_first_search(graph, start, goal, heuristic):
#     queue = [(heuristic(start, goal), start, [start])]
#     visited = set()
#     while queue:
#         _, node, path = heapq.heappop(queue)
#         if node == goal:
#             return path
#         if node not in visited:
#             visited.add(node)
#             for neighbor in graph[node]:
#                 heapq.heappush(queue, (heuristic(neighbor, goal), neighbor, path + [neighbor]))
#     return None
# graph = {
#     'A': ['B', 'C'],
#     'B': ['D', 'E'],
#     'C': ['F'],
#     'D': [],
#     'E': ['F'],
#     'F': []
# }
# def heuristic(node, goal):
#     return abs(ord(node) - ord(goal))
# print(greedy_best_first_search(graph, 'A', 'F', heuristic))


# from collections import deque
# initial_state = ('floor', 'floor', False)
# goal_state = ('box', 'under_banana', True)
# def get_possible_actions(state):
#     monkey_pos, box_pos, has_banana = state
#     actions = []
#     if not has_banana:
#         if monkey_pos == 'floor' and box_pos == 'floor':
#             actions.append('move_to_box')
#         if monkey_pos == 'box' and box_pos == 'floor':
#             actions.append('push_box_under_banana')
#         if monkey_pos == 'floor' and box_pos == 'under_banana':
#             actions.append('climb_box')
#         if monkey_pos == 'box' and box_pos == 'under_banana':
#             actions.append('grab_banana')
#     return actions

# def apply_action(state, action):
#     monkey_pos, box_pos, has_banana = state
#     if action == 'move_to_box':
#         return ('box', box_pos, has_banana)
#     elif action == 'push_box_under_banana':
#         return (monkey_pos, 'under_banana', has_banana)
#     elif action == 'climb_box':
#         return ('box', box_pos, has_banana)
#     elif action == 'grab_banana':
#         return (monkey_pos, box_pos, True)
#     else:
#         return state

# def solve_monkey_banana(initial_state, goal_state):
#     queue = deque([(initial_state, [])])
#     visited = set()
#     while queue:
#         current_state, path = queue.popleft()
#         if current_state == goal_state:
#             return path
#         if current_state not in visited:
#             visited.add(current_state)
#             for action in get_possible_actions(current_state):
#                 new_state = apply_action(current_state, action)
#                 queue.append((new_state, path + [action]))
#     return None
# solution = solve_monkey_banana(initial_state, goal_state)
# if solution:
#     print("Solution found! Steps:")
#     for step in solution:
#         print(f"- {step}")
# else:
#     print("No solution found.")


# def simple_hill_climbing(start, goal, neighbors, heuristic):
#     current = start
#     while True:
#         if current == goal:
#             return current
#         neighbor_states = neighbors(current)
#         if not neighbor_states:
#             return None
#         for neighbor in neighbor_states:
#             if heuristic(neighbor, goal) < heuristic(current, goal):
#                 current = neighbor
#                 break
#         else:
#             return None
# start = 5
# goal = 10
# def heuristic(state, goal):
#     return abs(state - goal)
# def neighbors(state):
#     return [state - 1, state + 1]
# print(simple_hill_climbing(start, goal, neighbors, heuristic))
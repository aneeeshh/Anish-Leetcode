class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        graph = defaultdict(list)
        for a, b in edges:
            graph[a].append(b)
            graph[b].append(a)
        q = deque([source])
        visit = set()
        while(q):
            x = q.popleft()

            if x == destination:
                return True

            visit.add(x)
            for i in graph[x]:
                if i not in visit:
                    q.append(i)     
        return False  
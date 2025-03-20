class Graph:
    def __init__(self,size):
        self.size = size
        self.vertex_data = [''] * size
        self.adj_matrix = [[0]*size for _ in range(size)]

    def add_vertex_data(self,vertex , data):
        if 0<= vertex <self.size:
            self.vertex_data[vertex] = data

    def add_vertex_edge(self , u ,v):
        if 0<=u < self.size and 0<= v <self.size:
            self.adj_matrix[u][v] = 1
            self.adj_matrix[v][u] = 1

    def print_graph(self):
        print('\nAdjacency Matrix')
        for row in self.adj_matrix:
            print(' '.join(map(str,row)))

        print('\nVertex Data')
        for vertex , data in enumerate(self.vertex_data):
            print(f'Vertex {vertex} : {data}')

    def bfs(self,start_vertex_data):
        queue = [self.vertex_data.index(start_vertex_data)]
        visited = [False] * self.size
        visited[queue[0]] = True

        while queue:
            current_vertex = queue.pop(0)
            print(self.vertex_data[current_vertex], end=' ')

            for i in range(self.size):
                if self.adj_matrix[current_vertex][i] == 1 and not visited[i]:
                    queue.append(i)
                    visited[i] = True

g = Graph(7)

g.add_vertex_data(0,'A')
g.add_vertex_data(1,'B')
g.add_vertex_data(2,'C')
g.add_vertex_data(3,'D')
g.add_vertex_data(4,'E')
g.add_vertex_data(5,'F')
g.add_vertex_data(6,'G')

g.add_vertex_edge(0,2)
g.add_vertex_edge(0,3)
g.add_vertex_edge(0,4)
g.add_vertex_edge(1,2)
g.add_vertex_edge(1,5)
g.add_vertex_edge(2,2)
g.add_vertex_edge(2,4)
g.add_vertex_edge(2,5)
g.add_vertex_edge(2,6)

g.print_graph()

print("\nBreadth First Search starting from vertex D:")
g.bfs('D')
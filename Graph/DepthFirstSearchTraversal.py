class Graph:
    def __init__(self , size):
        self.size = size 
        self.vertex_data = [''] * size
        self.adj_matrix = [[0]*size for _ in range(size)]

    
    def add_vertex_data(self, vertex , data):
        if 0<= vertex < self.size : 
            self.vertex_data[vertex] = data

    def add_vertex_edge(self , u , v):
        if 0<= u <self.size and 0<= v <self.size:
            self.adj_matrix[u][v] = 1
            self.adj_matrix[v][u] = 1

    def print_graph(self):
        print('\nAdjacency Matrix')
        for row in self.adj_matrix:
            print(' '.join(map(str ,row)))
        
        print('\nVertex Data')
        for vertex , data in enumerate(self.vertex_data):
            print(f"Vertex {vertex} : {data}")

    def dfs(self , start_vertex_data):
        self.visited = [False] * self.size
        vertex_index = self.vertex_data.index(start_vertex_data)
        self.dfs_utils(vertex_index , self.visited)

    def dfs_utils(self , v , visited):
        visited[v] = True
        print(self.vertex_data[v] , end=" ")
        for i in range(self.size):
            if self.adj_matrix[v][i] == 1 and not visited[i]:
                self.dfs_utils(i , visited)

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
g.add_vertex_edge(2,0)
g.add_vertex_edge(2,1)
g.add_vertex_edge(2,2)
g.add_vertex_edge(2,4)
g.add_vertex_edge(2,5)
g.add_vertex_edge(2,6)
g.add_vertex_edge(3,0)
g.add_vertex_edge(4,0)
g.add_vertex_edge(4,2)
g.add_vertex_edge(5,1)
g.add_vertex_edge(5,2)
g.add_vertex_edge(6,2)

g.print_graph()

g.dfs('D')
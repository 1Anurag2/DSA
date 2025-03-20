class Graph:
    def __init__(self,size):
        self.size = size
        self.adj_matrix = [[0]*size for _ in range(size)]
        self.vertex_data = [''] * size

    def add_vertex_data(self, vertex , data):
        if 0 <= vertex < self.size:
            self.vertex_data[vertex] = data
        
    def add_edges(self,u , v , weight):
        if 0 <= u < self.size and 0 <= v < self.size:
            self.adj_matrix[u][v] = weight

    def print_graph(self):
        print('\nAdjacency Matrix')
        for row in self.adj_matrix:
            print(' '.join(map(str,row)))

        print('\nVertex Data')
        for vertex , data in enumerate(self.vertex_data):
            print(f"Vertex {vertex} : {data}")

g = Graph(4)
g.add_vertex_data(0 , 'A')        
g.add_vertex_data(1 , 'B')        
g.add_vertex_data(2 , 'C')        
g.add_vertex_data(3 , 'D') 

g.add_edges(0,1,3)
g.add_edges(0,2,2)
g.add_edges(2,1,1)
g.add_edges(3,0,4)

g.print_graph()
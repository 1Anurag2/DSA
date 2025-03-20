vertex_data = ['A','B','C','D']

adjacency_matrix = [
    [0,1,1,1],    #Edges for A
    [1,0,1,0],    #Edges for B
    [1,1,0,0],    #Edges for C
    [1,0,0,0]     #Edges for D
]

def print_adjacency_Matrix(matrix):
    print('\nAdjacency Matrix')
    for row in matrix:
        print(row)

print('Vertex data : ', vertex_data)
print_adjacency_Matrix(adjacency_matrix)
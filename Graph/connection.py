from Implementation import vertex_data,adjacency_matrix,print_adjacency_Matrix
from Implementation import *

def print_connections(matrix , vertices):
    print('\nConnection for each vertex')
    for i in range(len(vertices)):
        print(f"{vertices[i]} :",end=" ")
        for j in range(len(vertices)):
            if matrix[i][j]:
                print(vertices[j] , end=" ")
        print()

print_connections(adjacency_matrix,vertex_data)
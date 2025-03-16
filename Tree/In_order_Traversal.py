class Tree:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def InOrderTraversal(node):
    if node is None:
        return
    InOrderTraversal(node.left)
    print(node.data , end=" , ")
    InOrderTraversal(node.right)

root = Tree('R')
nodeA = Tree('A')
nodeB = Tree('B')
nodeC = Tree('C')
nodeD = Tree('D')
nodeE = Tree('E')
nodeF = Tree('F')
nodeG = Tree('G')

root.left = nodeA
root.right = nodeB
nodeA.left = nodeC
nodeA.right = nodeD
nodeB.left = nodeE
nodeB.right = nodeF
nodeF.left = nodeG

InOrderTraversal(root)
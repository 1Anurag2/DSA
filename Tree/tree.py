class tree:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

root = tree('R')
nodeA = tree('A')
nodeB = tree('B')
nodeC = tree('C')
nodeD = tree('D')
nodeE = tree('E')
nodeF = tree('F')
nodeG = tree('G')

root.left = nodeA
root.right = nodeB
nodeA.left = nodeC
nodeA.right = nodeD
nodeB.left = nodeE
nodeB.right = nodeF
nodeF.left = nodeG


print("Print the path of node G : " ,root.right.right.left.data)

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def count(root):
    if root is None:
        return 0

    return 1 + count(root.left) + count(root.right)


# Creating the tree
root = Node(1)

root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)
root.left.right = Node(5)

print("Node count =", count(root))

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def leafCount(root):
    if root is None:
        return 0

    if root.left is None and root.right is None:
        return 1

    return leafCount(root.left) + leafCount(root.right)


# Creating the tree
root = Node(1)

root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)
root.left.right = Node(5)

print("Leaf count =", leafCount(root))

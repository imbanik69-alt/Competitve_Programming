class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def internal(root):
    if root is None or (root.left is None and root.right is None):
        return 0

    return 1 + internal(root.left) + internal(root.right)


# Creating the tree
root = Node(1)

root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)
root.left.right = Node(5)

print("Internal nodes =", internal(root))

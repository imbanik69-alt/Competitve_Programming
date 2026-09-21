class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def height(root):
    if root is None:
        return 0

    l = height(root.left)
    r = height(root.right)

    return 1 + max(l, r)


# Creating the tree
root = Node(1)

root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)

print("Height =", height(root))

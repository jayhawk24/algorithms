class Node(object):
    def __init__(self, data) -> None:
        self.data = data
        self.next = None


class Linkedlist:
    def __init__(self) -> None:
        self.head = None


if __name__ == "__main__":
    ll = Linkedlist()
    ll.head = Node(20)
    

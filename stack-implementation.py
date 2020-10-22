class stack(object):

    stack_array = []
    top = -1

    def __init__(self, size) -> None:
        self.size = size
        self.stack_array = [None] * size
        print("Stack Created")

    def push(self, elem):
        self.top += 1
        self.stack_array[self.top] = elem
        print("Item Added")
        self.display()

    def pop(self):
        self.top -= 1
        print("Item Deleted")
        self.display()

    def display(self):
        print(self.stack_array[0:self.top+1])

if __name__ == "__main__":
    s = stack(10)
    s.pop()
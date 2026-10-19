class Node:
    def __init__(self, val):
        self.data = val
        self.next = None


def countnode(head):
    count = 0
    current = head

    while current is not None:
        count += 1
        current = current.next

    return count


def array_to_linked_list(arr):
    if not arr:
        return None

    head = Node(arr[0])
    current = head

    for i in range(1, len(arr)):
        current.next = Node(arr[i])
        current = current.next

    return head


if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5]

    # Construct the Linked List from array
    head = array_to_linked_list(arr)

    # Pass the head pointer of the Linked List
    print("Total nodes:", countnode(head))
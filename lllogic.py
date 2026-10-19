class Node:
    def __init__(self,val):
        self.data=val
        self.next=None

def array_to_linkedlist(arr):

        if not arr:
            return None;

        head=Node(arr[0])
        current=head

        for i in range(1,len(arr)):
            current.next=Node(arr[i])
            current=current.next

        return head

def countnode(head):
        count=0
        current=head

        while current is not None:
            count+=1
            current=current.next

        return count 

if __name__ == "__main__":
        arr=[1,2,3,4,5]
        head=array_to_linkedlist(arr)
        print("Total nodes:",countnode(head))
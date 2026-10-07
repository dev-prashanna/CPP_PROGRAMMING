#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;

    }
};

class List{
    Node* head;
    Node* tail;

    public:
      List(){
        head=tail=NULL;
      }

      void push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            }
            else{
                newnode->next=head;
                head=newnode;
        }
      }

    void pop_front(){
        if(head==NULL){
            std::cout<<"List is empty\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
      void printList(){
        Node* temp=head;
        while(temp!=NULL){
            std::cout<<temp->data<<"->";
            temp=temp->next;

        }
        std::cout<<"NULL\n";
      }

      void pop_back(){
        if (head==NULL){
            std::cout<<"List is empty\n";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }

};

int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.pop_front();
    ll.printList();
    ll.pop_back();
    ll.printList();
    return 0;

}


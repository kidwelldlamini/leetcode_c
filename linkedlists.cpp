#include <iostream>
using namespace std;

//defining a linkedlist node(single-linked list)

struct Node
{
    int data;
    struct Node *next;
};
class Linkedlist
{
public:
    Linkedlist()
    {
        head = nullptr;
        tail = nullptr;
    }
    //adding an item at the tail
    void createNode(int value)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->next = nullptr;
    
    //checking if list is empty
    if(head == nullptr)
    {
         head = temp;
         tail = temp;
    }
    else
    {
        tail->next = temp;
        temp = tail;
    }

    }
    //iterating through the list
    void PrintList()
    {
        Node *current = head;

        while(current != nullptr)
        {
            cout << "value: " << current->data << endl;
            current = current->next;
        }
    }
    //inserting an item at the head
    void addtoHead(int value)
    {
        Node *ToHead = new Node;
        ToHead->data = value;
        ToHead->next = head;
        
        head = ToHead;
    }
    //inser at the tail
    void addToTail(int value)
    {
        Node *ToTail = new Node;
        ToTail->data = value;
        ToTail->next = nullptr;

        if(tail == nullptr)
        {
            head = ToTail;
            tail = ToTail;
        }
        else
        {
            tail->next = ToTail;
            tail = ToTail;
        }
    }
    //insert at a particular point
    void AnyPoint(int pos, int value)
    {
        Node *p = new Node;
        p->data = value;
        Node *cur =  new Node;
        Node *prev = new Node;
        cur = head;

        for(int i = 1 ;i < pos; i++)
        {
            prev = cur;
            cur = cur->next;
        }
        prev->next = p;
        p->next = cur;

    }

private:

    Node *head;
    Node *tail;

};

int main()
{
    Linkedlist list;
    list.createNode(5);
    list.PrintList();
    list.addtoHead(30);
    list.addToTail(35);
    list.AnyPoint(2 ,70);
    list.PrintList();
}
#include <iostream>
using namespace std;

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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1.empty() && list2.empty())
        {
            return;
        }
        if(!list1){return list2};
        if(!list2){return list1};

        ListNode* mergedList = list1;
        
    }

};
#include <iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node* next;

    Node( int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};
int getMid(Node* head)
{
    //Empty linked list--
   if(head==NULL)
   {
    cout <<"Linked list is empty" <<endl;
   }
   //Only one element--
   if(head -> next == NULL)
   {
    return head-> data;
   }
   Node *slow = head;
   Node *fast = head;
   while(fast != NULL)
   {
    fast = fast -> next;
    if(fast!= NULL)
    {
        fast = fast->next;
        slow = slow-> next;
    }
   }
   return slow -> data;
}
int main(int argc, char const *argv[])
{
    Node  *head = new Node(10);
    Node  *second = new Node(20);
    Node  *third = new Node(25);
    Node  *fourth = new Node(40);
    Node  *fifth = new Node(50);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    int ans = getMid(head);
    cout <<"Mid element : " <<ans <<endl;
    return 0;
}

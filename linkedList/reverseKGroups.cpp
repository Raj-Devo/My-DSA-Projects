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
void print( Node* head)
{
       Node* temp = head;
       while(temp != NULL)
       {
        cout <<temp->data <<" ";
        temp = temp -> next;
       }
       cout <<endl;
}
int getLen(Node* head)
{
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
       temp = temp -> next;
       len++;
    }
    return len;
}
    Node* reverseKGroup (Node* head, int k) {
      if(head == NULL)
      {
          return NULL;
      }
       int len = getLen(head);
       if(k>len)
       {
           return head;
       }
      //Reversing k groups--
      Node* prev = NULL;
      Node* curr = head;
      Node* temp = curr -> next;
      int count = 0;
       while(count < k)
       {
           temp = curr -> next;
           curr -> next = prev;
           prev = curr;
           curr = temp;
           count++;
       }
       if(temp != NULL)
       {
           Node* recAns = reverseKGroup(temp , k);
            head -> next = recAns;
       }
       return prev;
    }
int main(int argc, char const *argv[])
{
    Node  *head = new Node(10);
    Node  *second = new Node(20);
    Node  *third = new Node(30);
    Node  *fourth = new Node(40);
    Node  *fifth = new Node(50);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    print(head);
    head = reverseKGroup(head , 2);
    print(head);
    return 0;
}
#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack <int> &s , int target)
{
    //Base case :
    if(s.empty())
    {
        s.push(target);
        return;
    }
    //Fetch top element :
    int topElement = s.top();
    //Remove the element :
    s.pop();
    //Recursive call :
    insertAtBottom(s , target);
    //backtracking :
    s.push(topElement);
}
int main(int argc, char const *argv[])
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
     if(s.empty())
     {
        cout <<"Stack is empty , cannot insert element";
     }
     else
     {
        int target = s.top();
        s.pop();
        insertAtBottom(s , target);
     }
     //Printing :
     while(!s.empty())
     {
        cout <<s.top() <<" ";
        s.pop();
     }
    return 0;
}

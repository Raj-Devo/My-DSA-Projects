#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack <int> &s, int target)
{
    //Base Case :
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
void reverse(stack <int> &s)
{
    //Base Case  :
    if(s.empty())
    {
        return;
    }
    
    //Step 1 :
    int target = s.top();
    //Step 2 :
    s.pop();
    //Step 3 :
    reverse(s);
    //step 4 :
    insertAtBottom(s , target);
}
int main(int argc, char const *argv[])
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
     reverse(st);
     cout <<"Printing after reversing : " <<endl;
    while(!st.empty())
     {
        cout <<st.top() <<" ";
        st.pop();
     }
    return 0;
}

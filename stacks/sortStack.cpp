#include <iostream>
#include <stack>
using namespace std;
void insertSorted(stack <int> &s , int target)
{
    //If Stack is empty :
    if(s.empty())
    {
        s.push(target);
        return;
    }
    // If top is greater than target :
    if(s.top() >= target)
    {
        s.push(target);
        return;
    }

    //Step 1 :
    int topElement = s.top() ;
    //Step 2 :
     s.pop();
     //Step 3 :
     insertSorted(s , target);
     //Step 4 :
     s.push(topElement);
}
void sortStack(stack <int> &s)
{
    //Base Case :
    if(s.empty())
    {
        return;
    }
    //step 1 :
    int target = s.top();
    //Step 2 :
    s.pop();
    //Step 3 :
    sortStack(s);
    //Step 4 :
    insertSorted(s , target);
}
int main(int argc, char const *argv[])
{
    stack <int> st;
    st.push(3);
    st.push(1);
    st.push(5);
    st.push(4);
    st.push(2);
     sortStack(st);
     cout <<"Printing after reversing : " <<endl;
    while(!st.empty())
     {
        cout <<st.top() <<" ";
        st.pop();
     }
    return 0;
}
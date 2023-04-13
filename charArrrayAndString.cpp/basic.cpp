#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char name[100];
    // cin >> name;
    cin.getline(name, 50);
    cout <<"Name : " <<name <<endl;
    // Length : 
    int len = 0;
    for(int i = 0 ; name[i] != '\0' ; i++)
    {
        len++;
    }
    cout <<"Length : " <<len <<endl;
    //Reverse --
    int i = len - 1;
    int j = 0;
    while(i>j)
    {
       swap(name[i] , name[j]);
       i--;
       j++;
    }
    cout <<"Reversed name : " <<name <<endl;
    //Replacing spaces;
    char arr[100];
    cout <<"Enter the string : ";
cin.getline(arr , 100);
for(int i = 0; arr[i] != '\0' ; i++)
{
    if(arr[i] == ' ')
    {
        arr[i] = '@';
    }
}
cout <<arr <<endl;
 // To upperCase--
    for (int i = 0 ; i<len ; i++)
    {
        if((int)name[i] >= 97 && (int)name[i] <= 122)
        {
            name[i] -= 32;
        }
    }
    cout <<"New name : " <<name <<endl;
    return 0;
}

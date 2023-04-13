#include <iostream>
#include <string>
using namespace std;
void printSubseq( string str , string output ,int n , int i)
{
   // Base Case --
   if( i >= n)
   {
    cout <<output <<" ";
    return;
   }
   // Exclude --
   printSubseq( str ,output , n , i+1 );
   //Include
   output += str[i];
   printSubseq( str ,output, n , i+1 );
}
using namespace std;
int main(int argc, char const *argv[])
{
    string str = "abc" ;
    string output = "" ;
    int n = str.length();
    int i = 0;
    printSubseq( str , output , n , i ); 
    return 0;
}

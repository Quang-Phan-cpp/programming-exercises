#include <iostream>

using namespace std;

int strlen( const char *a)
{
    int length=0;
    while( a[length]!=0){
        length++;
    }
    return length;
}

bool is_palindrome(char a[])
{
    int x = strlen(a);
    for( int i=0; i<x/2; i++){
        if( *(a+i)!=*(a+x-i-1)){
            return false;
        }
    }
    return true;
}

int main()
{
    char s[]="HelloUET , TEUolleH";
    cout << s << endl;
    cout << ( is_palindrome(s) ? "YES" : "No");
    return 0;
}

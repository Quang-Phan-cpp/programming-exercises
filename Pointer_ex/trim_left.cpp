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

void trim_left(char a[])
{
    int x = strlen(a);
    for( int i=0; i<x; i++){
        if(*(a+i)!=' '){
            cout << *(a+i);
        }
    }
}

int main()
{
    char s[]="          Hello, UET!**";
    cout << s << endl;
    trim_left(s);
    return 0;
}

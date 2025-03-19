#include <iostream>

using namespace std;

int strlen( const char*a)
{
    int length=0;
    while( *(a+length)!='\0'){
        length++;
    }
    return length;
}

void trim_right( char a[])
{
    int n = strlen(a);
    int j=0;
    for( int i=n-1; i>=0; i--){
        if( *(a+i)=='*'){
            j++;
        }
        else break;
    }
    for( int i=0; i<n-j; i++){
        cout << *(a+i);
    }
}

int main()
{
    char s[]="Hello, UET********";
    cout << s << endl;
    trim_right(s);
    return 0;
}

#include <iostream>

using namespace std;

int strlen(char* s)
{
    int length = 0;
    while( *(s+length)!='\0'){
        length++;
    }
    return length;
}

void reversed( char a[])
{
    int n = strlen(a);
    for( int i=0; i<n/2; i++){
        char temp = *(a+i);
        *(a+i)=*(a+n-i-1);
        *(a+n-i-1)= temp;
    }
}

int main()
{
    char s[]="Hello, UET!";
    cout << s << endl;
    reversed(s);
    cout << s << endl;
}

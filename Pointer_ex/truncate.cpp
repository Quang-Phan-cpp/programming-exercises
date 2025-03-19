#include <iostream>

using namespace std;

int strlen( const char* s)
{
    int length=0;
    while( s[length]!='\0'){
        length++;
    }
    return length;
}

void truncate( char a[], int n)
{
    int x=strlen(a);
    if(x>n){
        *(a+n)='\0';
    }
}

int main()
{
    char s[]="Hello, UET!";
    cout << s << endl;
    int n;
    cin >> n;
    truncate(s, n);
    cout << s << endl;
    return 0;
}

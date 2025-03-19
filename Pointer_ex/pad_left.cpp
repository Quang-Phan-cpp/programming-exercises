#include <iostream>

using namespace std;

int strlen( const char* s)
{
    int length=0;
    while( *(s+length)!='\0'){
        length++;
    }
    return length;
}

pad_left(char a[], int n)
{
    int x=strlen(a);
    if( x<n){
        for( int i=x; i>=0; i--){
            *(a+i+n-x)=*(a+i);
        }
        for( int i=0; i<n-x; i++){
            *(a+i)='*';
        }
        *(a+n)='\0';
    }
}

int main()
{
    char s[]="Hello, UET!";
    cout << s << endl;
    int n;
    cin >> n;
    pad_left(s, n);
    cout << s << endl;
    return 0;
}

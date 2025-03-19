#include <iostream>

using namespace std;

int strlen(const char*s)
{
    int length=0;
    while( *(s+length)!='\0'){
        length++;
    }
    return length;
}

void delete_char( char a[], char c)
{
    int n=strlen(a);
    int i=0;
    for (int j=0; j<n; j++) {
        if (*(a+j) != c) {
            *(a+i) = *(a+j);
            i++;
        }
    }
    a[i] = '\0';
}

int main()
{
    char s[]="Hello, UET!";
    char c='H';
    cout << s << endl;
    delete_char(s,c);
    cout << s << endl;
    return 0;
}

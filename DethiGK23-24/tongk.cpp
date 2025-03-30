#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for( int i=0; i<n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    sort(a, a+n);
    int l=0;
    int r=n-1;
    while(l<r){
        int sum = a[l]+a[r];
        if( sum==k){
            cout << a[l] << " " << a[r] << endl;
            l++;
            r--;
        }
        else if( sum<k){
            l++;
        }
        else {
            r--;
        }
    }
    return 0;
}

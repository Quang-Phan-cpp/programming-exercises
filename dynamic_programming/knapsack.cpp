#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, maxvalue;
    cin >> n >> maxvalue;
    int w[n+1], v[n+1];

    for( int i=1; i<=n; i++){
        cin >> w[i]; // đọc trọng lượng của n đồ vật
    }
    for( int i=1; i<=n; i++){
        cin >> v[i]; // đọc giá trị của các món đồ
    }

    int dp[n+1][maxvalue+1]; // bảng các giá trị có thể nhận được
    memset(dp,0,sizeof(dp)); // khởi tạo giá trị mảng = 0

    for( int i=1; i<=n; i++){
        for( int j=1; j<=maxvalue; j++){

            // Nếu ko lựa chọn đồ vật i
            dp[i][j] = dp[i-1][j]; // giá trị sau cập nhật = giá trị trước đó

            // Nếu có thể đưa đồ vật thứ i vào túi
            if( j>=w[i]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] +v[i]);
            }
        }
    }
    cout << dp[n][maxvalue] << endl;
}


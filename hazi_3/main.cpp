#include <iostream>

using namespace std;

int main()
{
    int m[100][100], n, szorzat=1;
    cout << "n=";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            szorzat*=i;
            szorzat*=j;
            m[i][j]=szorzat%10;
            szorzat=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n;
    cout << "n=";
    cin >> n;
    cout << endl;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        cin >> a[i][j];
       }
    }

    for(int i=0;i<n;i++){
            cout << endl;
        for(int j=0;j<n-1;j++){
            if(i<=j){
                a[i][j]=a[i][j+1];
            }
            cout << a[i][j] << " ";
        }
    }
    return 0;
}

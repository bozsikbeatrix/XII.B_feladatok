#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n, db=0;
    double S=0;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
            if(i<j && a[i][j]>0){
            S+=a[i][j];
            db++;
          }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                if(i<j && a[i][j]>0){
                    if(db==0){
            cout << "Nincs";

        }else{
            S=S/db;
            cout << S;
        }
                }

        }
    }
    return 0;
}

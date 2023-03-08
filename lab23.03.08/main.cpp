#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[100][100], m, n;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    ifstream in("bac.txt");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            in >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int max=0;
        for(int j=0;j<n;j++){
            if(a[i][j]>max && a[i][j]<21){
                max=a[i][j];
            }
        }
            if(max==0){
                cout << "nu exista" << endl;
            } else{
                cout << max << endl;
            }

    }
    return 0;
}

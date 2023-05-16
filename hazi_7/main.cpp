#include <iostream>

using namespace std;

int main()
{
    int n,m=1, E=0;
    cin >> n;
    for(int i=1;i<=n;i++){
     m=m*i;
        if(i%2==0){
            E=E-m;
        }else{
            E=E+m;
        }
     }

    cout << E;
    return 0;
}

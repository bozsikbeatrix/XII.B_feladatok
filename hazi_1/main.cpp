#include <iostream>

using namespace std;

int main()
{
    int a[100], b[100],n, Sa=0, Sb=0;
    cout << "n=";
    cin >> n;

    cout << endl;

    for(int i=0; i<n; i++){
        cout << "a[" << i << "]=";
        cin >> a[i];
        if(a[i]%2==0){
            Sa=Sa+a[i];
        }
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        cout << "b[" << i << "]=";
        cin >> b[i];
        if(b[i]%2!=0){
            Sb=Sb+b[i];
        }
    }

    cout << endl;

    if(Sb<Sa){
        cout<<Sb;
    }
    return 0;
}

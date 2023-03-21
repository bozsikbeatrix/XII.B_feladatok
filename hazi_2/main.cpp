#include <iostream>

using namespace std;

int main()
{
    int v[100], n, k, nr=0, szamjegy, hany=0;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(int i=0; i<n; i++){
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        while(v[i]>0){
            szamjegy=v[i]%10;
            v[i] = v[i] / 10;
            nr++;
            }
            if(nr>k){
                hany++;
            }
            nr=0;
    }
    cout << hany;
    return 0;
}

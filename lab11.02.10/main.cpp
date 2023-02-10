#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, p, i, k3=0, k5=0;
    ofstream out("bac.txt");
    cout << "n=";
    cin >> n;
    for(i=1;i<n+1;i++){
        int j=i;
        while(j%3==0){
            k3++;
            j/=3;
        }
        while(j%5==0){
            k5++;
            j/=5;
        }
    }
    k3/=2;
    if(k3<k5){
        out << k3;
    }else{
        out << k5;
    }
    return 0;
}

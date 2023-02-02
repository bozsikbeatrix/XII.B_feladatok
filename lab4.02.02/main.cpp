#include <iostream>

using namespace std;

void secventa(int &n){
int ujszam=0, hatvany=1, szamjegy;
while(n>0){
    szamjegy=n%10;
    if(n%100==22){
        hatvany=hatvany*10;
    }else{
        ujszam=szamjegy*hatvany+ujszam;
        hatvany=hatvany*10;
    }
    n=n/10;
}
n=ujszam;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    secventa(n);
    cout << n;
    return 0;
}

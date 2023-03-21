#include <iostream>
#include <string>

using namespace std;

string tukorben(string szo){
int i,j;
i=0, j=szo.size();
while(i!=j){
    for(i=0;i<szo.size();i++){
        for(j=szo.size();j>=0;j--){
            swap(szo[i],szo[j]);
        }
    }
}
}

int main()
{
    string szoveg, p, szo;
    cout << "Kerem a szoveget: ";
    getline(cin, p);
    bool letezik=false;
    p=p+" ";

    for (int j=0; j<p.size() ; j++){
    if (p[j]==' '){
        if(szo.size()%2!=0 && szo!=tukorben(szo)){
            letezik=true;
            szoveg=szoveg+tukorben(szo)+" ";
        } else {
            szoveg=szoveg+szo+ " ";
        }
        szo= " ";
    }
    else{
        szo=szo+p[j];
    }
    }
    if(letezik){
        cout << szoveg;
    } else {
        cout << "nu exista";
    }


    return 0;
}


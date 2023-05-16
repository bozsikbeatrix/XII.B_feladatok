#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, temp, szamjegy, igaz, db=0;
    ifstream in ("atestat.in");
    ofstream out ("atestat.out");
    in >> n;
    while(in>>n){
        temp=n;
        while(temp!=0){
            szamjegy = temp%10;
            if(szamjegy%2==0){
                temp=temp/10;
                igaz=1;
            } else {
                temp=0;
                igaz=0;
            }
        }
        if(igaz==1){
            db++;
            out << n;
        }
    }
    if(db==0){
        out << "nem letezik";
    }
    in.close();
    out.close();
    return 0;
}

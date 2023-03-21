#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[100][100];
    double felette=0, alatta=0, cr1=0,cr2=0, felette_atlag=0, alatta_atlag=0, kulonbseg;
    int n;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            in >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j && a[i][j]>0){
                felette+=a[i][j];
                cr1++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j && a[i][j]>0){
                alatta+=a[i][j];
                cr2++;
            }
        }
    }


if (cr1 > 0) {
    felette_atlag = felette / cr1;
}


if (cr2 > 0) {
    alatta_atlag = alatta / cr2;
}

    kulonbseg=  felette_atlag-alatta_atlag ;
    out << kulonbseg;
    in.close();
    out.close();
    return 0;
}

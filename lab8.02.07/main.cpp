#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int prev, hossz=0, next, maxhossz=0,cmaxhossz=0;
    ifstream in("bac.txt");
    in>>prev;
    while(in>>next){
        if(next==prev){
            hossz++;
        } else {
            if(prev==hossz){
                maxhossz+=hossz;
            } else {
                if(maxhossz>cmaxhossz){
                    cmaxhossz=maxhossz;
                }
                maxhossz=0;
            }
         hossz=1;
        }
        prev=next;
    }
    cout << cmaxhossz;
    return 0;
}

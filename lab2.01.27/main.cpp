#include <iostream>

using namespace std;

int main()
{
    string kod;
    cout << "Kerem a szoveget: ";
    getline (cin, kod);
    size_t bfound=kod.find ("b");
    while(bfound!= string::npos){
        kod.replace(bfound, 1 , "a");
        bfound=kod.find("b", bfound+1);
    }
    size_t cfound=kod.find ("c");
    while(cfound!= string::npos){
        kod.replace(cfound, 1 , "a");
        cfound=kod.find("c", cfound+1);
    }
    size_t dfound=kod.find ("d");
    while(dfound!= string::npos){
        kod.replace(dfound, 1 , "a");
        dfound=kod.find("d", dfound+1);
    }
    size_t ffound=kod.find ("f");
    while(ffound!= string::npos){
        kod.replace(ffound, 1 , "e");
        ffound=kod.find("f", ffound+1);
    }
    size_t gfound=kod.find ("g");
    while(gfound!= string::npos){
        kod.replace(gfound, 1 , "e");
        gfound=kod.find("g", gfound+1);
    }
    size_t hfound=kod.find ("h");
    while(hfound!= string::npos){
        kod.replace(hfound, 1 , "e");
        hfound=kod.find("h", hfound+1);
    }
    size_t jfound=kod.find ("j");
    while(jfound!= string::npos){
        kod.replace(jfound, 1 , "i");
        jfound=kod.find("j", jfound+1);
    }
    size_t kfound=kod.find ("k");
    while(kfound!= string::npos){
        kod.replace(kfound, 1 , "i");
        kfound=kod.find("k", kfound+1);
    }
    size_t lfound=kod.find ("l");
    while(lfound!= string::npos){
        kod.replace(lfound, 1 , "i");
        lfound=kod.find("l", lfound+1);
    }
    size_t mfound=kod.find ("m");
    while(mfound!= string::npos){
        kod.replace(mfound, 1 , "i");
        mfound=kod.find("m", mfound+1);
    }
    size_t nfound=kod.find ("n");
    while(nfound!= string::npos){
        kod.replace(nfound, 1 , "i");
        nfound=kod.find("n", nfound+1);
    }
    size_t pfound=kod.find ("p");
    while(pfound!= string::npos){
        kod.replace(pfound, 1 , "o");
        pfound=kod.find("p", pfound+1);
    }
    size_t qfound=kod.find ("q");
    while(qfound!= string::npos){
        kod.replace(qfound, 1 , "o");
        qfound=kod.find("q", qfound+1);
    }
    size_t rfound=kod.find ("r");
    while(rfound!= string::npos){
        kod.replace(rfound, 1 , "o");
        rfound=kod.find("r", rfound+1);
    }
    size_t sfound=kod.find ("s");
    while(sfound!= string::npos){
        kod.replace(sfound, 1 , "o");
        sfound=kod.find("s", sfound+1);
    }
    size_t tfound=kod.find ("t");
    while(tfound!= string::npos){
        kod.replace(tfound, 1 , "o");
        tfound=kod.find("t", tfound+1);
    }
    size_t vfound=kod.find ("v");
    while(vfound!= string::npos){
        kod.replace(vfound, 1 , "u");
        vfound=kod.find("v", vfound+1);
    }
    size_t wfound=kod.find ("w");
    while(wfound!= string::npos){
        kod.replace(wfound, 1 , "u");
        wfound=kod.find("w", wfound+1);
    }
    size_t xfound=kod.find ("x");
    while(xfound!= string::npos){
        kod.replace(xfound, 1 , "u");
        xfound=kod.find("x", xfound+1);
    }
    size_t yfound=kod.find ("y");
    while(yfound!= string::npos){
        kod.replace(yfound, 1 , "u");
        yfound=kod.find("y", yfound+1);
    }
    size_t zfound=kod.find ("z");
    while(zfound!= string::npos){
        kod.replace(zfound, 1 , "u");
        zfound=kod.find("z", zfound+1);
    }

    cout << kod;
    return 0;
}

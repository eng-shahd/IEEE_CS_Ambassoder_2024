#include <iostream>

using namespace std;

int main()
{
    int n,dn,h,v,lh,lv,c ,i;
    i=0;
    bool bh,bv;
    bh=bv=true;
    int arrh[100]={0};
    int arrv[100]={0};

    c=1;
    cin>>n;
    dn=n*n;
    while(dn--){
        bh=bv=true;
        cin>>h;
        cin>>v;

        for(int i=0; i<100 ; i++){
            if(h==arrh[i]){
                bh=false;
                break;
            }
            if(v==arrv[i]){
                bv=false;
                break;
            }
        }
        if(bh&&bv){
            arrv[i]=v;
            arrh[i]=h;
            i++;

            cout<<c<<" ";
        }

        c++;
    }

    return 0;
}

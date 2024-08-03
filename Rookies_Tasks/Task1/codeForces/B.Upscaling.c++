
#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0 ; i<n ; i++){
            if(i%2==0){
            for(int j=0 ; j<n ; j++){

                if(j%2==0)
                    cout<<"##";
                else
                    cout<<"..";


            }
            cout<<endl;
            for(int j=0 ; j<n ; j++){

                if(j%2==0)
                    cout<<"##";
                else
                    cout<<"..";
            }

            }
            else{
               for(int j=0 ; j<n ; j++){

                if(j%2==0)
                    cout<<"..";
                else
                    cout<<"##";


            }
             cout<<endl;
            for(int j=0 ; j<n ; j++){

                if(j%2==0)
                    cout<<"..";
                else
                    cout<<"##";

            }
            }
            cout<<endl;
        }

    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
 int n,i,imin;
 cout<<"numero altleti";
 cin>>n;
 vector<string>nomi[n],naz[n];
 vector<float>tem[n];
 for(i=0,i<n,i++) {
    cout<<"nome atleta";
    cin>>nomi[i];
    cout<<"nazionale";
    cin>>naz[i];
    cout<<"tempo";
    cin>>tem[i];
 }
 imin=0;
 for(i=0,i<n,i++) {
    if ( tem[i]<tem[imin]) {
        imin=i;
    }
 }
 cout<<"vincitore"<< nomi[imin];
 cout<<"nazionale"<< naz[imin];
 cout<<"tempo"<< tem[imin];
}



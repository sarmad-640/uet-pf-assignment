#include <iostream>
using namespace std;

main(){
    float vp, fp, te, rs=1.94;
    int tv, tf;
    cout<<"Enter vegetable price per kilogram (in coins): ";
    cin>>vp;    
    cout<<"Enter fruit price per kilogram (in coins): ";
    cin>>fp;    
    cout<<"Enter total kilogram of vegetables: ";
    cin>>tv;    
    cout<<"Enter total kilogram of fruits: ";
    cin>>tf;    
   te = ( (vp*tv)+(fp*tf) )/ 1.94;
   cout<<"Total earning in Rupees (Rps): "<<te;

}
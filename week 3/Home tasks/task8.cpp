#include <iostream>
using namespace std;

main(){
    float vp, fp, te;
    int tv, tf;
    cout<<"Enter vegetable price per kilogram (in coins): ";
    cin>>vp;    
    cout<<"Enter fruit price per kilogram (in coins): ";
    cin>>fp;    
    cout<<"Enter total kilogram of vegetables: ";
    cin>>tv;    
    cout<<"Enter total kilogram of fruits: ";
    cin>>tf;    
   te = (vp*tv)+(fp*tf);
   cout<<"Total earning in Rupees (Rps): "<<te;

}
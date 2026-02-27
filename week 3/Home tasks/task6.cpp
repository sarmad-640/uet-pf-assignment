#include <iostream>
using namespace std;

main(){
    int fb, cb, ab, cf, cs;
    cout<<"Enter the size of fertilizer bag in pounds: ";
    cin>>fb;    
    cout<<"Enter the cost of the bag: $";
    cin>>cb;
    cout<<"Enter the area in square feet that can be covered by the bag: ";
    cin>>ab;
    cf = cb/fb;    
    cout<<"Cost of fertilizer per pound: $";
    cin>>cf;
    cs = cb/ab;
    cout<<"Cost of fertilizer per foot: $";
    cin>>cs;
}
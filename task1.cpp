#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,y1,x2,y2,number;
    double distance;
    do{
        cout<<"enter the first two points"<<endl;
        cin>>x1>>y1;
        
        cout<<"enter the seconed twopoints"<<endl;
        cin>>x2>>y2;
        
        distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        cout<<"the distance ="<<distance<<endl;
        
        cout<<"enter any number to continue and zero to stop"<<endl;
        cin>>number;



        
    }while(number!= 0);
    return 0;
}
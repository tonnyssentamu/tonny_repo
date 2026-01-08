#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float w, k;
    int x, y, z;
    cout<<"Enter value of x"<<endl;
    cin>>x;
    cout<<"Enter value of y"<<endl;
    cin>>y;

    z = x+y; 
    cout<<"z = "<<z<<endl;

    w = cos(x+y);
    k =sin(z);
    cout <<"k = "<<k<<endl;
    cout<<"w = "<<w<<"\n";

    return 0;

}
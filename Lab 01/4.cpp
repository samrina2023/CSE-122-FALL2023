#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>=0)
    {
        cout<<"x value is positive"<<endl;
        if(x%2==0)
        {
            cout<<"x value is even"<<endl;
            if(x>999 & x<100000)
                {
                    cout<<"x value contains 4digit number"<<endl;
                }
        }

    }
}

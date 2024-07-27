#include<iostream>
using namespace std;
int main ()
{
    int hours,choice,Days,Minutes,Seconds;

while (true)
{   
     cout<<"Program to convert time: "<<endl;
    cout<<"1.Convert from days to (Hours, Minutes, Seconds). "<<endl;
    cout<<"2.Convert from Hours to (days, Minutes, Seconds).  "<<endl;
    cout<<"3.Convert from Minutes to (days, Hours, Seconds).  "<<endl;
    cout<<"4.Convert from Seconds to (days, Hours, Minutes).  "<<endl;
    cout<<"5.Exit.  "<<endl;

    cout<<"Choose number =";
    cin>>choice;
    switch (choice)
    {
    case 1:

        cout<<"Days = ";
        cin>>Days;

        hours= Days*24;
        cout<<"Hours = "<<hours<<" hour"<<endl;

        Minutes=hours*60;
        cout<<"Minutes = "<<Minutes<<" minute"<<endl;

        Seconds=Minutes*60;
        cout<<"Seconds = "<<Seconds<<" second"<<endl;

        break;
    case 2:
        cout<<"Hours = ";
        cin>>hours;

        Days= hours/24;

        Minutes=hours*60;

        Seconds=Minutes*60;

        cout<<"Days = "<<Days<<" day"<<endl;
        cout<<"Minutes = "<<Minutes<<" minute"<<endl;
        cout<<"Seconds = "<<Seconds<<" second"<<endl;
        break;
    case 3:
        cout<<"Minutes = ";
        cin>>Minutes;

        hours= Minutes/60;

        Days= hours/24;

        Seconds=Minutes*60;

        cout<<"Days = "<<Days<<" day"<<endl;
        cout<<"Hours = "<<hours<<" hour"<<endl;
        cout<<"Seconds = "<<Seconds<<" second"<<endl;
        break;
    case 4:
        cout<<"Seconds = ";
        cin>>Seconds;

        Minutes= Seconds/60;

        hours= Minutes/60;

        Days= hours/24;

        cout<<"Days = "<<Days<<" day"<<endl;
        cout<<"Hours = "<<hours<<" hour"<<endl;
        cout<<"Minutes = "<<Minutes<<" minutes"<<endl;
        break;
    case 5:
        return 0;
        break;
    
    default:
    cout<<"Invalid Operation! ";
        break;
    }



   
}
 return 0;

}
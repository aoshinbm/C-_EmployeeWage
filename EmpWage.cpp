#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int wageperhr=20;
int wage;
int fullday=8;
int parttime=5;

void fulltimejob()
{
    wage=wageperhr*fullday;
    cout<<"\nFULL TIME Wage :" <<wage;
}
void parttimejob()
{
    wage=wageperhr*parttime;
    cout<<"\n PART TIME Wage :" <<wage;
}
void attendance(){
    srand(time(0));
    int attendance =(rand()%3);
    cout<< attendance;
    if (attendance == 1)
    {
        cout<<"\nEmployee is present ";
        fulltimejob();
    } 
    else if (attendance == 2)
    {
        cout<<"\nEmployee is present";
        parttimejob();
    }    
    else
    {
        cout<<"\nEmployee is absent";
    }    

}
int main(){
    attendance();
    return 0;

}
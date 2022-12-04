#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int wageperhr=20;
int wage, monthly_wage;
int fullday=8;
int parttime=5;
int month=24;
void fulltimejob()
{
    wage=wageperhr*fullday;
    cout<<"\nFULL TIME  daily Wage :" <<wage;
    monthly_wage=wage*month;
    cout<<"\nFULL TIME Monthly Wage :" <<monthly_wage;
}
void parttimejob()
{
    wage=wageperhr*parttime;
    cout<<"\n PART TIME daily Wage :" <<wage;
    monthly_wage=wage*month;
    cout<<"\n PART TIME Monthly Wage :" <<monthly_wage;
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
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int wageperhr=20;
int wage;
int fullday=8;

void fulltimejob()
{
    wage=wageperhr*fullday;
    cout<<"\nFULL TIME Wage :" <<wage;
}
void attendance(){
    srand(time(0));
    int attendance =(rand()%2);
    cout<< attendance;
    if (attendance == 1)
    {
        cout<<"\nEmployee is present ";
        fulltimejob();
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
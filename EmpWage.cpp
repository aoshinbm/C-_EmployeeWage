#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void attendance(){
    srand(time(0));
    int attendance =(rand()%2);
    cout<< attendance;
    if (attendance == 1)
    {
        cout<<"\nEmployee is present ";
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
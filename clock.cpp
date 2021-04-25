#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;
float minsi, hoursi;
int main()
{
    /** bool hrmincond;
    hrmincond = minsi <= 9 && minsi >= 0; **/
    cout << "What is the time?" << endl
         << "Hour: ";
    cin >> hoursi;
    cout << "Minute: ";
    cin >> minsi;
    system("CLS");
    do
    {
        if(minsi >= 0 && minsi <= 9)
        {
            system("CLS");
            cout << hoursi << ":0" << minsi << endl;
            Sleep(500);
            minsi++;
        }
        else
        {
            if(hoursi<23){
                    system("CLS");
                cout << hoursi << ":" << minsi << endl;
                Sleep(500);
                system("CLS");
                minsi++;
                if(minsi == 60)
                {
                    system("CLS");
                    hoursi++;
                    minsi = 00;
                }
            }
            else{

                cout << hoursi << ":" << minsi << endl;
                Sleep(500);
                system("CLS");
                minsi++;
                if(minsi == 60)
                {
                    system("CLS");
                    hoursi=0;
                    minsi = 00;
                }
            }
        }
    }
    while(0 == 0);
}

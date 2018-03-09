#include<iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
int main(){
    using namespace std;
    //int hours,minutes,seconds=0;
    int currHours=0,currMinutes=0,currSeconds=0;
    cout<<"Ready?"<<endl;
    system("PAUSE");
    while(true){
        system("cls");
        std::cout<<currHours<<":"<<currMinutes<<":"<<currSeconds<<endl<<flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));  
        currSeconds++;
        if(currSeconds==60){
            currSeconds=0;
            currMinutes++;
        }
        if(currMinutes==60){
            currMinutes=0;
            currHours++;
        }
    }
    return 0;
}
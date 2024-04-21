//
// Created by thres on 06-04-2024.
//
//
// Created by thres on 06-04-2024.
//
#include<bits/stdc++.h>
using namespace std;
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
    int user_throw=0;
    int machine_throw=0;
    bool draw= false;

    srand((unsigned int)(time(NULL)));

    do {
        cout<<"Welcome to ROCK-PAPER-SCISSOR GAME!"<<endl;
        cout<<"1) ROCK"<<endl;
        cout<<"2) PAPER"<<endl;
        cout<<"3) SCISSORS"<<endl;
        cout<<"Selection of your throw: "<<endl;
        cin>>user_throw;


        machine_throw=(rand()%3)+1;

        if (machine_throw == ROCK)
            cout << "Machine throws ROCK." << endl;
        else if (machine_throw == PAPER)
            cout << "Machine throws PAPER." << endl;
        else if (machine_throw == SCISSORS)
            cout << "Machine throes SCISSORS." << endl;
        draw=false;
        if(user_throw==machine_throw)
        {
            draw=true;
            cout<<"DRAW! Play again.";
        }
        else if(user_throw==ROCK && machine_throw==PAPER)
        {
            cout<<"PAPER BEATS ROCK AND YOU LOSE!";
        }
        else if(user_throw==ROCK && machine_throw==SCISSORS)
        {
            cout<<"ROCK BREAKS SCISSORS AND YOU WIN!";
        }
        else if(user_throw==PAPER && machine_throw==ROCK)
        {
            cout<<"PAPER BEATS ROCK AND YOU WIN!";
        }
        else if(user_throw==PAPER && machine_throw==SCISSORS)
        {
            cout<<"SCISSORS CUT THE PAPER AND YOU LOSE!";
        }
        else if(user_throw==SCISSORS && machine_throw==ROCK)
        {
            cout<<"ROCK BEATS SCISSORS AND YOU LOSE!";
        }
        else if(user_throw==SCISSORS && machine_throw==PAPER)
        {
            cout<<"SCISSORS CUT PAPER AND YOU WIN!";
        }
        cout<<endl;

    } while(draw);

    return 0;

}


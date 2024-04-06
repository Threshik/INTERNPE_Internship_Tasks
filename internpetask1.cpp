#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL)); //TO GET THE NON-REPEATING NUMBERS WHILE GENERATING RANDOM NUMBERS

int number=(rand()%100)+1; // number from 1 to 100 (num%100->remainder(0to99) so add 1 to make 1 to 100
int guess=0;
do{
    cout<< "Enter the Guess between 1 to 100: ";
    cin>>guess;

    if(guess<number)
        cout<<"Guess Higher!"<<endl;
    else if(guess>number)
        cout<<"Guess Lower!"<<endl;
    else
        cout<<"You Won!"<<endl;
} while(guess!=number);
return 0;

}
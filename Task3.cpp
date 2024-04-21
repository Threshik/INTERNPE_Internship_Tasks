#include<bits/stdc++.h>
using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string name1;
string name2;
int row,col;
char token='X';
bool tie1=false;


void func_one(){

    cout<<"   |     |   \n";
    cout<<space[0][0]<<"  |  "<<space[0][1]<<"  | "<<space[0][2]<<"\n";
    cout<<"___|_____|___\n";
    cout<<"   |     |   \n";
    cout<<space[1][0]<<"  |  "<<space[1][1]<<"  | "<<space[1][2]<<"\n";
    cout<<"___|_____|___\n";
    cout<<"   |     |   \n";
    cout<<space[2][0]<<"  |  "<<space[2][1]<<"  | "<<space[2][2]<<"\n";
    cout<<"   |     |   \n";
    cout<<endl;
}
void func_two()
{
    int digit;
    if(token=='X')
    {
        cout<<name1<<" please enter the number: ";
        cin>>digit;
    }
    if(token=='O')
    {
        cout<<name2<<" please enter the number: ";
        cin>>digit;
    }

    if(digit==1)
    {
        row=0;
        col=0;
    }
    if(digit==2)
    {
        row=0;
        col=1;
    }
    if(digit==3)
    {
        row=0;
        col=2;
    }
    if(digit==4)
    {
        row=1;
        col=0;
    }
    if(digit==5)
    {
        row=1;
        col=1;
    }
    if(digit==6)
    {
        row=1;
        col=2;
    }
    if(digit==7)
    {
        row=2;
        col=0;
    }
    if(digit==8)
    {
        row=2;
        col=1;
    }
    if(digit==9)
    {
        row=2;
        col=2;
    }
    else if(digit<1 || digit>9){
        cout<<"Invalid"<<endl;
        return;
    }
    if(space[row][col]!='X' && space[row][col]!='O'){
        space[row][col] = token;
        token = (token == 'X') ? 'O' : 'X'; // Update token for the next turn
    }
    else
    {
        cout<<"Position already occupied"<<endl;
        func_two();
    }
    func_one();
}

bool func_three()
{
    //to check whether the player wins
    for(int i=0;i<3;i++)
    {
        if((space[i][0]==space[i][1]&&space[i][0]==space[i][2]) || (space[0][i]==space[1][i]&&space[0][i]==space[2][i]))
        {
            return true;
        }
        if((space[0][0]==space[1][1]&&space[1][1]==space[2][2]) || (space[0][2]==space[1][1]&&space[1][1]==space[2][0])){
            return true;
        }
    }
    // All spaces filled, declare draw
    bool allOccupied = true;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j]!='X' && space[i][j]!='O')
            {
                allOccupied = false;
                break;
            }
        }
        if (!allOccupied)
            break;
    }
    if (allOccupied)
        return true;

    return false;
}
int main(){
    cout<<"Enter name of player1:";
    cin>>name1;
    cout<<"Enter name of player2:";
    cin>>name2;
    cout<<name1<<" is the player1 and you will be playing first!"<<endl;
    cout<<name2<<" is the player2 and you will be playing second!"<<endl;

    cout<<"Lets play!"<<endl;
    while(!func_three()){
        func_one();
        func_two();
        func_three();
    }
    if(func_three()){
        cout<<"Draw!!"<<endl;
    }
    else if(token=='X'){
        cout<<name2<<" wins!"<<endl;
    }
    else if(token=='O'){
        cout<<name1<<" wins!"<<endl;
    }

    return 0;
}

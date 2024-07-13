//Tic Tac Toe Game
#include <iostream>
#include <iomanip>

using namespace std;
//global var
char x1 = 'X';
char x2 = 'O';
char players[] = {x1, x2};
char holder;
int rw, cl,i,u;
char gmove[3][3];
char temp;
bool game = true;

//display grid function
void displayGrid()
{
    cout<<"TIC TAC TOE GAME"<<endl;
    cout<<"----------------"<<endl;
    for(int g = 0; g < 3; g++)
    {
        //cout<<endl;
        for(int h = 0; h < 3; h++)
        {
            cout<<"|   ";
            cout<<setw(1)<<gmove[g][h];
        }
        cout<<endl;
        //horizontal bar
        for(int x = 0; x < 3; x++)
        {
            cout<<"-----";
        }
        cout<<endl;
    }
    return;
}

//end or continue function
void endOrContinue()
{
    cout<<endl;
    cout<<"Do you want to play again? ";
    cin>>temp;
    if(temp == 'y' || temp == 'Y')
    {
        for(int h = 0; h < 3; h++)
        {
            for(int j = 0; j < 3; j++)
            {
                gmove[h][j] = ' ';
            }
        }
    }else if(temp == 'n' || temp == 'N')
    {
        cout<<endl;
        cout<<"Goodbye!!!\n";
        game = false;
    }else
    {
        cout<<"Invalid input\n";
        game = false;
    }
    return;
}
//checking the winner function
void checkWinner()
{
    cout<<"Game is over!!!"<<endl;
    cout<<"Check the winner...\n";
    if(gmove[0][0]=='X' && gmove[0][1]=='X' && gmove[0][2]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();

    }else if(gmove[1][0]=='X' && gmove[1][1]=='X' && gmove[1][2]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();
    }else if(gmove[2][0]=='X' && gmove[2][1]=='X' && gmove[2][2]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();
    }else if(gmove[0][0]=='X' && gmove[1][0]=='X' && gmove[2][0]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();
    }else if(gmove[0][1]=='X' && gmove[1][1]=='X' && gmove[2][1]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();
    }else if(gmove[0][2]=='X' && gmove[1][2]=='X' && gmove[2][2]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();
    }else if(gmove[0][0]=='X' && gmove[1][1]=='X' && gmove[2][2]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();
    }else if(gmove[0][2]=='X' && gmove[1][1]=='X' && gmove[2][0]=='X')
    {
        cout<<"The Winner is X"<<endl;
        endOrContinue();
    }else if(gmove[1][0]=='O' && gmove[1][1]=='O' && gmove[1][2]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else if(gmove[2][0]=='O' && gmove[2][1]=='O' && gmove[2][2]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else if(gmove[0][0]=='O' && gmove[1][0]=='O' && gmove[2][0]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else if(gmove[0][1]=='O' && gmove[1][1]=='O' && gmove[2][1]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else if(gmove[0][2]=='O' && gmove[1][2]=='O' && gmove[2][2]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else if(gmove[0][0]=='O' && gmove[1][1]=='O' && gmove[2][2]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else if(gmove[0][2]=='O' && gmove[1][1]=='O' && gmove[2][0]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else if(gmove[0][0]=='O' && gmove[0][1]=='O' && gmove[0][2]=='O')
    {
        cout<<"The Winner is O"<<endl;
        endOrContinue();
    }else
    {
        cout<<"Something is wrong!!!"<<endl;
        cout<<"Unable to check the winner!!!\n";
        endOrContinue();
    }
    return;
}
//draw fuction
void draw()
{
    if((gmove[0][0] == 'X' || gmove[0][0] == 'O') && (gmove[0][1] == 'X' || gmove[0][1] == 'O') &&
       (gmove[0][2] == 'X' || gmove[0][2] == 'O') && (gmove[1][0] == 'X' || gmove[1][0] == 'O') &&
       (gmove[1][1] == 'X' || gmove[1][1] == 'O') && (gmove[1][2] == 'X' || gmove[1][2] == 'O') &&
       (gmove[2][0] == 'X' || gmove[2][0] == 'O') && (gmove[2][1] == 'X' || gmove[2][1] == 'O') &&
       (gmove[2][2] == 'X' || gmove[2][2] == 'O'))
    {
        cout<<"It's draw"<<endl;
        endOrContinue();
    }
    return;
}
//validation part function
void valid()
{
    if(gmove[0][0]=='X' && gmove[0][1]=='X' && gmove[0][2]=='X' || gmove[0][0]=='O' && gmove[0][1]=='O' && gmove[0][2]=='O')
        {
            checkWinner();
        }else if(gmove[0][0]=='X' && gmove[1][1]=='X' && gmove[2][2]=='X' || gmove[0][0]=='O' && gmove[1][1]=='O' && gmove[2][2]=='O')
        {
           checkWinner();
        }else if(gmove[1][0]=='X' && gmove[1][1]=='X' && gmove[1][2]=='X' || gmove[1][0]=='O' && gmove[1][1]=='O' && gmove[1][2]=='O')
        {
            checkWinner();
        }else if(gmove[2][0]=='X' && gmove[2][1]=='X' && gmove[2][2]=='X' || gmove[2][0]=='O' && gmove[2][1]=='O' && gmove[2][2]=='O')
        {
            checkWinner();
        }else if(gmove[2][0]=='X' && gmove[1][1]=='X' && gmove[0][2]=='X' || gmove[2][0]=='O' && gmove[1][1]=='O' && gmove[0][2]=='O')
        {
            checkWinner();
        }else if(gmove[0][2]=='X' && gmove[1][2]=='X' && gmove[2][2]=='X' || gmove[0][2]=='O' && gmove[1][2]=='O' && gmove[2][2]=='O')
        {
            checkWinner();
        }else if(gmove[0][1]=='X' && gmove[1][1]=='X' && gmove[2][1]=='X' || gmove[0][1]=='O' && gmove[1][1]=='O' && gmove[2][1]=='O')
        {
            checkWinner();
        }else if(gmove[0][0]=='X' && gmove[1][0]=='X' && gmove[2][0]=='X' || gmove[0][0]=='O' && gmove[1][0]=='O' && gmove[2][0]=='O')
        {
            checkWinner();
        }
        return;
}
int main()
{
    //calling displayGrid
    displayGrid();
    while(game)
    {
        if(gmove[0][0]=='X' && gmove[0][1]=='X' && gmove[0][2]=='X' || gmove[0][0]=='O' && gmove[0][1]=='O' && gmove[0][2]=='O')
        {
            checkWinner();
        }else if(gmove[0][0]=='X' && gmove[1][1]=='X' && gmove[2][2]=='X' || gmove[0][0]=='O' && gmove[1][1]=='O' && gmove[2][2]=='O')
        {
           checkWinner();
        }else if(gmove[1][0]=='X' && gmove[1][1]=='X' && gmove[1][2]=='X' || gmove[1][0]=='O' && gmove[1][1]=='O' && gmove[1][2]=='O')
        {
            checkWinner();
        }else if(gmove[2][0]=='X' && gmove[2][1]=='X' && gmove[2][2]=='X' || gmove[2][0]=='O' && gmove[2][1]=='O' && gmove[2][2]=='O')
        {
            checkWinner();
        }else if(gmove[2][0]=='X' && gmove[1][1]=='X' && gmove[0][2]=='X' || gmove[2][0]=='O' && gmove[1][1]=='O' && gmove[0][2]=='O')
        {
            checkWinner();
        }else if(gmove[0][2]=='X' && gmove[1][2]=='X' && gmove[2][2]=='X' || gmove[0][2]=='O' && gmove[1][2]=='O' && gmove[2][2]=='O')
        {
            checkWinner();
        }else if(gmove[0][1]=='X' && gmove[1][1]=='X' && gmove[2][1]=='X' || gmove[0][1]=='O' && gmove[1][1]=='O' && gmove[2][1]=='O')
        {
            checkWinner();
        }else if(gmove[0][0]=='X' && gmove[1][0]=='X' && gmove[2][0]=='X' || gmove[0][0]=='O' && gmove[1][0]=='O' && gmove[2][0]=='O')
        {
            checkWinner();
        }else
        {
            for(int k = 0; k < 2; k++)//trying to switch playes
            {
                cout<<endl;
                cout<<"current player is : "<<players[k]<<endl;
                holder = players[k];
                cout<<"In which row are you willing to put your move? ";
                cin>>rw;
                cout<<endl;
                cout<<"In which culomn are you willing to put your move? ";
                cin>>cl;
                while(rw == 0 || cl == 0)//trying to stop zero to be entered
                {
                    cout<<endl;
                    cout<<"You can't enter zero as a number of row or culomn\n";
                    cout<<"Try again!";
                    cout<<endl;
                    cout<<endl;
                    cout<<"In which row are you willing to put your move? ";
                    cin>>rw;
                    cout<<endl;
                    cout<<"In which culomn are you willing to put your move? ";
                    cin>>cl;
                }
                //display part
                cout<<endl;
                cout<<"TIC TAC TOE GAME"<<endl;
                cout<<"----------------"<<endl;
                for(i = 0; i < 3; i++)
                {
                //vertical bar
                    for(u = 0; u < 3; u++)
                    {
                        cout<<"|   ";
                        if(rw-1 == i && cl-1 == u)
                        {
                            if(gmove[i][u] == 'X' || gmove[i][u] == 'O')//trying to prevent to overwrite
                            {
                                cout<<endl;
                                cout<<"You can't overwrite!!!"<<endl;
                                cout<<"You lost!!!"<<endl;
                                cout<<endl;
                                game = false;
                            }
                            gmove[i][u] = holder;
                            cout<<setw(1)<<gmove[i][u];
                        }
                    }
                    cout<<endl;
                    //horizontal bar
                    for(int x = 0; x < 3; x++)
                    {
                        cout<<"-----";
                    }
                    cout<<endl;
                }
                cout<<"This was "<<holder<<" Player!"<<endl;
                //printing gmove array
                cout<<"Updates...\n";
                displayGrid();
                draw();
                valid();
            }
        }
    }


    return 0;
}

#include <iostream>
using namespace std;

char sq[9]={'0','1','2','3','4','5','6','7','8'};

string result_win(){
  if (sq[0]==sq[1] && sq[1]==sq[2]){
    return "win";
  }
  else if( sq[3]==sq[4] && sq[4]==sq[5]){
    return "win";
  }
  else if( sq[6]==sq[7] && sq[8]==sq[7]){
    return "win";
  }
    else if( sq[0]==sq[3] && sq[3]==sq[6]){
      return "win";
    }
  else if(sq[1]==sq[4] && sq[4]==sq[7]){
    return "win";
  }
  else if(sq[2]==sq[5] && sq[8]==sq[5]){
    return "win";
  }
  else if(sq[0]==sq[4] && sq[4]==sq[8]){
    return "win";
  }
  else if(sq[2]==sq[4] && sq[4]==sq[6]){
    return "win";
  }
  return "";
}

string result_draw(){
  if(sq[0] !=0 && sq[1] !=1 && sq[2] !=2 && sq[3]!=3 && sq[4] !=4 && sq[5] !=5 && sq[6] !=6 && sq[7] !=7 && sq[8] !=8 ){
    return "Game Draw"; 
  }
  return "";
}
  
void display(){
  

  cout<<"     |     |     "<<endl;
  
  cout<<"  "<<sq[0]<<"  |  "<<sq[1]<<"  |  "<<sq[2]<<endl;
  
  cout<<"_____|_____|_____"<<endl;
  cout<<"     |     |     "<<endl;
  
  cout<<"  "<<sq[3]<<"  |  "<<sq[4]<<"  |  "<<sq[5]<<endl;
  
  cout<<"_____|_____|_____"<<endl;
  cout<<"     |     |     "<<endl;
  
  cout<<"  "<<sq[6]<<"  |  "<<sq[7]<<"  |  "<<sq[8]<<endl;
  
  cout<<"     |     |     "<<endl;

}

int main(){
  int no;
  
  cout<<"TIC TAC TOE GAME"<<endl;
  cout<<endl;
  cout<<"Player-1 = X" << endl;
  cout<<"Player-2 = O" << endl;
  cout<<endl;

  display();
  for (int i = 0; i < 9; i++) {
    if (i % 2 == 0) {
        cout << "Player-1 (X) turn: ";
    } else {
        cout << "Player-2 (O) turn: ";
    }
    cout << "Enter the box no. for input: ";
    cin >> no;

    // Validate input
    if (no < 0 || no > 8 || sq[no] == 'X' || sq[no] == 'O') {
        cout << "Invalid input! Please try again." << endl;
        i--;
        continue;
    }

    sq[no] = (i % 2 == 0) ? 'X' : 'O';
    display();

    string result = result_win();
    if (result == "win") {
        if (i % 2 == 0) {
            cout << "Player 1 Wins!" << endl;
        } else {
            cout << "Player 2 Wins!" << endl;
        }
        break;
    }
    if(i==8){
      if (result_draw() == "Game Draw") {
        cout << "It's a Draw!" << endl;
    }
    
  }
  
  }

  return 0;
}

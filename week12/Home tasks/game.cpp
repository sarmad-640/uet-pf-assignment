#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int x, int y);
char getCharAtxy(int x, int y);
void printMaze();
void printTank();
void printEnemy();
void moveTankLeft();
void moveTankRight();
void moveTankUp();
void moveTankDown();
void moveEnemy();
void eraseEnemy();
void eraseTank();
void generateBullet();
void moveBullet();
void printBullet(int x,int y);
void eraseBullet(int x,int y);
void makeBulletInactive(int index);
void bulletCollissionWithEnemy();
void addScore();
void printScore();






int timer, score;
string enemyDirection;


//player character
char box =219;
char tank1[6]={box,box,box,'-','-','>'};
char tank2[6]={'0',' ','0',' ',' ',' '};

//enemy character
char enemy1[6]={' ',' ',' ','-','-','-'};
char enemy2[6]={'<','=','=','(','-',')'};
char enemy3[6]={' ',' ',' ','\\','@','/'};
char enemy4[6]={' ',' ',' ','*','*','*'};

//player coordinates
int tankX =5;
int tankY =5;

//enemy coordinates
int enemyX =30;
int enemyY =10;

//player bullets
int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int bulletCount=0;




main(){
    system("cls");
    printMaze();
    printTank();
    printEnemy();
    while(true){
        printScore();
        if(GetAsyncKeyState(VK_LEFT)){
            moveTankLeft();
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            moveTankRight();
        }
        if(GetAsyncKeyState(VK_UP)){
            moveTankUp();
        }
        if(GetAsyncKeyState(VK_DOWN)){
            moveTankDown();
        }
        if(GetAsyncKeyState(VK_SPACE)){
            generateBullet();
        }
        if(timer==3){
            moveEnemy();
            timer=0;
        }
        moveBullet();
        bulletCollissionWithEnemy();
        timer++;
        Sleep(90);
    }
}





void gotoxy(int x, int y) {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to get character at specific console coordinates (x, y)
char getCharAtxy(int x, int y) {
    // Handle to console output
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Structure to store the character information
    CHAR_INFO charInfo;
    COORD coord = {0, 0};
    SMALL_RECT readRegion = {x, y, x, y};

    // Read character from console screen buffer
    if (ReadConsoleOutput(hConsole, &charInfo, {1, 1}, coord, &readRegion)) {
        return charInfo.Char.AsciiChar; // Return ASCII character at (x, y)
    } else {
        return '\0'; // Return null character if reading fails
    }
}

void printMaze(){
    cout<<"############################################"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"############################################"<<endl;
}


void printTank(){
    gotoxy(tankX,tankY);
    for(int index = 0;index<6;index++){
        cout<<tank1[index];
    }
    gotoxy(tankX,tankY+1);
    for(int index = 0;index<6;index++){
        cout<<tank2[index];
    }
}

void printEnemy(){
    gotoxy(enemyX,enemyY);
    for(int index=0;index<6;index++){
        cout<<enemy1[index];
    }
    gotoxy(enemyX,enemyY+1);
    for(int index=0;index<6;index++){
        cout<<enemy2[index];
    }
    gotoxy(enemyX,enemyY+2);
    for(int index=0;index<6;index++){
        cout<<enemy3[index];
    }
    gotoxy(enemyX,enemyY+3);
    for(int index=0;index<6;index++){
        cout<<enemy4[index];
    }

}


void moveTankLeft(){
    char next = getCharAtxy(tankX-1,tankY);
    if(next==' '){
        eraseTank();
        tankX = tankY-1;
        printTank();
    }
}

void moveTankRight(){
    char next = getCharAtxy(tankX+6,tankY);
    if(next==' '){
        eraseTank();
        tankX = tankY+1;
        printTank();
    }
}
void moveTankUp(){
    char next = getCharAtxy(tankX,tankY-1);
    if(next==' '){
        eraseTank();
        tankX = tankY-1;
        printTank();
    }
}
void moveTankDown(){
    char next = getCharAtxy(tankX,tankY+2);
    if(next==' '){
        eraseTank();
        tankX = tankY+1;
        printTank();
    }
}

void moveEnemy(){
    if(enemyDirection == "Up"){
    char next = getCharAtxy(enemyX,enemyY-1);
    if(next == ' '){
        eraseEnemy();
        enemyY--;
        printEnemy();
    }
    if(next=='#'){
        enemyDirection ="Down";
    }
    }
    if(enemyDirection =="Down"){
    char next = getCharAtxy(enemyX,enemyY+4);
    if(next == ' '){
        eraseEnemy();
        enemyY++;
        printEnemy();
    }
    if(next=='#'){
        enemyDirection ="Up";
    }
    }
}

void eraseEnemy(){
    gotoxy(enemyX,enemyY);
    for(int index=0;index<6;index++){
        cout<<" ";
    }
    gotoxy(enemyX,enemyY+1);
    for(int index=0;index<6;index++){
        cout<<" ";
    }
    gotoxy(enemyX,enemyY+2);
    for(int index=0;index<6;index++){
        cout<<" ";
    }
    gotoxy(enemyX,enemyY+3);
    for(int index=0;index<6;index++){
        cout<<" ";
    }

}

void eraseTank(){
        gotoxy(tankX,tankY);
    for(int index=0;index<6;index++){
        cout<<" ";
    }
    gotoxy(tankX,tankY+1);
    for(int index=0;index<6;index++){
        cout<<" ";
    }
}




void generateBullet(){
    bulletX[bulletCount]=tankX+7;
    bulletY[bulletCount]=tankY;
    isBulletActive[bulletCount]=true;
    gotoxy(tankX+7,tankY);
    cout<<".";
    bulletCount++;
}

void moveBullet(){
    for(int x=0;x<bulletCount;x++){
        if(isBulletActive[x]==true){
            char next = getCharAtxy(bulletX[x]+1,bulletY[x]);
            if(next!=' '){
                eraseBullet(bulletX[x],bulletY[x]);
                makeBulletInactive(x);
            }else{
                                eraseBullet(bulletX[x],bulletY[x]);
bulletX[x]=bulletX[x]+1;
printBullet(bulletX[x],bulletY[x]);
            }
        }
    }
}

void printBullet(int x,int y){
    gotoxy(x,y);
    cout<<".";
}
void eraseBullet(int x,int y){
    gotoxy(x,y);
    cout<<".";
}
void makeBulletInactive(int index){
    isBulletActive[index]=false;
}


void bulletCollissionWithEnemy(){
    for(int x=0;x<bulletCount;x++){
        if(isBulletActive[x]==true){
            if(bulletX[x]+1==enemyX &&(bulletY[x]==enemyY)||bulletY[x]==enemyY+2||bulletY[x]==enemyY+3){
                addScore();
            }
            if(enemyX-1==bulletX[x]&&enemyY+1==bulletY[x]){
                addScore();
            }
        }
    }
}

void addScore(){
    score++;
}

void printScore(){
    gotoxy(45,8);
    cout<<"Score: "<<score;
}
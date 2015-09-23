#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<iostream>

using namespace std;


#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80




char mapa[][23][50] = {
                {"+++++++++++++++++++++++++++++++++++++++++++++++++",
               "+                                               +",
               "+                                               +",
               "+      **J        ***                **X        +",
               "+                 ***                 *         +",
               "+                 *              *              +",
               "+                 *                     *       +",
               "+    *  *                     *   *     *       +",
               "+     * *                    **** *             +",
               "+     *                                 *       +",
               "+                                      **       +",
               "+                        **            **       +",
               "+                         *                     +",
               "+             ** *       ***                    +",
               "+             ***                               +",
               "+             **                  **            +",
               "+      **                         **            +",
               "+      **                         *             +",
               "+        *            **                        +",
               "+                    ***                        +",
               "+                   * **                        +",
               "+                                               +",
               "+++++++++++++++++++++++++++++++++++++++++++++++++"},
                {"+++++++++++++++++++++++++++++++++++++++++++++++++",
                "+                                               +",
                "+****             **                   ***      +",
                "+****             ****                 ***      +",
                "+**                                     **      +",
                "+**               **                    **      +",
                "+                 ***                           +",
                "+                                               +",
                "+                                               +",
                "+                                               +",
                "+                  *******                     p+",
                "+   **             **                           +",
                "+ * **               z                         X+",
                "+                   **                          +",
                "+                   **             *****        +",
                "+                                  *****        +",
                "+                                               +",
                "+**      **                                     +",
                "+**    ****                                     +",
                "+**      J                                      +",
                "+****                                           +",
                "+****                                           +",
                "+++++++++++++++++++++++++++++++++++++++++++++++++"},
                {"+++++++++++++++++++++++++++++++++++++++++++++++++",
                "+    *                                  *       +",
                "+                    **                 *p   l  +",
                "+    ***                   **          *****    +",
                "+      *             **                  *      +",
                "+      ***          **         ******    *      +",
                "+      ***         **     *                   * +",
                "+                         ***                ** +",
                "+                                            ** +",
                "+     *             *********                ** +",
                "+   ***             *       *                   +",
                "+     ****d           z   X *                   +",
                "+     *             *       *                   +",
                "+                   ****** **                   +",
                "+                                               +",
                "+         r               u                     +",
                "+    ***       ****                             +",
                "+    *                                  *   *** +",
                "+    *                          **      *  **** +",
                "+    ***      *             ******              +",
                "+            **                           *     +",
                "+             *                  ***      *   J +",
                "+++++++++++++++++++++++++++++++++++++++++++++++++"},
                {"+++++++++++++++++++++++++++++++++++++++++++++++++",
                "+                                               +",
                "+                                               +",
                "+       *******z  d                             +",
                "+           ***                                 +",
                "+                                      *        +",
                "+     *   *                            *        +",
                "+     *   *                            *        +",
                "+     *  *         r                  *         +",
                "+     *  *           *****             *X       +",
                "+     ****       *********             *        +",
                "+                                               +",
                "+                                               +",
                "+                         *                     +",
                "+                         *                *    +",
                "+                         ***              *    +",
                "+                         *                *    +",
                "+                  *******                 *    +",
                "+         ****                             *    +",
                "+        ****                           u       +",
                "+********************   *   *************  *****+",
                "+ J                     *                     p +",
                "+++++++++++++++++++++++++++++++++++++++++++++++++"}};


void findchar(char c, int m,int &x, int &y){
    for(int i=0; i<23; i++){
		for(int j=0; j<49; j++){
            if(mapa[m][i][j] == c){
                x=j;
                y=i;
                return;
            }
        }
    }
}

void gotoxy(int x, int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;

	SetConsoleCursorPosition(hCon, dwPos);
}

void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;

	SetConsoleCursorInfo(hCon,&cci);


}


void borrar(int x, int y){
    gotoxy(x,y); printf(" ");

}


void borrarmatrix(){
    for(int i=0; i<23; i++){
		for(int j=0; j<49; j++){
                borrar(j,i);
		}
    }
}


void perdiste(){
    borrarmatrix();
    gotoxy(22,11);printf("Perdiste");
    for(int j=11; j<23; j++){
        gotoxy(0,j);printf(" ");
    }
}

void ganaste(){
    borrarmatrix();
    gotoxy(22,11);printf("Ganaste");
    for(int j=11; j<23; j++){
        gotoxy(0,j);printf(" ");
    }
}


void imprimirmatrix(int m){


	for(int i=0; i<23; i++){
		for(int j=0; j<49; j++){
            /*if(mapa[i][j] == 'J'){
                gotoxy(j,i); printf("*");
            }*/
            if(mapa[m][i][j] == 'X'){
                gotoxy(j,i); printf("X");
            }
            if(mapa[m][i][j] == '+'){
                gotoxy(j,i); printf(" ");
            }
            if(mapa[m][i][j] == '*'){
                gotoxy(j,i); printf("%c",219);
            }
            if(mapa[m][i][j] == 'z'){
                gotoxy(j,i); printf("@");
            }
            if(mapa[m][i][j] == 'p'){
                gotoxy(j,i); printf("@");
            }
            if(mapa[m][i][j] == 'u'){
                gotoxy(j,i); printf("^");
            }
            if(mapa[m][i][j] == 'l'){
                gotoxy(j,i); printf("<");
            }
            if(mapa[m][i][j] == 'r'){
                gotoxy(j,i); printf(">");
            }
            if(mapa[m][i][j] == 'd'){
                gotoxy(j,i); printf("v");
        }
		}
    }
}

void sgtemapa(int &m, int &x,int &y, int &portx, int &porty, int &port1x, int &port1y){
    borrarmatrix();
    m+=1;
    gotoxy(22,11);printf("Nivel %d",m+1);
    Sleep(1000);
    gotoxy(22,11);printf("          ");
    findchar('J',m,x,y);
    gotoxy(x,y); printf("*");
    findchar('z',m,portx,porty);
    findchar('p',m,port1x,port1y);
    imprimirmatrix(m);


}

void Menu(){
    while(true){
        gotoxy(18,10);printf("      Road Blocks");
        gotoxy(16,12);printf("Hecho por : Diego Cervantes");
        gotoxy(18,14);printf("     Jose Zevallos");
        if(kbhit()){return;}
    }
}

void mover(int &x, int &y, bool &gameover,int dirx, int diry,int &portx, int &porty, int &port1x, int &port1y,int &m){
    bool bla = true;
    while(bla){
        if(mapa[m][y-diry][x-dirx]!='*'){
            borrar(x-dirx,y-diry);
            if(portx != 0){
                gotoxy(port1x,port1y); printf("@");
                gotoxy(port1x,port1y); printf("@");
            }
        }
        gotoxy(x,y); printf("*");
        x+=dirx;
        y+=diry;
        Sleep(30);
        if(mapa[m][y][x] == 'X'){
            bla = false;
            if(m==3){gameover = true;ganaste();}
            else{sgtemapa(m,x,y,portx,porty,port1x,port1y);}
            return;
        }
        if(mapa[m][y][x] == '+'){
            bla=false;
            borrar(x,y);
            gameover = true;
            perdiste();
            return;
        }
        if(mapa[m][y][x] == '*'){
            bla=false;
            x-=dirx;
            y-=diry;
            gotoxy(x,y); printf("*");
            return;
        }
        if(mapa[m][y][x] == 'z'){
            borrar(x-dirx,y-diry);
            x = port1x+dirx;
            y = port1y+diry;

        }
        if(mapa[m][y][x] == 'p'){
            borrar(x-dirx,y-diry);
            x=portx+dirx;
            y=porty+diry;
        }
		if(mapa[m][y][x] == 'u'){
            borrar(x-dirx,y-diry);
            gotoxy(x,y); printf("^");

			mover(x,y, gameover,0,-1,portx,porty,port1x,port1y,m);
			return;
        }
		if(mapa[m][y][x] == 'l'){
            borrar(x-dirx,y-diry);
            gotoxy(x,y); printf("<");
			mover(x,y, gameover,-1,0,portx,porty,port1x,port1y,m);
			return;
		}
		if(mapa[m][y][x] == 'r'){
            borrar(x-dirx,y-diry);
            gotoxy(x,y); printf(">");
			mover(x,y, gameover,1,0,portx,porty,port1x,port1y,m);
            return;
        }
		if(mapa[m][y][x] == 'd'){
		    borrar(x-dirx,y-diry);
		    gotoxy(x,y); printf("v");
			mover(x,y, gameover,0,1,portx,porty,port1x,port1y,m);
			return;
		}
    }
}



int main(){
    OcultarCursor();
    bool gameover;
    int x=0,y=0,portx=0,porty=0,port1x=0,port1y=0;
    int m=-1;
    gameover=false;
    Menu();
    sgtemapa(m,x,y,portx,porty,port1x,port1y);
    while(!gameover){
        if(kbhit())
        {
            char tecla = getch();
            if(tecla == DERECHA){
                    mover(x,y, gameover,1,0,portx,porty,port1x,port1y,m);
            }
            if(tecla == IZQUIERDA){
                    mover(x,y, gameover,-1,0,portx,porty,port1x,port1y,m);
            }
            if(tecla == ABAJO){
                    mover(x,y, gameover,0,1,portx,porty,port1x,port1y,m);
            }
            if(tecla == ARRIBA){
                    mover(x,y, gameover,0,-1,portx,porty,port1x,port1y,m);
            }

        }

    }
}

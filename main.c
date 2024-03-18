#include<stdio.h>  
#include<stdlib.h>     
#include<conio.h>
#include<time.h>
int targetrow,targetcolumn,score=0;
int snakerow=1,snakecolumn=1;
void rando()
{
  targetrow=time(0)%10+1;  //to avoid 0
  targetcolumn=time(0)%10+2; // to avoid 0 and same value
}
void end()
{
    printf("\n\n=========YOU LOSE========\n");
    printf("\n your score !!!!!!!!!-  %d  -!!!!!!!!!!",score);
    
}
int main()  
{  
    int i,j;  
    char key;
    rando();
while(1)
{
    system("clear");
    printf("---------SNAKE GAME---------\n----------------------------\n");
    printf("Key rules:\n");
    printf("\tDown : s \tUP    : w \n\tLEFT : a \tRIGHT : d\nEXIT : x\n\n");
    printf("%d %d\n",targetrow,targetcolumn);
    if(targetrow!=snakerow||targetcolumn!=snakecolumn){
        for(i=0;i<14;i++)
        {
            for(j=0;j<14;j++)
            {
                
                if(i==0||j==0||i==13||j==13)
                {
                    printf("* ");
                }
                else
                {
                        if(i==snakerow&&j==snakecolumn)
                        printf("O ");
                        else if(i==targetrow && j==targetcolumn)
                        printf("& ");
                        else
                        printf("  ");
                }
                
            }
            printf("\n");
        }
        printf("\nyour score : %d ",score);
        printf("\nEnter key  : ");
        scanf("%c",&key);
        printf("\n");
        if(key=='w')
        snakerow--;
        else if (key=='s')
        snakerow++;
        else if (key=='a')
        snakecolumn--;
        else if (key=='d')
        snakecolumn++;
        else if (key=='x')
        {
            end();
            exit(0);
        }
       if(snakerow>12||snakecolumn>12||snakerow<1||snakecolumn<1)
       {
        end();
        exit(0);
       }
    }
    else
    {
        score++;
        rando();
    }
}
    
    return 0;
}

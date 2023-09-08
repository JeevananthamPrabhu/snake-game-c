#include<stdio.h>  
#include<stdlib.h>     
#include<conio.h>
#include<time.h>
int u,l,score=0;
int x=1,y=1;
void rando()
{
  u=time(0)%10+1;  
    if(u%2!=0)
    l=time(0)%10;
    else
    l=time(0)%10+2;
    
    if(u==0)
    u++;
    if(l==0)
    l++;
}
void end()
{
    printf("\n\n=========YOU LOSE========\n");
    printf("\n your score !!!!!!!!!-  %d  -!!!!!!!!!!",score);
    
}
int main()  
{  
    int i,j;  
    char m[3],k;
   rando();
//  printf("%d %d\n",u,l);
while(1)
{
    system("clear");
    printf("---------SNAKE GAME---------\n----------------------------\n");
    printf("Key rules:\n");
    printf("\tDown : s \tUP    : w \n\tLEFT : a \tRIGHT : d\nEXIT : x\n\n");
    if(u!=x||l!=y){
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
                    if(i==x&&j==y)
                    printf("O ");
                    else if(i==u && j==l)
                    printf("& ");
                    else
                    printf("  ");
            }
            
        }
        printf("\n");
    }
    printf("\nyour score : %d ",score);
    printf("\nEnter key  : ");
    scanf("%s",m);
    k=m[0];
    printf("\n");
    if(k=='w')
    x--;
    else if (k=='s')
    x++;
    else if (k=='a')
    y--;
    else if (k=='d')
    y++;
    else if (k=='x')
    {
        end();
    exit(0);
    }
    
   if(x>12||y>12||x<1||y<1)
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







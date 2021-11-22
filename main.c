#include<stdio.h>
#include"my_mat.h"
int main(){
    int g[10][10];
    while(1){
        char a;
        scanf("%c",&a);
        if(a=='D'){
            break;
        }else if (a=='A'){
            int *n;
            n++;
            n--;
            n=MakeMatrix(g);
        }else if(a=='B'){
            int i =0;
            scanf("%d",&i);
            int j =0;
            scanf("%d",&j);
            int tmp[10][10];
            for(int x=0;x<10;x++){
                for(int k=0;k<10;k++){
                    tmp[x][k]=g[x][k];
                }
            }
            int ans= isPath(tmp,i,j); 
            if(ans==1){
                printf("True\n");
            }else{
                printf("False\n");
            }
        }else if(a=='C'){
            int tmp[10][10];
            int i =0;
            scanf("%d",&i);
            int j =0;
            scanf("%d",&j);
            for(int x=0;x<10;x++){
                for(int k=0;k<10;k++){
                    tmp[x][k]=g[x][k];
                }
            }
            printf("%d\n",shortestPath(tmp,i,j));
        }
    }
    return 0;
}
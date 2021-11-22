#include <stdio.h>
#include <math.h>
int *MakeMatrix(int mat[10][10]){  
    for(int i=0;i<10;i++)  
    {
        for(int j=0;j<10;j++){
           scanf("%d", &mat[i][j]);   
        }
    }   
     return *mat;  
}

int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int isPath(int g[10][10],int i, int j){
int max= 10000000;
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        if(g[i][j]==0 && i!=j){
            g[i][j]=max;
        }
    }
} 
for(int k=0;k<10;k++)
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++){
                if(g[i][k] != 0 && g[k][j] != 0 && g[i][j]!=0&&g[i][j]>g[i][k]+g[k][j]){
                g[i][j]=g[i][k]+g[k][j];  
                }
            }
        }
}
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        if(i==j){
            continue;
        }else if(g[i][j]==max){
            g[i][j]=0;
        }
    }
}
  if(g[i][j]==max || g[i][j]==0){
    return -1;
  }else{
    return 1;
  }
}
int shortestPath(int g[10][10],int i, int j){
int max= 10000000;
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        if(g[i][j]==0 && i!=j){
            g[i][j]=max;
        }
    }
} 
for(int k=0;k<10;k++)
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++){
                if(g[i][k] != 0 && g[k][j] != 0 && g[i][j]!=0&&g[i][j]>g[i][k]+g[k][j]){
                g[i][j]=g[i][k]+g[k][j];  
                }
            }
        }
}
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        if(i==j){
            continue;
        }else if(g[i][j]==max){
            g[i][j]=0;
        }
    }
}
  if(g[i][j]==max || g[i][j]==0){
    return -1;
  }else{
    return g[i][j];
  }
}


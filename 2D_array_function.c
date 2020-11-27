
//create a 2D array by taking input from the user.
//Write a display function to print 
//the content of this 2D array on the screen.

#include<stdio.h>
#include <stdlib.h>
int n_row,n_column;
void display(int A[n_row][n_column]);


void main(){

     printf("how many Row: \n");
     int row,col;
     scanf("%d",&row);
     printf("how many Column: \n");
     scanf("%d",&col);
     int A[row][col];
     for(int i=0;i<row; i++){
          for(int j=0; j<col; j++){
              printf("enter value at [%d][%d]: ",i,j);
              scanf("%d",&A[i][j]);
              
          }
      }
     // printf("%d",A[0][0]);
      n_row=row;
      n_column=col;
     display(A);
      
    
}

void display(int arr[n_row][n_column]){
   
    
    for(int i=0;i<n_row; i++){
          for(int j=0; j<n_column; j++){
             printf(" \t%d\t",arr[i][j]);
              
              
          }
          printf("\n");
      }
      
} 

  Program: Check Symmetry of a Matrix
   Author: Atherva Mishra
   Description:
    Checks whether a square matrix is symmetric

 #include<stdio.h>
int main(){
    int matrix_txt[3][3]={{1,2,3},{2,4,5},{3,5,6}};
    int i,j;
    int symmetricity=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matrix_txt[i][j]==matrix_txt[j][i]){
                symmetricity=1;
            }
        }
    }
    if(symmetricity==1){
        printf("matrix is symmetric");
    }
    return 0;
}

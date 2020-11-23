#include <stdio.h>
const int n = 3;
int main(){
    //int n;
    //printf("Enter n: ");
    //scanf("%1i", n);
    int i,j;
    double m[n][n];
    printf("Enter matr :\n");
    for (i=0; i<n;i++){
        for(j=0;j<n;j++){
        scanf("%lf", m[i]+j);}
    }
    for (i=0; i<n; i++){
        printf("\n");
        for (j=0; j<n; j++){
        printf("%10lg", m[i][j]);}
    }
    for(i;i<n;i++){
        m[i][j]=m[j][i];
    }
    printf("\n");
    for (i=0; i<n; i++){
        for (j=0,printf("\n"); j<n; j++){
            printf("%10lg", m[j][i]);}

    }
}

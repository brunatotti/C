#include <stdio.h>
#define Max 6

int busca_vetor(int v[], int n, int x) {
    int i;
    v[n]=x;
    /*modificando vetor original */
    i=0;
    while(x!=v[i])
        i++;
        if(i==n)
            return -1;
        else
            return i;
}
int busca_matriz(int A[][Max], int n, int x) {
    int i, j, achou;
    for (i=0; i<n; i++)
        A[i][n] = x;
    i=0; j=0; achou=0;
    while (i<n && achou=0){
        while (A[i][j] != x) {
            j++;
        } if (j==n) {
            i++;
        } else {
            achou=1;
        }
    }
    return achou;
}
void main(){
    int A[Max][Max], v[Max], x, i, n, k, p;
    n=3;
    v[0]=2;
    v[1]=-1;
    v[2]=4;
    A[0][0]=3;
    A[0][1]=0;
    A[0][2]=5;
    A[1][0]=4;
    A[1][1]=1;
    A[1][2]=6;
    A[2][0]=12;
    A[2][1]=9;
    A[2][2]=14;
    x=4;
    p=busca_vetor(v,n,x);
    k=busca_matriz(A,n,x);
    prinf("%d %d\n",k,p);
}

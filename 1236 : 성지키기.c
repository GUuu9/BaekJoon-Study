#include<stdio.h>
int main(void) {
    int n, m, i, j, ii=0, jj=0;
    scanf("%d %d", &n, &m);
    char castle[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%c", &castle[i][j]);
            if(castle[i][j] == '\n')
                j--;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(castle[i][j] == 'X')
                break;
            if(j == m - 1)
                ii++;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(castle[j][j] == 'X')
                break;
            if(j == m-1)
                jj++;
        }
    }
    
    printf("%d", ii>=jj?ii:jj);
}

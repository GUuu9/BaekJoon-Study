#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct  Member{
    int old;
    char name[101];
};

int comp(const void* a, const void* b);

int main() {
    int n,i;
    scanf("%d", &n);
    struct Member mb[n];
    for(i=0;i<n;i++){
        scanf("%d %s", &mb[i].old, mb[i].name );
    }
    qsort(mb, n, sizeof(mb[0]), comp);
    for(i=0;i<n;i++){
        printf("%d %s\n", mb[i].old, mb[i].name);
    }
}

int comp(const void* a, const void* b){
    return(*(int*)a - *(int*)b);
}

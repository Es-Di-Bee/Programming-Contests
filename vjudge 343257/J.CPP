#include <stdio.h>
int main(){
    int t = 0;
    scanf("%d",&t);
    while(t--){
        int g = 0;
        int l = 0;
        scanf("%d%d",&g,&l);
        if(l % g == 0) {
            printf("%d %d\n",g,l);
        } else {
            printf("-1\n");
        }
    }

}

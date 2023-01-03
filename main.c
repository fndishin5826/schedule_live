#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int i,j,m,n;
    int judge = 0;
    int live_a[31];
    int live_b[31];
    
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&j);
        live_a[j-1] = 1;
    }
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        live_b[j-1] = 1;
    }
    
    for(i=0;i<31;i++){
        if((live_a[i] == 1)&&(live_b[i] != 1)){
            printf("A\n");
        }else if((live_a[i] != 1)&&(live_b[i] == 1)){
            printf("B\n");
        }else if((live_a[i] == 1)&&(live_b[i] == 1) && (judge == 0)){
            printf("A\n");
            judge = 1;
        }else if((live_a[i] == 1)&&(live_b[i] == 1) && (judge == 1)){
            printf("B\n");
            judge = 0;
        }else{
            printf("x\n");
        }
    }
    return 0;
}

// Traffic challan code 1 if challan is given 0 if not n for number of challan and calculate total challan
// charges 2000 for helmet 5000 for plate 3000 red light crossing
// 1st test case was 0 0
// 2nd test case was 2 101 111
#include <stdio.h>
int main(){
    int n;
    int total=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (a==1){
            total+=2000;
        }
        if (b==1){
            total+=5000;
        }
        if (c==1){
            total+=3000;
        }
    }
    printf("%d",total);
    
    
    
    
    
    
    return 0;
}
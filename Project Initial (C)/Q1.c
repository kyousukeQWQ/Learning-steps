#include<stdio.h>
int main (){
    int a,b,c;
    int r[5];
    int max = 0;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        r[0] = a+b+c;
        r[1] = a*b*c;
        r[2] = a+b*c;
        r[3] = a*b+c;
        r[4] = (a+b)*c;
        r[5] = a*(b+c);
         for (int i = 0; i <6; i++){
             if (r[i]>max){
                 max = r[i];
             }
         }
         printf("%d\n",max);
    }
    return 0;
}
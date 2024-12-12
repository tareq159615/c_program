#include<stdio.h>
int main (){
        int a,b,c,d;
        for(a=1; a<=4;a++){
            printf("1st \n");
            for(b=1;b<=4;b++){
                if(b!=a){
                    for(c=1;c<=4;c++){
                        if(c != b && c!=a){
                            for(d=1;d<=4;d++){
                                    if(d!=a && d!=b && d!=c){
                            printf("%d, %d, %d, %d\n",a, b,c,d);
                        }
                    }
                }
            }
                
        }
    }
}  return 0;    
}
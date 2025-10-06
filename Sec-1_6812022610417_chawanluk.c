#include <stdio.h>
#include <string.h>

int main(){
    float OT ;
    int a;
    int level;
    int L=75,M=120,H=180;
    printf("*** OT and Tax Calculator ***\n");
    printf("Enter number of OT days (1-10): ");
    scanf("%d",&a);
    for(int i=0;i<3;i++){
    printf("Enter OT hours for Day %d: ",i+1);
    scanf("%f",&OT);
    }
    printf("Enter income Level(L,M,H): ");
    scanf("%s",&L,&M,&H);
    printf("\n--- income Summarry ---\n");
    printf("income level: ");
  if( level>=40){
    printf("income level: High (180 THB/hr)\n");
    printf("OT Hour Recorded(3): %.2f\n");
}else if (level>=20){
    printf("income level: Mediam (120 THB/hr)\n");
    printf("OT Hour Recorded(2): %.2f\n");
}else if(L=19){
    printf("income level: Low (75 THB/hr)\n");
    printf("OT Hour Recorded(1): %.2f\n");
}
else {
    printf("income level: High (75 THB/hr)\n");
    printf("OT Hour Recorded(1): %.2f\n");
}



 return 0;   
}
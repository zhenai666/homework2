//202611716126
//张东生
#include <stdio.h>
struct Sensor{
    int temp;
    int humi;
    int valid;
};
struct Sensor pack_sensor(int t, int h){
    struct Sensor s;
    if((t >= -20 && t <= 50)&&(h >= 0 && h <= 100)){
        s.valid = 1;
    }else{
        s.valid = 0;
    }
    return s;
}
int main(){
    int t,h;
    scanf("%d %d",&t,&h);
    struct Sensor s = pack_sensor(t,h);
    if(s.valid == 1){
        printf("TEMP=%d HUMI=%d\n",t,h);   
    }else if(s.valid == 0){
        printf("ERROR: Out of Range\n");
    }
    return 0;
}
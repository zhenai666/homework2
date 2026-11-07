//202611716126
//张东生
#include <stdio.h>
struct Window{
    int buffer[3];
    int count;
};
struct Window push_data(struct Window win, int val){
    win.buffer[win.count % 3] = val;
    win.count++;
    return win;
}
int get_average(struct Window win){
    int sum = 0;
    int set = 0;
    if(win.count < 3){
        for(int i=0;i<win.count;i++){
            sum += win.buffer[i];
        }
    return sum/win.count;
    }else if(win.count >= 3){
        for(int l=0;l<3;l++){
            set += win.buffer[(win.count-1-l) % 3];
        }
    return set/3;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    struct Window win;
    win.count = 0;
    int val;
    for(int k=0;k<n;k++){
        scanf("%d",&val);
        win = push_data(win,val);
        printf("%d ",get_average(win));
    }return 0;
}
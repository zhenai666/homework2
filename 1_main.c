//202611716126
//张东生
#include <stdio.h>
struct Player{//定义结构体
    char name[16];
    int score;
};
void sort_players(struct Player arr[], int n){//定义函数
    struct Player temp;
    for(int o=0;o<n-1;o++){       
        for(int j=0;j<n-1;j++){
            if(arr[j].score<arr[j+1].score){
                temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;
            }
        }
    }for(int p=0;p<n;p++){
        printf("%d %s %d\n",p+1,arr[p].name,arr[p].score);
    }
    
}
int main(){//引入信息
    int n;
    scanf("%d",&n);
    struct Player arr[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",arr[i].name,&arr[i].score);
    }
    sort_players(arr,n);//调用sort_players函数
    return 0;
}
#include <stdio.h>
int main(void){
    int input_value;
    scanf("%d", &input_value);
    // 条件1:　0以上かつ10未満の範囲のときはOKとする
    // 条件2:　12以上かつ15未満の範囲のときもOKとする
    int is_OK = (input_value >=0 && input_value < 10) || (input_value >= 12 && input_value < 15);
    if (is_OK) {
    printf("OK");}else{printf("NG");
    }return 0;
}

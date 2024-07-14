#include <stdio.h> 
/*
鸡免同笼:已知笼里共有 35 个头，94 条腿，请设计程序计算出该笼里鸡、免分别有多少只。
*/
int main() {
    int head, leg; // 定义头和腿的总数变量，其类型为整型  
    int chicken, rabbit; // 定义鸡和兔的数量变量，其类型为整型  
  
    scanf("%d %d", &head, &leg);  
  
    // 计算鸡和兔的数量，假设都是鸡，通过计算腿少的数量来计算兔的数量  
    chicken = (leg - 2 * head) / 2; // 鸡的腿数比兔少2条，所以总腿数减去2倍头数再除以2得到鸡的数量  
    rabbit = head - chicken; // 兔的数量等于总头数减去鸡的数量  
  
    // 输出结果  
    printf("鸡的数量是：%d\n", chicken); // 输出鸡的数量  
    printf("兔的数量是：%d\n", rabbit); // 输出兔的数量  
  
    return 0; // 返回0表示程序正常结束  
}

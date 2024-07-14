#include <stdio.h>  
  
/*   
   编写程序实现输出100元人民币兑换成1元、2元、5 元的所有兑换方案。
   提示1*x+2*y+5*z=100，其中x，y，z为非负整数
*/  
  
// 定义一个名为exchange的函数，用于找出所有兑换方案  
void exchange(int total, int unit1, int unit2, int unit5) {    
    // 在函数内部，定义三个整型变量x、y、z，分别代表1元、2元、5元的数量  
    int x, y, z;    
  
    // 第一层循环，用于确定1元硬币的数量，从0开始，直到100元能兑换的1元硬币数量（total/unit1）  
    for (x = 0; x <= total / unit1; x++) {    
        // 第二层循环，用于确定2元硬币的数量，从0开始，直到剩余的金额（total - x * unit1）能兑换的2元硬币数量（(total - x * unit1) / unit2）  
        for (y = 0; y <= (total - x * unit1) / unit2; y++) {    
            // 计算5元硬币的数量，计算方式为总金额减去已兑换的1元和2元硬币金额（total - x * unit1 - y * unit2）再除以5元硬币的面值（unit5）  
            z = (total - x * unit1 - y * unit2) / unit5;    
  
            // 如果5元硬币的数量大于等于0，表示这种兑换方式是可行的  
            if (z >= 0) {    
                // 输出可行的兑换方案，即x个1元硬币，y个2元硬币，z个5元硬币  
                printf("x=%d, y=%d, z=%d\n", x, y, z);    
            }    
        }    
    }    
}    
  
// 主函数，程序从这里开始执行  
int main() {    
    // 调用exchange函数，将100元兑换成1元、2元和5元的硬币，并输出所有可行的兑换方案  
    exchange(100, 1, 2, 5);    
    // 返回0表示程序正常结束  
    return 0;    
}

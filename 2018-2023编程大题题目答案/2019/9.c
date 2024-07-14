#include <stdio.h>  
  
//定义有序整数序列  
int seq[] = {1, 3, 5, 7, 9, 11, 13, 15};  
int len = 8; //序列的长度  
  
int search(int x) {  
    int left = 0, right = len - 1; //定义二分查找的左右边界  
    while (left <= right) {  
        int mid = (left + right) / 2; //计算中间位置  
        if (seq[mid] == x) { //如果中间元素是目标值，则返回其位置  
            return mid;  
        } else if (seq[mid] < x) { //如果中间元素小于目标值，则目标值可能在右半部分  
            left = mid + 1;  
        } else { //如果中间元素大于目标值，则目标值可能在左半部分  
            right = mid - 1;  
        }  
    }  
    return -1; //如果在序列中未找到目标值，则返回-1表示查找失败  
}  

/*
已知一个整数有序序列，请设计程序实现以下功能:
对任意输入的整数 ，查找是否在该序列中，
如果查找成功，则输出x在序列中的位置，
否则输出“查找失败”的提示
*/

int main() {  
    int x;  
    scanf("%d", &x); 
    int pos = search(x); //调用search函数查找目标值的位置  
    if (pos != -1) {  
        printf("%d在序列中的位置是%d\n", x, pos);  
    } else {  
        printf("查找失败\n");  
    }  
    return 0;  
}

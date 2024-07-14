#include <stdio.h>  
#include <string.h>  
  
int isAnagram(char *str1, char *str2) {  
    int count[10] = {0};  
    int i, len1, len2;  
  
    len1 = strlen(str1);  
    len2 = strlen(str2);  
  
    // 如果两个字符串长度不同，则它们不是同数异形体  
    if (len1 != len2) {  
        return 0;  
    }  
  
    // 统计字符串中每个字符出现的次数  
    for (i = 0; i < len1; i++) {  
        count[str1[i] - '0']++;  
        count[str2[i] - '0']--;  
    }  
  
    // 如果统计数组中有一个以上的元素不为0，则它们不是同数异形体  
    for (i = 0; i < 10; i++) {  
        if (count[i] != 0) {  
            return 0;  
        }  
    }  
  
    return 1;  
}  
/*
由相同的数字(包括数字个数)，不同的排列形成的正整数称为“同数异形体”。如
 66167和 16667 均由 3个6,1个 1;1个7组成，故为“同数异形体”
而6617 与 66671 则不是
请设计程序实现同数异形体的判定。
*/
int main() {  
    char str1[100], str2[100];  
  
    printf("请输入第一个字符串：");  
    scanf("%s", str1);  
    printf("请输入第二个字符串：");  
    scanf("%s", str2);  
  
    if (isAnagram(str1, str2)) {  
        printf("这两个字符串是同数异形体。\n");  
    } else {  
        printf("这两个字符串不是同数异形体。\n");  
    }  
  
    return 0;  
}

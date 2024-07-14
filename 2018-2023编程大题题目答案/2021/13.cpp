#include <stdio.h>  
#include <stdlib.h>  
  
// 定义四种花色  
#define RED_HEARTS 0  
#define RED_DIAMONDS 1  
#define BLACK_HEARTS 2  
#define BLACK_DIAMONDS 3  
  
// 定义十三张数字牌  
#define TWO 0  
#define THREE 1  
#define FOUR 2  
#define FIVE 3  
#define SIX 4  
#define SEVEN 5  
#define EIGHT 6  
#define NINE 7  
#define TEN 8  
#define JACK 9  
#define QUEEN 10  
#define KING 11  
#define ACE 12  
  
// 一副牌的总数量  
#define DECK_SIZE 52  
  
void print_deck(int deck[DECK_SIZE][2]) {  
    for (int i = 0; i < DECK_SIZE; ++i) {  
        printf("%d of %s\n", deck[i][1], deck[i][0] == RED_HEARTS ? "Hearts" : (deck[i][0] == RED_DIAMONDS ? "Diamonds" : (deck[i][0] == BLACK_HEARTS ? "Clubs" : "Spades")));  
    }  
}  
  
void sort_deck(int deck[DECK_SIZE][2]) {  
    for (int i = 0; i < DECK_SIZE; ++i) {  
        for (int j = i + 1; j < DECK_SIZE; ++j) {  
            // 首先比较花色，优先级为红桃 > 方块 > 黑桃 > 梅花  
            if (deck[i][0] < deck[j][0]) {  
                int temp[2] = {deck[i][0], deck[i][1]};  
                deck[i][0] = deck[j][0];  
                deck[i][1] = deck[j][1];  
                deck[j][0] = temp[0];  
                deck[j][1] = temp[1];  
            }  
            // 如果花色相同，比较数字牌，优先级为 ACE > KING > QUEEN > JACK > TEN > NINE > EIGHT > SEVEN > SIX > FIVE > FOUR > THREE > TWO  
            else if (deck[i][0] == deck[j][0] && deck[i][1] < deck[j][1]) {  
                int temp[2] = {deck[i][0], deck[i][1]};  
                deck[i][0] = deck[j][0];  
                deck[i][1] = deck[j][1];  
                deck[j][0] = temp[0];  
                deck[j][1] = temp[1];  
            }  
        }  
    }  
}  


/*
扑克牌排序，有红桃、方块、黑桃、梅花，每组 13 个，
按有色花色、红桃方块愿桃、数字 2、3、4、5、6、7、8、9、10、J、Q、.，
将一副扰乱的扑克排序
*/
int main() {  
    int deck[DECK_SIZE][2];  
  
    // 初始化一副牌  
    for (int i = 0; i < DECK_SIZE; ++i) {  
        deck[i][0] = (i / 13) % 4;  // 花色  
        deck[i][1] = i % 13;       // 数字牌  
    }  
  
    printf("Original deck:\n");  
    print_deck(deck);  
  
    sort_deck(deck);  
  
    printf("\nSorted deck:\n");  
    print_deck(deck);  
  
    return 0;  
}

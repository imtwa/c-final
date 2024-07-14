#include <stdio.h>
#define ROW 8
#define COL 8
int perimeter(int grid[ROW][COL]);

int main() {
//	int array[ROW][COL] = { 0 };
//	for (int i = 0; i < ROW; i++)
//		for (int j = 0; j < COL; j++)
//			scanf("%d", &array[i][j]);

	int array[ROW][COL] = { {0,1,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,1},
		{0,1,1,1,1,1,1,0},
		{0,1,1,1,1,0,0,0},
		{0,0,1,0,0,0,0,0},
		{0,0,1,0,0,0,0,0},
		{1,1,1,1,1,1,1,1},
		{0,0,1,0,0,0,0,0}
	};

	printf("%d", perimeter(array));
}

int perimeter(int grid[ROW][COL]) {
	int i,j,k;
	int z=0;
	int dx[4]= {0,0,-1,1};
	int dy[4]= {-1,1,0,0};

	for(i=0; i<ROW; i++) {
		for(j=0; j<COL; j++) {
			if(grid[i][j]==1) {
				//四个方向寻找
				int count = 0;
				for(k=0; k<4; k++) {
					int x=i+dx[k];
					int y=j+dy[k];
					//未超过边界
					if(x>=0&&x<ROW&&y>=0&&y<COL) {
						//如果是涂色区域
						if(grid[x][y]==1) {
							count++;
						}
					}
				}
				z+=4-count;
			}
		}
	}
	return z;
}

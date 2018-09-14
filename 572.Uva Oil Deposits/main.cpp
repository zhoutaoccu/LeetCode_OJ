#include <iostream>
#include <cstdio>
#include <cstring>
//主要通过dfs迭代找到所有联通的@符号，同时用idx记录已经完成的联通@符号。
/*输入示例\
5 5
****@
*@@*@
*@**@
@@@*@
@@**@ */
const int maxn = 100 + 5;
char pic[maxn][maxn];
int m,n,idx[maxn][maxn];

void dfs(int r, int c, int id){
    if (r <0 || r>=m || c<0 || c>=n) return;
    if (idx[r][c]>0 || pic[r][c]!='@') return;
    idx[r][c]=id;
    for (int dr=-1;dr<=1;dr++) //上下左右，斜对角都扫描，都属于相邻元素
        for (int dc=-1;dc<=1;dc++)
            if(dr!=0 || dc!=0) //等效于 ！(dr==0 && dc ==0)，不能都等于零
                dfs(r+dr,c+dc,id);
}

int main() {
    printf("%d\n",sizeof(idx));
    while (scanf("%d %d",&m,&n) == 2 && m && n){
        for (int i =0; i<m; i++) scanf("%s",pic[i]);
        memset(idx,0,sizeof(idx));
        int cnt = 0;
        for (int i =0;i<m;i++)
            for (int j =0;j<n;j++)
                if(pic[i][j]=='@' && idx[i][j]==0)
                    dfs(i,j,++cnt);
        printf("%d\n",cnt);
    }
    return 0;
}
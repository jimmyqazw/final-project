#define MAX 100
extern int high, width;//地圖高度與寬度 
extern int bird_x, bird_y;//小鳥的位置 
extern int through, wall;//通道的x座標和牆的起始座標y 
extern int map[MAX][MAX];//記錄頁面的顯示 
/*0代表空白，1代表小鳥的位置，2代表牆
3代表上下圍牆，4代表左右圍牆*/
extern bool book[MAX][MAX];//代表改點有圍牆
extern int score;//記錄得分 

void startup();
void startMap();
void HideCursor();//隱藏游標 
void gotoxy(int x, int y);
void UPdatewithOutinput();
void UPdatewithinput();
void show();
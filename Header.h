#define MAX 100
extern int high, width;//�a�ϰ��׻P�e�� 
extern int bird_x, bird_y;//�p������m 
extern int through, wall;//�q�D��x�y�ЩM�𪺰_�l�y��y 
extern int map[MAX][MAX];//�O����������� 
/*0�N��ťաA1�N��p������m�A2�N����
3�N��W�U����A4�N���k����*/
extern bool book[MAX][MAX];//�N����I������
extern int score;//�O���o�� 

void startup();
void startMap();
void HideCursor();//���ô�� 
void gotoxy(int x, int y);
void UPdatewithOutinput();
void UPdatewithinput();
void show();
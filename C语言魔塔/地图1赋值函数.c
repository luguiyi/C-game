#include "peo.c"  
//赋值函数
void map_assignin(char map[SIZEX][SIZEY],struct people peo[])//这里定义的map为形参 
{	 
	int i,j,x,y;
	mapmark=1;
	setcolor(13,0);
	printf ("\t\t\t\t按F1查看帮助\n");
	Sleep (1000); 
	printf ("\t\t\t\t第 %d 块地图\n",mapmark);
	Sleep (1000);
	system("cls");
	for (i=0;i<SIZEX;i++)//地图初始化为0 
		{
			for (j=0;j<SIZEY;j++)
				{
		 			map[i][j]=' ';
				}
		}
	
	for	(j=0;j<SIZEY;j++,j++)	//墙	-88 -128 上边界
		{
		 	map[0][j]=-88;
		 	map[0][j+1]=-128;
		}
	 
	for	(j=0;j<SIZEY;j++,j++)	//下边界
		{
		 	map[SIZEX-1][j]=-88;
		 	map[SIZEX-1][j+1]=-128;
		}
	
	for	(i=0;i<SIZEX;i++)	//左边界
		{
		 	map[i][0]=-88;
		 	map[i][1]=-128;
		} 

	for	(i=0;i<SIZEX;i++)	//右边界
		{
		 	map[i][SIZEY-2]=-88;
		 	map[i][SIZEY-1]=-128;
		} 
		
	for	(i=6;i<9;i++)		//墙 
		{
			map[i][6]=-88;
		 	map[i][7]=-128;
		}
	for	(i=6;i<9;i++)
		{
			map[i][10]=-88;
			map[i][11]=-128;
		}
	for	(i=1;i<5;i++)
		{
			map[i][4]=-88;
			map[i][5]=-128;
		}
	
	for(i=8;i<SIZEY-2;i++,i++)//墙	-88 -128 墙初始赋值，墙初始化位置
		{
			map[4][i]=-88;
			map[4][i+1]=-128;
		}	
			map[2][6]=-88;
			map[2][7]=-128;
			map[2][8]=-88;
			map[2][9]=-128;
			map[2][10]=-88;
			map[2][11]=-128;
			map[2][18]=-88;
			map[2][19]=-128;
			map[3][18]=-88;
			map[3][19]=-128;
			map[1][28]=-88;
			map[1][29]=-128;
			map[2][28]=-88;
			map[2][29]=-128;
			map[2][30]=-88;
			map[2][31]=-128;
			map[2][32]=-88;
			map[2][33]=-128;
			map[2][34]=-88;
			map[2][35]=-128;
			map[5][16]=-88;
			map[5][17]=-128;
			map[6][16]=-88;
			map[6][17]=-128;
			map[8][16]=-88;
			map[8][17]=-128;
			map[5][30]=-88;
			map[5][31]=-128;
			map[6][30]=-88;
			map[6][31]=-128;
			map[8][30]=-88;
			map[8][31]=-128;
			map[1][14]=-88;
			map[1][15]=-128;
			map[2][14]=-88;
			map[2][15]=-128;
			map[1][22]=-88;
			map[1][23]=-128;
			map[2][22]=-88;
			map[2][23]=-128;
			map[6][24]=-88;
			map[6][25]=-128;
			map[7][24]=-88;
			map[7][25]=-128;
			map[8][24]=-88;
			map[8][25]=-128;
			
			map[6][4]=-88;//墙	-88 -128 墙初始赋值，墙初始化位置
			map[6][5]=-128;	 

			map[6][8]=-71;//怪 -71 -42 怪物初始赋值，怪物初始化位置
			map[6][9]=-42;
			map[6][2]=-71;
			map[6][3]=-42;
			map[2][36]=-71;
			map[2][37]=-42;
			map[7][30]=-71;
			map[7][31]=-42;
			map[3][10]=-71;
			map[3][11]=-42;
			map[5][24]=-71;
			map[5][25]=-42;
		
			map[8][8]=-95;//血 -47 -86 血初始赋值，血初始化位置
			map[8][9]=-12;
			map[8][4]=-95;
			map[8][5]=-12;
			map[1][30]=-95;
			map[1][31]=-12;
			map[6][26]=-95;
			map[6][27]=-12;
			map[8][32]=-95;
			map[8][33]=-12;
			map[3][32]=-95;
			map[3][33]=-12;
			map[1][24]=-95;
			map[1][25]=-12;
			map[1][26]=-95;
			map[1][27]=-12;
			map[2][24]=-95;
			map[2][25]=-12;
			map[2][26]=-95;
			map[2][27]=-12;
			map[8][28]=-95;
			map[8][29]=-12;
		
			map[6][12]=-95;//攻  -71 -91 攻初始赋值，攻初始化位置
			map[6][13]=-8;
			map[8][12]=-95;
			map[8][13]=-8;
			map[1][6]=-95;
			map[1][7]=-8;
			map[1][32]=-95;
			map[1][33]=-8;
			map[7][22]=-95;
			map[7][23]=-8;
			map[3][16]=-95;
			map[3][17]=-8;
			map[4][6]=-95;
			map[4][7]=-8;
		
			map[1][2]=-95;//人	-95 -30 人物初始赋值，人物初始化位置
			map[1][3]=-30;
		
			map[7][SIZEY-2]=-95;//门	-95 -14 门初始赋值，门初始化位置
			map[7][SIZEY-1]=-14;
			
			map[1][10]=-69;//虎 	-69 -94  人物初始赋值，人物初始化位置
			map[1][11]=-94;
			map[3][28]=-69;
			map[3][29]=-94;
			map[5][10]=-69;
			map[5][11]=-94;
			map[3][22]=-69;
			map[3][23]=-94;
			
			map[1][8]=-49;//象 	-49 -13  人物初始赋值，人物初始化位置
			map[1][9]=-13;
			map[1][18]=-49;
			map[1][19]=-13;
			map[7][16]=-49;
			map[7][17]=-13;
			map[6][20]=-49;
			map[6][21]=-13;
			map[7][20]=-49;
			map[7][21]=-13;
			map[5][20]=-49;
			map[5][21]=-13;
			map[8][20]=-49;
			map[8][21]=-13;

}
//墙	-88 -128
//怪	-71 -42 
//血	-95 -12
//攻	-71 -91
//人	-95 -30
//门	-95 -14 
//王 	-51 -11 
//虎 	-69 -94
//象 	-49 -13

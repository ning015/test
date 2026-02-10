#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{srand(time(0));
 int number=rand()%100;//随机生成一个小于100的数
 printf("我已经想好数字了\n请你来猜一猜\n");
 int a;
 int count=0;
 scanf("%d",&a);
 count++;
    while(a!=number)
    {printf("很遗憾，再试一次吧！\n");
     if(a<number) 
       {printf("你输入的值小于它"); 
	   }
	 else{printf("你输入的值大于它");
	     } 
     scanf("%d",&a);
     count++;
	}
    
	
	if(a==number)
    {printf("恭喜你猜对了，耗费%d次机会",count);
	}
 return 0;
}

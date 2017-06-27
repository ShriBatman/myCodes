#include<stdio.h>
#include<string.h>

int main()
{
	int t,i;
	char ch;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf(" %c",&ch);
		
		if(ch=='b' || ch=='B')
		{
			printf("BattleShip\n");
		}
		
		else if(ch=='c' || ch=='C')
		{
			printf("Cruiser\n");
		}
		
		else if(ch=='d' || ch=='D')
		{
			printf("Destroyer\n");
		}
		
		else if(ch=='f' || ch=='F')
		{
			printf("Frigate\n");
		}
		
	}
	
	return 0;
}

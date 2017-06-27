#include<stdio.h>
#include<stdlib.h>

struct row{
	int rowno;
	struct row *rnext;
	struct node *right;
}*rptr=NULL,*rcur,*rnew;

struct col{
	int colno;
	struct col *cnext;
	struct node *down;
}*cptr=NULL,*cnew,*ccur;

struct node{
	int row;
	int col;
	int data;
	struct node *right;
	struct node *down;
}*ntemp,*newnode;

struct spnode{
	struct row *frow;
	struct col *fcol;
	int noofrow;
	int noofcol;
}*spnew;


int main()
{
	int i,j,k,l,m,n,x,y,z;
	
	scanf("%d",&i);
	scanf("%d",&j);
	struct node *colcur[j],*rowcur[i];
	
	int arr[i][j];
	
	for(k=0;k<i;k++)
	{
		for(l=0;l<j;l++)
		{
			scanf("%d",&arr[k][l]);
		}
		printf("\n");
	}
		
			for(x=0;x<i;x++)
			{
				ccur=cptr;
				rowcur[x]=NULL;
				rnew=(struct row *) malloc (sizeof(struct row));
				rnew->right=NULL;
				rnew->rnext=NULL;
				rnew->rowno=x;
				
				if(rptr==NULL)
				{
					rptr=rnew;
					rcur=rnew;
				}
				else
				{
					rcur->rnext=rnew;
					rcur=rnew;
				}
				
				
				for(y=0;y<j;y++)
				{
					n=arr[x][y];
					if(x==0)
					{
					
					cnew=(struct col *) malloc (sizeof(struct col));
					cnew->down=NULL;
					cnew->cnext=NULL;
					cnew->colno=y;
					colcur[y]=NULL;
					
					if(cptr==NULL)
					{
						cptr=cnew;
						ccur=cnew;
					}
					else
					{
						ccur->cnext=cnew;
						ccur=cnew;
					}
					}
					
					
					if(y!=0 && x!=0)
					{
						ccur=ccur->cnext;
					}
					
					
					if(n!=0)
					{
						
						newnode=(struct node *) malloc (sizeof(struct node));
						newnode->right=NULL;
						newnode->down=NULL;
						newnode->row=x;
						newnode->col=y;
						newnode->data=n;
						
						if(colcur[y]==NULL && rowcur[x]==NULL)
						{
							rowcur[x]=newnode;
							ccur->down=newnode;
							colcur[y]=newnode;
							rnew->right=newnode;
						}
						else if(colcur[y]==NULL && rowcur[x]!=NULL)
						{
							rowcur[x]->right=newnode;
							rowcur[x]=newnode;
							colcur[y]=newnode;
							ccur->down=newnode;
						}
						else if(rowcur[x]==NULL && colcur[y]!=NULL)
						{
							rowcur[x]=newnode;
							colcur[y]->down=newnode;
							colcur[y]=newnode;
							rnew->right=newnode;
						}
						else if(rowcur[x]!=NULL && colcur[y]!=NULL)
						{
							rowcur[x]->right=newnode;
							rowcur[x]=newnode;
							colcur[y]->down=newnode;
							colcur[y]=newnode;
						}
							
					}
				}
			}
							

	spnew=(struct spnode *) malloc (sizeof(struct spnode));
	spnew->noofrow=i;
	spnew->noofcol=j;
	spnew->fcol=cptr;
	spnew->frow=rptr;
	
	printf("through row\n");
	
	while(spnew->frow!=NULL)
	{
		ntemp=spnew->frow->right;
		printf("%d\t",spnew->frow->rowno);
		while(ntemp!=NULL)
		{
			printf("%d %d %d\t",ntemp->row,ntemp->col,ntemp->data);
			ntemp=ntemp->right;
		}
		printf("\n");
		spnew->frow=spnew->frow->rnext;
	}
	
	printf("through column\n");
	
	while(spnew->fcol!=NULL)
	{
		ntemp=spnew->fcol->down;
		printf("%d\t",spnew->fcol->colno);
		while(ntemp!=NULL)
		{
    		printf("%d %d %d\t",ntemp->col,ntemp->row,ntemp->data);
			ntemp=ntemp->down;
		}
		printf("\n");
		spnew->fcol=spnew->fcol->cnext;
	}
	
	return 0;
}

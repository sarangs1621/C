#include <stdio.h>
int main()
{
	int r,c;
	printf("Enter no of rows\n");
	scanf("%d",&r);
	printf("Enter no of columns\n");
	scanf("%d",&c);
	int a[r][c],ans[r][c];
	printf("Fill the matrix with binary ie 0 and 1\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]==0)
			{
				if((i==0&&j==0)&&((a[i+1][j]!=1 || a[i+1][j+1]!=1 || a[i][j+1]!=1)))
				ans[i][j]=1;
				else if((i==0&&j==c-1)&&(a[i+1][j]!=1 || a[i+1][j-1]!=1 || a[i][j-1]!=1))
				ans[i][j]=1;
				else if((i==r-1&&j==c-1)&&(a[i][j-1]!=1 || a[i-1][j-1]!=1 || a[i-1][j]!=1))
				ans[i][j]=1;
				else if((i==r-1&&j==0)&&(a[i][j+1]!=1 || a[i-1][j+1]!=1 || a[i-1][j]!=1))
				ans[i][j]=1;
				else if(((i>0&&i<r-1)&&j==0)&&(a[i-1][j]!=1 || a[i-1][j+1]!=1 || a[i][j+1]!=1 || a[i+1][j]!=1 || a[i+1][j+1]!=1))
				ans[i][j]=1;
				else if(((i>0&&i<r-1)&&j==c-1)&&(a[i][j-1]!=1 || a[i-1][j]!=1 || a[i-1][j-1]!=1 || a[i+1][j]!=1 || a[i+1][j-1]!=1))
				ans[i][j]=1;
				else if(((j>0&&j<c-1)&&i==0)&&(a[i][j-1]!=1 || a[i][j+1]!=1 || a[i+1][j+1]!=1 || a[i+1][j]!=1 || a[i+1][j-1]!=1))
				ans[i][j]=1;
				else if(((j>0&&j<c-1)&&i==r-1)&&(a[i-1][j]!=1 || a[i-1][j+1]!=1 || a[i-1][j-1]!=1 || a[i][j-1]!=1 || a[i][j+1]!=1))
				ans[i][j]=1;
				else if(((i>0&&i<r-1)&&(j>0&&j<c-1))&&(a[i][j-1]!=1 || a[i][j+1]!=1 || a[i-1][j-1]!=1 || a[i-1][j]!=1 || a[i-1][j+1]!=1 || a[i+1][j-1]!=1 || a[i+1][j]!=1 || a[i+1][j+1]!=1))
				ans[i][j]=1;
				else
				ans[i][j]=0;
			}
			else
			{
			ans[i][j]=1;
		}
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			a[i][j]=ans[i][j];
		}
	}
	printf("Resultant matrix :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

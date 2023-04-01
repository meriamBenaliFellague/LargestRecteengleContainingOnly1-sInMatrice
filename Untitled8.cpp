#include<stdio.h>
int max(int a,int b,int c);
int main()
{
int i,j,h,k,n,m,q,m5=0,f,I,J,o=0,max1=0,max2=0,max3=0,count1=0,count2=0,count3=0,count4=0,count5=0;
printf("enter number of rows: ");
scanf("%d",&n);
printf("enter number of columns: ");
scanf("%d",&m);
int M[n][m];

for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		printf("enter 1 or 0: ");
		scanf("%d",&M[i][j]);
	}
}

for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		count1=0;count2=0;count3=0;
		if(M[i][j]==1){
			count1++;count3=count1;
			for(I=i+1;I<n;I++){
				if(M[I][j]==1){
					count2++;
				}else{break;
				}
			}
			count3+=count2;
			if(max1<count3){
				max1=count3;
			}
		}
	}
}
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		count1=0;count2=0;count3=0;
		if(M[i][j]==1){
			count1++;count3=count1;
			for(J=j+1;J<m;J++){
				if(M[i][J]==1){
					count2++;
				}else{break;
				}
			}
			count3+=count2;
			if(max2<count3){
				max2=count3;
			}
		}
	}
}
for(i=0;i<n;i++){
	for(j=0;j<m;j++){o=0;
		count1=0;count2=0;count3=0;count4=0;
		if(M[i][j]==1){
			h=i;k=j;
			count1++;count3=count1;
			for(J=j+1;J<m;J++){
				if(M[i][J]==1){
					count2++;
				}else{break;
				}
			}
			count3+=count2;
			
			for(f=h+1;f<n;f++){o++;
				count1=0;count2=0;count4=0;q=k;m5;
				if(M[f][q]==1){
					count1++;count4=count1;
					if(M[f][q+1]==1){
			            count2++;
			            for(J=q+2;J<m;J++){
				            if(M[f][J]==1){
					            count2++;
				            }else{break;
				            }
			            }
			            count4+=count2;
			           if(count4>=count3){
			           	    count5=count4+count3;
					   }else{
					   	    if(count4<count3){
					   	    	count5=count4*(o+1);
							}
					   }
					   if(m5<count5){
					   	m5=count5;
					   }
				    }else{break;
					}
			    }else{break;
				}
			}
			if(max3<m5){
				max3=m5;
			}
	}
}
}printf("%d",max(max1,max2,max3));
}

int max(int a,int b,int c){
if(a>b){
	if(a>c){
		return a;
	}else{
		return c;
	}
}else{
	if(b>c){
		return b;
	}else{
		return c;
	}
}
}


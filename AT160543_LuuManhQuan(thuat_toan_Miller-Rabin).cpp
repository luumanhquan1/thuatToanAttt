#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
 int mod( int a,int b){
	int kq;
	kq=a%b;
	return kq<0?kq+b:kq;
}
int tinh(int a,int k,int n){
		int mg[100];
	int i=0;
	int coso=k;
	while(coso>0){
		mg[i]=coso%2;
		coso=coso/2;
		i++;
	}
	int b=1;
	if(k==0){
		return b;
	}
	int A=a;
	if(mg[0]==1){
		b=a;
	}
	for(int j=1;j<i;j++){
		A=mod(A*A,n);
		if(mg[j]==1){
			b=mod(A*b,n);
		}
	}
	return b;
}
int kiemTra(int t,int n,int r,int s){
	for(int i=0;i<t;i++){
		int a=random(2,n-2);
		int y=tinh(a,r,n);
		if(y!=1&&y!=n-1){
		   int j=1;
		   while(j<=s-1&&y!=n-1){
		   y=mod(y*y,n);
		   if(y==1){
		   	return 1;
		   }
		   j=j+1;
		   }
		   if(y!=n-1){
		   return 1;
		   }
		}
	}
	return 0;
}
int main(){
	int g=1,n,t;
	printf("Nhap n(n la so nguyen le):");
	while(1){
		scanf("%d",&n);
		if(n%2!=0){
			break;
		}
		printf("nhap lai:");
	}
	printf("Nhap t(t>=1):");
	scanf("%d",&t);
	int tinhMu;
	int r=1,s;
        for(int i=1;i<n;i++){
		for(int j=1;j<n;j=j+2){
			tinhMu=pow(2,i);
			int g=tinhMu*j;
			if(g==n-1){
			r=j;
			s=i;
			break;
			}
		}
		}
	if(kiemTra(t,n,r,s)==1){
	  printf("hop so");
	}else{
		printf("Nguyen to");
	}
}

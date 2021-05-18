#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>
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
int kiemTra(int t,int n){
		int g=1;
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
printf("Dang ranDom......");
	while(1){
		srand((unsigned) time(0));
		int a;
		a=rand();
		if(a%2==0){
			continue;
		}
		if(kiemTra(3,a)==0){
			printf("so nguyen to:%d",a);
			return 0;
		}
	}
}

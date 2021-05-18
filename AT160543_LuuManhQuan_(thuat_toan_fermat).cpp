#include<stdio.h>
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
int kiemTra(int t,int n){
	for(int i=0;i<t;i++){
		int a=random(2,n-2);
		int r=tinh(a,n-1,n);
		if(r!=1){
		return 1;
		}
	}
	return 0;
}
int main(){
	int n,t;
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
	if(kiemTra(t,n)==1){
	  printf("hop so");
	}else{
		printf("Nguyen to");
	}
}

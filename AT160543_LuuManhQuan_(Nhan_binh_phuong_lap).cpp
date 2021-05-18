#include<stdio.h>
int mod( int a,int b){
	int kq;
	kq=a%b;
	return kq<0?kq+b:kq;
}
int tinh(int a,int k,int n,int i,int mg[]){
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
int main(){
	int a,k,n;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap k:");
	scanf("%d",&k);
	printf("Nhap n:");
	scanf("%d",&n);
	int mg[100];
	int i=0;
	int coso=k;
	while(coso>0){
		mg[i]=coso%2;
		coso=coso/2;
		i++;
	}
printf("ket qua:%d",tinh(a,k,n,i,mg));
}

#include<stdio.h>
#include<math.h>
int mod(long long int a,long long int b){
	int kq;
	kq=a%b;
	return kq<0?kq+b:kq;
}
int UCLL(int a,int b){
	int A=a;
	int B=b;
	while(B>0){
		int R=mod(A,B);
		A=B;
		B=R;
	}
	return A;
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
 long long int a=2,b=2;
	while(1){
		a=mod(a*a+1,n);
		b=mod(b*b+1,n);
		b=mod(b*b+1,n);
		int d=UCLL(a-b,n);
		if(d>1&&d<n){
			printf("Thua so khong tam thuong la:%d",d);
			return 0;
		}else if(d==n){
			printf("that bai");
			return 0;
		}
	}
}

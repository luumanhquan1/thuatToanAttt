#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
int nhapW(){
	int w;
		printf("Nhap  W(chia het 8):");
	do{
		scanf("%d",&w);
		if(w%8==0){
			break;
		}
		printf("nhap lai:");
	}while(1);
	return w;
}
int nhapFvaA(char a){
	int f;
	printf("Nhap %c:",a);
	scanf("%d",&f);
	return f;
}
int tinhSoMu(int a,int w){
	int ketQua=1;
	for(int i=0;i<a*w;i++){
		ketQua=ketQua*2;
	}
	return ketQua;
}
int tinhMang(int t,int a,int w){
	int m[t];
	int tg;
	for(int i=t-1;i>=0;i--){
	 if(i==t-1){
	 	m[i]=(int)a/tinhSoMu(i,w);
	 	tg=a%tinhSoMu(i,w);
	 }
	 else{
	 	m[i]=tg/tinhSoMu(i,w);
	 	tg=a%tinhSoMu(i,w);
	 }
	}
	printf("mieu dien dang mang:");
       for(int i=t-1;i>=0;i--){
	    printf("%d ",m[i]);
	   }
}
int main() {
	int w,f,a,m,t;
    w=nhapW();
   f=nhapFvaA('F');
   a=nhapFvaA('a');
   m=ceil(log2(f));
   t=ceil((double)m/w);
   tinhMang(t,a,w);
	return 0;
}

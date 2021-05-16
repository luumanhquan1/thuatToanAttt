#include<stdio.h>
#include<math.h>
int tinhSoMu(int w){
	int ketQua=1;
  for(int i=0;i<w;i++){
  ketQua=ketQua*2;
  }
return ketQua;
}
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
int kiemTraBit(){
  int n;
  do{
  	scanf("%d",&n);
  	if(n>=0){
	  break;
	  }
	  printf("Nhap Lai:");
  }while(1);
  return n;
}
int coSoU(int n){
	int u=0;
    int a[16];
  for(int i=0;i<16;i++){
     a[i]=n%2;
     n=n/2;
  }
     for(int i=16-1;i>=8;i--){
      u=u+a[i]*tinhSoMu(i-8);
     }
   return u;
}
int coSoV(int n){
	int u=0;
    int a[16];
  for(int i=0;i<16;i++){
     a[i]=n%2;
     n=n/2;
  }
     for(int i=7;i>=0;i--){
 u=u+a[i]*tinhSoMu(i);
}
   return u;
}
void tinh(int a[],int b[],int t){
	int UV=0;
	int c[2*t];
	for(int i=0;i<t;i++){
	c[i]=0;
	}
 for(int i=0;i<t;i++){
 	int U=0;
   for(int j=0;j<t;j++){
     int V=0;
     UV=c[i+j]+a[i]*b[j]+U;
     U=coSoU(UV);
     c[i+j]=coSoV(UV);

   }
   c[i+t]=U;
 }
 for(int i=2*t-1;i>=0;i--){
 printf("%d ",c[i]);
 }
}
int main(){
 int p,m,t,w;
 printf("Nhap p");
 scanf("%d",&p);
    w=nhapW();
   m=ceil(log2(p));
   t=ceil((double)m/w);
   	int a[t],b[t];
	printf("Nhap mang A:\n");
	for(int i=t-1;i>=0;i--){
		printf("a[%d]= ",i);
		a[i]=kiemTraBit();
	}
	printf("Nhap mang B:\n");
	for(int i=t-1;i>=0;i--){
		printf("a[%d]= ",i);
		b[i]=kiemTraBit();
	}
	tinh(a,b,t);
	return 0;
}

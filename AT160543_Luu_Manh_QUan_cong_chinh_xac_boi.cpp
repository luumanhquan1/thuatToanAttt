#include<stdio.h>
int mod(int a,int b){
int r=a%b;
return r<0? r +b:r;
}
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
int kiemTrabit(){
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
int ganE(int a,int m,int e,int w){
  if(a+m+e>=tinhSoMu(w)){
  return 1;
    }
   else{
	return 0;
   }
}
void tinh(int a[],int b[],int w,int t){
	int c[t];
  int e=0;
  c[0]=mod((a[0]+b[0]),tinhSoMu(w));
  e=ganE(a[0],b[0],e,w);
  for(int i=1;i<t;i++){
   	  c[i]=mod((a[i]+b[i]+e),tinhSoMu(w));
   e=ganE(a[i],b[i],e,w);
  }
  printf("e=%d\n",e);
  printf("mang cong:");
 for(int i=t-1;i>=0;i--){
 	printf("%d ",c[i]);
 	}
}
int main(){
	int w,t;
	w=nhapW();
	printf("Nhap T(lon hon 0):");
	do{
		scanf("%d",&t);
		if(t>0){
		break;
		}
		printf("Nhap Lai:");
	}while(1);
	int a[t],m[t];
	printf("Nhap mang A:\n");
	for(int i=t-1;i>=0;i--){
		printf("a[%d]= ",i);
		a[i]=kiemTrabit();
	}
	printf("Nhap mang m:\n");
	for(int i=t-1;i>=0;i--){
		printf("a[%d]= ",i);
		m[i]=kiemTrabit();
	}

	tinh(a,m,w,t);
	return 0;
}

#include<stdio.h>
#include<math.h>
int mod(int a,int b){
int r=a%b;
return r<0? r +b:r;
}
int ganETru(int a,int b,int e){
 if(a-b-e<0){
 return 1;
 }
 else{
 	return 0;
 }
}
int tinhSoMu(int a,int w){
	int ketQua=1;
	for(int i=0;i<a*w;i++){
		ketQua=ketQua*2;
	}
	return ketQua;
}
int ganECong(int a,int b,int e,int w){
 if(a+b+e>=tinhSoMu(1,w)){
  return 1;
    }
   else{
	return 0;
   }
}
int tinhCCongP(int c[],int t,int p,int w){
	int m[t];
	int tg;
	for(int i=t-1;i>=0;i--){
	 if(i==t-1){
	 	m[i]=(int)p/tinhSoMu(i,w);
	 	tg=p%tinhSoMu(i,w);
	 }
	 else{
	 	m[i]=tg/tinhSoMu(i,w);
	 	tg=p%tinhSoMu(i,w);
	 }
	}

		int C[t];
  int e=0;
 C[0]=mod((c[0]+m[0]),tinhSoMu(1,w));
  e=ganECong(c[0],m[0],e,w);
  for(int i=1;i<t;i++){
   	  C[i]=mod((c[i]+m[i]+e),tinhSoMu(1,w));
   e=ganECong(c[i],m[i],e,w);
  }
  printf("e=%d\n",e);
  printf("mang:");
 for(int i=t-1;i>=0;i--){
 	printf("%d ",C[i]);
 	}
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

void tinh(int a[],int b[],int w,int t,int p){
	int c[t];
  int e=0;
  c[0]=mod((a[0]-b[0]),tinhSoMu(1,w));
  e=ganETru(a[0],b[0],e);
  for(int i=1;i<t;i++){
   	  c[i]=mod((a[i]-b[i]-e),tinhSoMu(1,w));
   e=ganETru(a[i],b[i],e);
  }
  do{
if(e==0){
	 printf("e=%d\n",e);
  printf("mang :");
 for(int i=t-1;i>=0;i--){
 	printf("%d ",c[i]);
 	}
 	break;
 	}
 	else{
 		tinhCCongP(c,t,p,w);
 		break;
	 }
  }while(1);
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
		tinh(a,b,w,t,p);
}

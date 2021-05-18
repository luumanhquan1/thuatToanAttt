#include<stdio.h>
#include<math.h>
int main(){
  int n;
 int max=1;
 int min=2;
  int delta;
  printf("Nhap n:");
  scanf("%d",&n);
  printf("nhap delta<=%f :",(double)sqrt(n));
  while(true){
  scanf("%d",&delta);
  if(delta<=(double)sqrt(n)){
  break;
  }
  printf("nhap lai:");
  }
  int kiemTra[n];
  for(int i=2;i<=delta+1;i++){
  	kiemTra[i]=1;
  	}
  while(1){
  	max=max+delta;//max cua doan
  	for(int i=min;i<=max;i++){
  		if(i==n){//max cuoi doan
	    max=n;
	    }
  		if(i<=1+delta){//doan dau tien
		if(kiemTra[i]==1){
				for(int j=2*i;j<=max;j=j+i){
			  kiemTra[j]=0;
		  }
		}
		if(kiemTra[i]==1){//in doan dau tien ra so nguyen to
		printf("%d ",i);
		}
		  }
		  else{
		  	for(int mg=min;mg<=max;mg++){//thiet lap mang bool
			     kiemTra[mg]=1;
			  }		  
		  	for(int k=2;k<=(int)sqrt(max);k++){	//lay P
			     if(kiemTra[k]==1){
                        if(i%k==0){//lat bit
						 kiemTra[i]=0;
						}
				 }
			  }
			  if(kiemTra[i]==1){//in ra so nguyen to
			  	printf("%d ",i);
			  }
		  }
	  if(i>=n){//lon hon n thi exit
	  return 0;
	  }
	  }
	  min=max+1;//min cua doan
	  
  	}
 }
	
   
	


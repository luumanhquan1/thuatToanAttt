#include<stdio.h>
#include<math.h>
int main(){
  int n;
  int max=1;
  int delta;
  printf("Nhap n:");
  scanf("%d",&n);
  int kiemTra[n+1];
	for(int i=0;i<=n;i++){
		kiemTra[i]=1;
	}
  printf("nhap delta<=%f :",(double)sqrt(n));
  while(true){
  scanf("%d",&delta);
  if(delta<=(double)sqrt(n)){
  break;
  }
  printf("nhap lai:");
  }
  int soDoan=round((double)n/delta);
  int min=1+delta;
           for(int i=0;i<soDoan;i++){
        
           	for(int y=0;y<delta;y++){
			  max++; 
			  if(max>=n){
			  break;
			  }
			}
           	if(i==0){
			   for(int j=2;j<=max;j++){
		int dem=0;
		if(kiemTra[j]==0){
			continue;
		}
		for(int k=2*j;k<=1+delta;k=k+j){
              if(kiemTra[k]==1){
              	dem++;
			  }
			  kiemTra[k]=0;
		  }
		  if(dem==0){
		  	continue;
		  }
	}
       min=min+1;
			   }else{
			   	for(int l=min;l<=max;l++){
				   for(int a=2;a<=(int)sqrt(max);a++){
				   	if(kiemTra[a]==0){
					   continue;
					   }
				   	if(l%a==0){
					    kiemTra[l]=0;
					   }
				   }
				min=max+1;
				}
    
}
 }
 for(int i=2;i<=n;i++){
		   if(kiemTra[i]==1){
		   printf("%d ",i);
		   }
		  }
 }
	
   
	


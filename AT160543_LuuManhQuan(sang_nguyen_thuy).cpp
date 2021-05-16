#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int kiemTra[n+1];
	for(int i=0;i<=n;i++){
		kiemTra[i]=1;
	}
	for(int i=2;i<=n;i++){
		int dem=0;
		if(kiemTra[i]==0){
			continue;
		}
		for(int j=2*i;j<=n;j=j+i){
              if(kiemTra[j]==1){
              	dem++;
			  }
			  kiemTra[j]=0;
		  }
		  if(dem==0){
		  	break;
		  }
	}
	
	for(int i=2;i<=n;i++){
		if(kiemTra[i]==1){
			printf("%d ",i);
		}
	}
}

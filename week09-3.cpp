///week09-3.cpp
/// YEH001_Star
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			printf("*");
		}
		printf("\n",i);
	}

}

#include<iostream>

int main(){
	int n;
	scanf("%d",&n);
	/*int *p = (int*)malloc(n*sizeof(int));
	for(int i = 0; i <n ;i++){
		scanf("%d",&p[i]);
	}
	
	for(int i = 0; i <n ;i++){
		printf("%d",p[i]);
	}

	free(p);
	printf("\n*******************************");
	for(int i = 0; i <n ;i++){
		printf("\n%d",p[i]);
	}
	*/
	int *a = new int;
	printf("%p",*a);
}
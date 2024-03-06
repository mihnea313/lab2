#include <stdlib.h>
#include <stdio.h>

int function(int x){
    if(x<=0)    //conditie necesara pentru a nu mai functiona in bucla(la infinit)
        return x;
	x=x-2;
	x=function(x);
	return x;
}

int main(){
	int a=30, i=0;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}


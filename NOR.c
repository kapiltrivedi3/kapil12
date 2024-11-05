#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[20] = { 1, 0, 1, 0, 1,0,1,0,0,1,0,1,0,1,0,1,0,0,1 };
    int b[20] = { 0, 1, 1, 0, 0 ,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0};
    int i, ans, output;
	
	for(int i=0; i<20;i++){
	ans= !(a[i]+b[i]);
	output= (a[i]*b[i]);
printf("\n %d == %d = %d",
               a[i], b[i], ans, ans);
               
 printf("\n %d  AND %d = %d",
               a[i], b[i], ans, output);		
 if(a[i] ==1 && b[i] ==1){
ans =0;
}
else{
ans =1;
}
      printf("\n %d NAND %d = %d",
               a[i], b[i], ans);


	}
return 0;
   
    }


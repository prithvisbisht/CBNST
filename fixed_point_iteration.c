#include<stdio.h>
#include<math.h>
float f(float);
main()
{
    float x,y,maxerr,c;
    int itr=1,maxitr;
    //b[0]=(cos(0)-3*0+1);
    printf("\nEnter initial guess,maximum error,max iter:\n");
    scanf("%f%f%d",&x,&maxerr,&maxitr);
    printf("\n\n The values of iterations are:\n\n ");
    do{
    	y=f(x);
    	c=y-x;
    	printf("iterations %d value %f\n",itr,y);
    	if(fabs(c) < maxerr)
    	{
    		printf("root is %f iterations are %d ",y,itr);
			return 0;
		}
		x=y;
		itr++;
	}
	while(itr<maxitr);
    printf("\n The root of the given function is %f",y);
}
float f(float x)
{
    float y;
    y=(cos(x)+2)/3;
    return y;
}

//*****C PROGRAMMING LANGUAGE INDIVIDUAL PROJECT*****//

/*  NAME : MANAV VISHALKUMAR SHAH
	ROLL NO : 243
	BATCH : 10
	ENROLLMENT NUMBER : 2021002171210160
	BRANCH : CSE
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14285714
//F.m.= Functions method;
//w_ret,w_arg = with return type, with argument, F.m.=1;
//n_ret,w_arg = no return type, with argument, F.m.=2;
//w_ret,n_arg = with return type, no argument, F.m.=3;
//n_ret,n_arg = no return type, no argument;  F.m.=4;
int add();  	// F.m.=3;
int sub();		//F.m.=3;
int multi();	//F.m.=3;
float division();	//F.m.=3;
float sqr();	//F.m.=3;
float powern(float n1, float n2);	//F.m.=1;
void sqrn();	//F.m.=4;
void cbrn();	//F.m.=4;
long int fact1(); //F.m.=4;
double fact2(int n1);	//F.m.=1;
double fact3(int n1);	//F.m.=1;
void matadd();	//F.m.=4;
void matsub();	//F.m.=4;
void matmulti();	//F.m.=4;
float radian(float n1);
void main()
{
		printf("\t\t\t\t\t ****SCIENTIFIC CALCULATOR****\n");
		int n;
		do
		{
			printf("\n\n___________________________________________________________");
			printf("___________________________________________________________");
			printf("\n\n*PLEASE ENTER NUMBER FOR SUITABLE COMMAND*\n\n");	
			printf("\t1-addition\n");			// switch case 1
			printf("\t2-subtraction\n");		// switch case 2
			printf("\t3-multiplication\n");	// switch case 3
			printf("\t4-division\n");			// switch case 4
			printf("\t5-square\n");			// switch case 5
			printf("\t6-power-n\n");			// switch case 6
			printf("\t7-square root\n");		// switch case 7
			printf("\t8-cube root\n");		// switch case 8
			printf("\t9-factorial\n");		// switch case 9
			printf("\t10-nCr\n");				// switch case 10
			printf("\t11-nPr\n");				// switch case 11
			printf("\t12-addition of two nxn matrix\n");			// switch case 12
			printf("\t13-subtraction of two nxn matrix\n");		// switch case 13
			printf("\t14-multiplication of two nxn matrix\n");	// switch case 14
			printf("\t15-trigonomantry functions\n\n");		 //switch case 15(with nested switch)
			printf("\t***PRESS 16 FOR EXIT***\n");
			
				scanf("%d",&n);
		
		switch(n)
			{													// switch starts
				case 1:
					printf("Addition of two sum = %d",add());	//int add() calling;
						break;
				case 2:
					printf("Subtraction of two nos = %d",sub());	//function int sub() calling;
						break;
				case 3:
					printf("Multiplication of two nos = %d",multi());	//function int multi() calling;
						break;
				case 4:
					printf("Division of two nos = %.04f",division());	//function float div() calling;
						break;
				case 5:
					printf("Square of number is = %.02f",sqr());	//function float sqr() calling;
						break;
				case 6:
					{
						float x,n;
						printf("enter the value of X and N for the format -> X^n\n");
						scanf("%f %f",&x,&n);
						printf("power N of digit X is : %0.2f",powern(x,n));		//function int pown() calling-----with return and with argument;
						break;
					}
				case 7:
						sqrn();			//function void sqrn() calling-----no return and no argument;
						break;
				case 8:
					cbrn();			//function void cbrn() calling-----no return and no argument;
						break;
				case 9:
						printf("factorial of given number = %ld",fact1());	//function long int fact1() calling-----with return and no argument;
						break;
				case 10:
					{
						int n,r;
						double ncr;
						printf("enter the value of N\n");
						scanf("%d",&n);
						printf("enter the value of R\n");
						scanf("%d",&r);
						ncr=fact2(n)/fact2(r)/fact2(n-r);		//function double fact2 (int n1) calling-----with return and with argument;
						printf("the value of ncr = %.03lf",ncr);
							break;
					}
				case 11:
					{
						int n,r;
						double npr;
						printf("enter the value of N\n");
						scanf("%d",&n);
						printf("enter the value of R\n");
						scanf("%d",&r);
						npr=fact3(n)/fact3(n-r); 				//function double fact3 (int n1) calling-----with return and with argument;
						printf("the value of npr = %lf",npr);
							break;
					}
				case 12:
					matadd();      //function void matadd() calling-----no return and no argument;
						break;
				case 13:
					matsub();		//function void matsub() calling-----no return and no argument;
						break;
				case 14: 
					matmulti();		//function void matmulti() calling-----no return and no argument;
						break;
				case 15 :		//coding pending
						{
							int nn;
							printf("\t*****CHOOSE COMMAND*****\t\t\n");
							printf("\t1-sinx\n");
							printf("\t2-cosx\n");
							printf("\t3-tanx\n");
							printf("\t4-cosecx\n");
							printf("\t5-secx\n");
							printf("\t6-cotx\n");
							scanf("%d",&nn);
							
								switch(nn)
									{		 float angle,x;							// nested switch starts
										case 1: 
												{
													printf("enter angle\n");
													scanf("%f",&angle);
													printf("sin(%.02f) = %.03f\n",angle,sin(radian(angle)));
												}
													break;
										case 2:
												{
													printf("enter angle\n");
													scanf("%f",&angle);
													printf("cos(%.02f) = %.03f\n",angle,cos(radian(angle)));
												}
													break;
										case 3:
												{
													printf("enter angle\n");
													scanf("%f",&angle);
													printf("tan(%.02f) = %.03f\n",angle,tan(radian(angle)));
												}
													break;
										case 4:
												{
													printf("enter angle\n");
													scanf("%f",&angle);
													printf("cosec(%.02f) = %.03f\n",angle,1/sin(radian(angle)));
												}
													break;
										case 5:
												{
													printf("enter angle\n");
													scanf("%f",&angle);
													printf("sec(%.02f) = %.03f\n",angle,1/cos(radian(angle)));
												}
													break;
										case 6:
												{
													printf("enter angle\n");
													scanf("%f",&angle);
													printf("cot(%.02f) = %.03f\n",angle,1/tan(radian(angle)));	
												}
													break;
									
											default	:
												{	
													printf("please choose only valid command\n");
												}
												break;
						            }						// nested switch ends
			        }										// case 15 ends here
			        		break;
			        
					case 16: exit(0);
						
						default :
						printf("please choose only valid command\n");
								break;
			}			// switch ends
		}		   // do while loop ends here
		while(n!=16);
} 

// all function's defination starts here
	float radian(float n1)
			{
				float x;
				x = PI*(n1/180);	
				return x;
			}
	int add()
			{
				int n1,n2,sum;
				printf("enter two numbers\n");
				scanf("%d %d",&n1,&n2);
				sum=n1+n2;
				return sum;
			}
	int sub()
			{
				int n1,n2,s;
				printf("enter two numbers\n");
				scanf("%d %d",&n1,&n2);
				s = n1 - n2;
				return s;
			} 
	int multi()
			{	
				int n1,n2,mul=1;
				printf("enter two numbers\n");
				scanf("%d %d",&n1 , &n2);
				mul=n1*n2;
				return mul;
			}
	float division()
			{   
				int n1,n2;
				float d;
				printf("enter two numbers\n");
				scanf("%d %d",&n1,&n2);
				d=(float)n1/n2; 
				return ;
			}
	float sqr()
			{
					float n1,x;
					printf("enter number for it's square\n");
					scanf("%f",&n1);
					x = (n1*n1);
				return x;
			}
	float powern(float n1,float n2)
			{
				float c;
				c=pow(n1,n2);
				return c;
			}
	void sqrn()
			{
				float x,n1;
				printf("enter the number for it's square root\n");
				scanf("%f",&n1);
					if(n1<0)
						printf("pleass enter positive number\n");
					else
					{
						x = sqrt(n1);
						printf("square root of the %.03f = %f",n1,x);
		    		}
			}
	void cbrn()
			{
					float x,n1;
					printf("enter the number for it's cube root\n");
					scanf("%f",&n1);
				if(n1<0)
					printf("please enter positive number\n");
				else
				{
					x = cbrt(n1);
					printf("cube root of the %.03f = %f",n1,x);
				}
			}
	long int fact1()
	 		{
				int n1,f=1,i;
				printf("enter number for it's factorial\n");
				scanf("%d",&n1);
				for(i=1;i<=n1;i++)
				{
					f=f*i;
				}
				return f;
			}
	double fact2(n1)
			{	
				double i,f=1;
				for(i=1;i<=n1;i++)
					{
						f=f*i;
					}	
				return f;
			}
	double fact3(n1)
			{
				double i,f=1;
				for(i=1;i<=n1;i++)
					{
						f=f*i;
					}		
				return f;
			}
	void matadd()
			{
				int i,j,n;
				printf("enter matrix limit\n");
				scanf("%d",&n);
				int a[n][n],b[n][n],c[n][n];
				printf("enter matrix 1\n");
				for(i=0;i<n;i++)
				{	
					for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
					printf("enter matrix 2\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}	
				for(i=0;i<n;i++)
					{
						for(j=0;j<n;j++)
						{
							c[i][j]=a[i][j]+b[i][j];
							printf("%d\t",c[i][j]);
						}
					printf("\n");
					}
			}
	void matsub()
			{
				int i,j,n;
					printf("enter limit\n");
					scanf("%d",&n);
					int a[n][n],b[n][n],c[n][n];
					printf("enter matrix 1\n");
				for(i=0;i<n;i++)
					{
						for(j=0;j<n;j++)
						{
							scanf("%d",&a[i][j]);
						}
					}	
						printf("enter matrix 2\n");
				for(i=0;i<n;i++)
					{
						for(j=0;j<n;j++)
						{	
							scanf("%d",&b[i][j]);
						}
					}
				for(i=0;i<n;i++)
					{
						for(j=0;j<n;j++)
						{	
							c[i][j]=a[i][j]-b[i][j];
							printf("%d\t",c[i][j]);
						}
						printf("\n");
					}
  			}
  	void matmulti()
	  	{
	  		int i,j,k,n;
	  		printf("enter limit\n");
	  		scanf("%d",&n);
	  		int a[n][n],b[n][n],c[n][n];
	  		printf("enter matrix 1\n");
	  		for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							scanf("%d",&a[i][j]);
						}
				}	
				printf("enter matrix 2\n");
			for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{	
						scanf("%d",&b[i][j]);
					}
				}
			for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{	
						c[i][j]=0;
					}
				}
					for(i=0;i<n;i++)
						{
							for(j=0;j<n;j++)
							{
								for(k=0;k<n;k++)	
								{	
								   	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
								}
					    	}
						}	
	    	for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							printf("%d\t",c[i][j]);
						}	
							printf("\n");
				}
}  
//whole programm ends here	

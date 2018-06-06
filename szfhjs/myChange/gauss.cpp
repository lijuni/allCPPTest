#include<iostream>
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include"test.h"

#define DEBUG

using namespace std;

int main()
{

	
	double *a = NULL;
	double *b = NULL;
	double sum = 0;
	int N;
	cout<<"Please input n : "<<endl;
	cin>>N;
	a = (double*)malloc(sizeof(double)*(N*N));
	b = (double*)malloc(sizeof(double)*N);
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
		{
			int num = i*N+j;
			#ifndef DEBUG
			cout<<num<<"  ";
			#endif
			a[num]=double(1.0)/((i+1)+(j+1)-1); //H(ij) = 1/(i+j-1) 题目中的i,j是从1开始算，所以+1;
		}

	
	for(int i=0; i<N; i++)
	{
		sum =0;
		for(int j=0; j<N; j++)
		{
			sum+=a[i*N+j];
		}
		b[i]=sum;
	}
	
	cout<<endl;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			int num = i*N+j;
			printf("%.6f\t",a[num]);
			//cout<<a[num]<<"  ";
		}
		cout<<endl;
	}

	for(int i=0; i<N; i++)
		printf("%.6f\t",b[i]);
		//cout<<b[i]<<"  ";
	cout<<endl;



	int temp=0;
	double expct=0;//误差期望值
	double devsq=0;//误差的方差
	int * P= NULL;
	double * D= NULL;
	clock_t startTime, endTime;
	
	
	P = (int*)malloc(sizeof(int)*N);
	D = (double*)malloc(sizeof(double)*N);

	for (int i=0; i<N; i++)
		P[i]=D[i]=0;
	
	startTime = clock();

	cout<<"矩阵LU分解: \n";
	lu(a,P,N);//矩阵LU分解
	cout<<"DEBUG"<<endl;

	for (int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
			printf("%f\t",a[i]);
		cout<<endl;
	}
	cout<<"矩阵LU分解的主元位置: \n";

	for (int i=0; i<N; i++)
		cout<<P[i]<<"\t";
	cout<<"\nGuass求线性代数方程组求解:\n";
	guass(a,P,b,N);//求线性代数方程组的解

	for (int i=0; i<N; i++)
	{
		if(i==3)	
			cout<<endl;
		printf("%.16f\t",b[i]);
	}
	cout<<"\nGuass解法的误差为:\n";

	for (int i=0; i<N; i++)
	{
		if(i==3)
			cout<<endl;
		printf("%.16f\t",b[i]-1);
		expct=expct + b[i]-1;
	}

	printf("\n误差期望值为%.16f\t\n",expct/6);
	cout<<endl;


	endTime = clock();
	cout << "Gauss Totle Time : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;












	/*


	
	int n=0;
	int temp=0;
	bool flag = false;
	double expct=0;//误差期望值
	double devsq=0;//误差的方差
	int * P= NULL;
	double * D= NULL;
	clock_t startTime, endTime;


	double A[]=
	{ 
	1, 1/2.0, 1/3.0, 1/4.0, 1/5.0, 1/6.0,
	1/2.0, 1/3.0, 1/4.0, 1/5.0, 1/6.0, 1/7.0,
	1/3.0, 1/4.0, 1/5.0, 1/6.0, 1/7.0, 1/8.0,
	1/4.0, 1/5.0, 1/6.0, 1/7.0, 1/8.0, 1/9.0,
	1/5.0, 1/6.0, 1/7.0, 1/8.0, 1/9.0, 1/10.0,
	1/6.0, 1/7.0, 1/8.0, 1/9.0, 1/10.0,1/11.0
	};

	double B[]=
	{ 
	1+ 1/2.0+ 1/3.0+ 1/4.0+ 1/5.0+ 1/6.0,
	1/2.0+ 1/3.0+ 1/4.0+ 1/5.0+ 1/6.0+ 1/7.0,
	1/3.0+ 1/4.0+ 1/5.0+ 1/6.0+ 1/7.0+ 1/8.0,
	1/4.0+ 1/5.0+ 1/6.0+ 1/7.0+ 1/8.0+ 1/9.0,
	1/5.0+ 1/6.0+ 1/7.0+ 1/8.0+ 1/9.0+ 1/10.0,
	1/6.0+ 1/7.0+ 1/8.0+ 1/9.0+ 1/10.0+1/11.0
	};

	n = 6 ;
	P = (int*)malloc(sizeof(int)*n);
	D = (double*)malloc(sizeof(double)*n);

	for (int i=0; i<n; i++)
		P[i]=D[i]=0;

	startTime = clock();

	cout<<"矩阵LU分解: \n";
	lu(A,P,n);//矩阵LU分解

	for (int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			printf("%f\t",A[i]);
		cout<<endl;
	}
	cout<<"矩阵LU分解的主元位置: \n";

	for (int i=0; i<n; i++)
		cout<<P[i]<<"\t";
	cout<<"\nGuass求线性代数方程组求解:\n";
	guass(A,P,B,n);//求线性代数方程组的解

	for (int i=0; i<n; i++)
	{
		if(i==3)	
			cout<<endl;
		printf("%.16f\t",B[i]);
	}
	cout<<"\nGuass解法的误差为:\n";

	for (int i=0; i<n; i++)
	{
		if(i==3)
			cout<<endl;
		printf("%.16f\t",B[i]-1);
		expct=expct + B[i]-1;
	}

	printf("\n误差期望值为%.16f\t\n",expct/6);
	cout<<endl;


	endTime = clock();
	cout << "Gauss Totle Time : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
	*/

	return 0;
}


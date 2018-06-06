#include<iostream>
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include"test.h"
using namespace std;

int main()
{
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

	cout<<"Please choose the way to solve (0: lu,1:qr):"; cin>>flag;
	startTime = clock();

	if(!flag)
	{
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
	}

	else
	{
		cout<<"矩阵QR分解: \n";
		qr(A,D,n);//矩阵qr分解

		for (int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				printf("%f\t",A[i]);
			cout<<endl;
		}
		cout<<"QR分解的上三角矩阵对角线元素: \n";

		for (int i=0; i<n; i++)
			printf("%f\t",D[i]);
		cout<<"\nHouseholder线性代数方程组求解:\n"; 
		hshld(A,D,B,n);//求线性代数方程组的解

		for (int i=0; i<n; i++)
		{
			if(i==3)
				cout<<endl;
			printf("%.16f\t",B[i]);
		}
		cout<<"\nHouseholder解法的误差为:\n";

		for (int i=0; i<n; i++)
		{
			if(i==3)
				cout<<endl;
			printf("%.16f\t",B[i]-1);
			expct=expct + B[i]-1;
		}
		printf("\n误差期望值为%.16f\t\n",expct/6);
		cout<<endl;
	}

	endTime = clock();
	cout << "Totle Time : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;


	return 0;
}


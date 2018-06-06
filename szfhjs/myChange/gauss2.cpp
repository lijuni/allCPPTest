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
	double *b_abs = NULL;
	double *b_abs_cc = NULL;
	double sum = 0;
	int N;
	cout<<"Please input n : "<<endl;
	cin>>N;
	a = (double*)malloc(sizeof(double)*(N*N));
	b = (double*)malloc(sizeof(double)*N);
	b_abs = (double*)malloc(sizeof(double)*N);		//第三题所用B
	b_abs_cc = (double*)malloc(sizeof(double)*N);	//第三题用来求残差的B
	
	/*	
	//第一题的矩阵A
	cout<<"求解第一题"<<endl;
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
		{
			int num = i*N+j;
			#ifndef DEBUG
			cout<<num<<"  ";
			#endif
			a[num]=double(1.0)/((i+1)+(j+1)-1); //H(ij) = 1/(i+j-1) 题目中的i,j是从1开始算，所以+1;
		}
	*/

	
	//第二题的矩阵A
	cout<<"求解第二题"<<endl;
	//cout<<"求解第三题"<<endl;
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
		{
			if(j<i)
				a[i*N+j]=-1;
			else if(j==i)
				a[i*N+j]=1;
			else if(j<N-1)
				a[i*N+j]=0;
			else
				a[i*N+j]=1;
		}
	

	
	//第一、二题的矩阵B
	//cout<<"求解第二题"<<endl;
	for(int i=0; i<N; i++)
	{
		sum =0;
		for(int j=0; j<N; j++)
		{
			sum+=a[i*N+j];
		}
		b[i]=sum;
	}
	
	//第三题的矩阵B
	for(int i=0; i<N; i++)
	{
		sum =0;
		for(int j=0; j<N; j++)
		{
			sum+=abs(a[i*N+j]);
		}
		b_abs[i]=sum;
		b_abs_cc[i]=sum;
	}
	
	cout<<endl<<"矩阵A："<<endl;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			int num = i*N+j;
			printf("%.6f\t",a[num]);
		}
		cout<<endl;
	}

	cout<<endl<<"矩阵B："<<endl;
	for(int i=0; i<N; i++)
		printf("%.6f\t",b[i]);
	cout<<endl;

	/*
	cout<<endl<<"矩阵B_abs："<<endl;
	for(int i=0; i<N; i++)
		printf("%.6f\t",b_abs[i]);
	cout<<endl;
	*/


	int temp=0;
	double xiangdui_different=0;//相对误差
	double juedui_different=0;//绝对误差
	double c_x_different=0; //相对残差
	double c_j_different=0; //绝对残差
	double *cDiff=NULL;
	int * P= NULL;
	double * D= NULL;
	clock_t startTime, endTime;
	
	
	P = (int*)malloc(sizeof(int)*N);
	D = (double*)malloc(sizeof(double)*N);
	cDiff = (double*)malloc(sizeof(double)*N);

	for (int i=0; i<N; i++)
		P[i]=D[i]=0;
	
	startTime = clock();

	lu(a,P,N);//矩阵LU分解

	cout<<"\nGuass消去法解方程组:\n";
	guass(a,P,b,N);//求线性代数方程组的解
	endTime = clock();
	cout << "耗时 : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
	
	for (int i=0; i<N; i++)
		printf("%.6f\t",b_abs[i]);

	//求误差
	cout<<"\n每个变量的相对误差为:\n";
	for (int i=0; i<N; i++)
	{
		printf("%.16f\t",b[i]-1);
		xiangdui_different += fabs(b[i]-1);
		juedui_different += fabs((b[i]-1))/1.0f;
	}

	printf("\n总绝对误差为%.16f\t",juedui_different/N);
	printf("\n总相对误差为%.16f\t",xiangdui_different/N);
	cout<<endl<<endl;

	//求残差
	/*
	for(int i=0; i<N; i++)
	{
		cDiff[i]=0;
		for(int j=0; j<N; j++)
			cDiff[i] += a[i*N+j]*b_abs[i]-b_abs_cc[i];
		c_j_different += abs(cDiff[i]);
		c_x_different += abs(cDiff[i])/b_abs[i];
	}

		c_j_different /= N;
		c_x_different /= N;
	printf("\n总绝对残差为%.16f\t",juedui_different/N);
	printf("\n总相对残差为%.16f\t",xiangdui_different/N);
	cout<<endl<<endl;
	*/
	return 0;
}





















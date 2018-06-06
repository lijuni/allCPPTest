#ifndef TEST_H
#define TEST_H

#include<iostream>
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

bool lu(double* a, int* pivot, int n);//矩阵LU分解
bool guass(double const* lu, int const* p, double* b, int n);//求线性代数方程组的解
void qr(double* a, double* d, int n); //矩阵的QR分解
bool hshld(double const*qr, double const*d, double*b, int n);


bool lu(double* a, int* pivot, int n)//矩阵LU分解
{
	int i,j,k;
	double max,temp;
	max = 0;
	temp = 0;
	for (i=0; i<n-1; i++)
	{
		// 选出i列的主元,记录主元位置
		max = fabs(a[n*i + i]);
		pivot[i]=i;
		
		for(j=i+1; j<n; j++)
			if( fabs(a[n*j + i])>max)
			{
				max= fabs(a[n*j + i]) ;
				pivot[i]=j;
			}

		// 对第i列进行行变换,使得主元在对角线上

	if(pivot[i]!=i)
		for(j=i; j<n; j++)
		{
			temp=a[n*i + j];
			a[n*i + j]=a[n*pivot[i]+ j];
			a[n*pivot[i]+ j]=temp;
		}

	for(j=i+1; j<n; j++)
		a[n*j + i]=a[n*j+i]/a[n*i+i];

	for(j=i+1; j<n; j++)
		for(k=i+1; k<n; k++)
			a[n*j + k]=a[n*j+k]- a[n*j+i]*a[n*i+k];
	}

//计算下三角 L

	for(i=0; i<n-2;i++)
		for(k=i+1; k<n-1;k++)
		{
			temp=a[n*pivot[k] + i];
			a[n*pivot[k] + i]=a[k*n + i];
			a[k*n + i]=temp;
		}
	return false ;
}

bool guass(double const* lu, int const* p, double* b, int n)//求线性代数方程组的解
{
	int i,j,k;
	double temp;
	//按qivot对b行变换,与LU匹配

	for(i=0; i<n-1; i++)
	{
		temp = b[p[i]];
		b[p[i]] = b[i];
		b[i]=temp;
	}

//Ly=b,将y的内容放入b

	for(i=0; i<n; i++)
		for(j=0; j<i; j++)
			b[i]=b[i]-lu[n*i+j]*b[j];

//Uy=x,将x的内容放入b

	for(i=n-1; i>=0; i--)
	{
		for(j=n-1; j>i; j--)
			b[i]=b[i]-lu[n*i+j]*b[j];
		b[i]=b[i]/lu[n*i+i];
	}

	return false;
}

void qr(double* a, double* d, int n) //矩阵的QR分解
{

	int i,j,l,k;
	double tem,m;
	double *temp;
	temp = (double *)malloc(sizeof(double)*n);

	for (i=0; i<n-1; i++)
	{
	//获得tem值
		m = 0 ;
		for(j=i; j<n; j++)
			m = m +a[n*j + i]*a[n*j + i ];

		if(a[n*i + i ]>0)
			m = -sqrt(m);
		else
			m = sqrt(m);
		//获得temp放入矩阵,并存主元d
		tem = 0 ;
		d[i] = m ;
		a[n*i +i] = a[n*i +i] - m;

		for(j=i; j<=n-1; j++)
			tem=tem + a[n*j +i]*a[n*j +i];
		tem= sqrt(tem);

		for(j=i; j<=n-1; j++)
			a[n*j +i] = a[n*j +i]/tem ;

		// 调整矩阵

		for(k=i+1;k<n; k++)
		{
			for(j=i; j<n; j++)
			{
				tem = 0 ;
				for(l=i; l<n; l++)
				tem =tem + a[n*j + i]*a[n*l + i]*a[n*l + k]; temp[j] = a[j*n+k] - 2*tem;
			}

			for(j=i; j<n; j++)
				a[j*n+k] = temp[j];
		}
	}
	d[n-1] = a[(n-1)*n+n-1];
}

bool hshld(double const*qr, double const*d, double*b, int n)//求线性代数方程组的解
{
	int i,j,l;
	double rem;
	double *temp;
	temp = (double *)malloc(sizeof(double)*n);
	for(i=0; i<n-1; i++)
	{
		for(j=i; j<n; j++)
		{
			rem = 0;
			for(l=i; l<n; l++)
			rem = rem + qr[l*n+i]*qr[j*n+i]*b[l];
			temp[j] = b[j] - 2*rem;
		}

	for(j=i; j<n; j++)
		b[j] = temp[j];
	}

	for(j=n-1; j>-1; j--)
	{
		for(l=n-1; l!=j;--l)
			b[j] =b[j] - b[l]*qr[j*n+l];
		b[j] = b[j] /d[j];
	}
	return false;
}

#endif

#include<iostream>
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include"test.h"
using namespace std;


bool lu(double* a, int* pivot, int n)
{
	int i,j,k;
	double max,temp;
	max = 0;
	temp = 0;
	for (i=0; i<n-1; i++)
	{
		max = fabs(a[n*i + i]);
		pivot[i]=i;
		
		for(j=i+1; j<n; j++)
			if( fabs(a[n*j + i])>max)
			{
				max= fabs(a[n*j + i]) ;
				pivot[i]=j;
			}

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

	for(i=0; i<n-2;i++)
		for(k=i+1; k<n-1;k++)
		{
			temp=a[n*pivot[k] + i];
			a[n*pivot[k] + i]=a[k*n + i];
			a[k*n + i]=temp;
		}
	return false ;
}

bool guass(double const* lu, int const* p, double* b, int n)
{
	int i,j,k;
	double temp;

	for(i=0; i<n-1; i++)
	{
		temp = b[p[i]];
		b[p[i]] = b[i];
		b[i]=temp;
	}

	for(i=0; i<n; i++)
		for(j=0; j<i; j++)
			b[i]=b[i]-lu[n*i+j]*b[j];

	for(i=n-1; i>=0; i--)
	{
		for(j=n-1; j>i; j--)
			b[i]=b[i]-lu[n*i+j]*b[j];
		b[i]=b[i]/lu[n*i+i];
	}

	return false;
}

void qr(double* a, double* d, int n)
{

	int i,j,l,k;
	double tem,m;
	double *temp;
	temp = (double *)malloc(sizeof(double)*n);

	for (i=0; i<n-1; i++)
	{
		m = 0 ;
		for(j=i; j<n; j++)
			m = m +a[n*j + i]*a[n*j + i ];

		if(a[n*i + i ]>0)
			m = -sqrt(m);
		else
			m = sqrt(m);
		tem = 0 ;
		d[i] = m ;
		a[n*i +i] = a[n*i +i] - m;

		for(j=i; j<=n-1; j++)
			tem=tem + a[n*j +i]*a[n*j +i];
		tem= sqrt(tem);

		for(j=i; j<=n-1; j++)
			a[n*j +i] = a[n*j +i]/tem ;

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

bool hshld(double const*qr, double const*d, double*b, int n)
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


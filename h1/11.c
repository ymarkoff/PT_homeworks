/*
#school - ����
#class - 11�
#num - 19
#name - ���� �������� ������
#task - �� �� ��������� ��������, ����� ������� �� ����������� �� ������ ����������� ����� �, ������ 0<x<10. �� �� ������������ ����� �� 10 ��������. �� �� ������ ������ �� cos(z) �� ����� z � ��������� [0;x) � �� �� ������ ���� ����� ������� � ������. �� �� ������ ������ �� cos(z) �� ����� z � ��������� [x; 2x) � �� �� ������ ���� ����� ������� � ������. ���������� �� �� ������� ������ �� cos(z) �� ������ ��������� [Nx; (N+1)x ) � �� �� ������� ���� ������� N � ������ �� ����� N � ��������� [0, 10). ������� �� �� ������ �� ����������� �����.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x, z=0;
    float sum=0, a[10];
    int i,k;
    
    for(x=0; (x<=0)||(x>=10);) scanf("%d", &x);
    for(i=0; i<=9; i++)
    {
             for(k=i*x; k<=(i+1)*x; k++) sum+=cos(z++);
             a[i]=sum;
             sum=0;
    }
    
    for(i=0; i<=9; i++) printf("%f\n", a[i]);
    
    system("pause");
    return 0;
}
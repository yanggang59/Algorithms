/**
 * ��������C++
 *
 * @author skywang
 * @date 2014/03/11
 */

#include <iostream>
using namespace std;

/*
 * ��������
 *
 * ����˵����
 *     a -- �����������
 *     l -- �������߽�(���磬����ʼλ�ÿ�ʼ������l=0)
 *     r -- ������ұ߽�(���磬�������������ĩβ����r=a.length-1)
 */
void quickSort(int* a, int l, int r)
{
	if (l < r)
	{
		int i, j, x;

		i = l;
		j = r;
		x = a[i];
		while (i < j)
		{
			while (i < j && a[j] > x)
				j--; // ���������ҵ�һ��С��x����
			if (i < j)
				a[i++] = a[j];
			while (i < j && a[i] < x)
				i++; // ���������ҵ�һ������x����
			if (i < j)
				a[j--] = a[i];
		}
		a[i] = x;
		quickSort(a, l, i - 1); /* �ݹ���� */
		quickSort(a, i + 1, r); /* �ݹ���� */
	}
}

int main()
{
	int i;
	int a[] = { 30,40,60,10,20,50 ,11,56,2,78};
	int ilen = (sizeof(a)) / (sizeof(a[0]));

	cout << "before sort:";
	for (i = 0; i < ilen; i++)
		cout << a[i] << " ";
	cout << endl;

	quickSort(a, 0, ilen - 1);

	cout << "after  sort:";
	for (i = 0; i < ilen; i++)
		cout << a[i] << " ";
	cout << endl;

	while (1);
	return 0;
}
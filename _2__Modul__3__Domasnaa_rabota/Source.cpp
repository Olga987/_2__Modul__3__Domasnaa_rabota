#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<math.h>


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;
start:
	printf("������� ����� �������: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1: {
		//1.	�������� ������� f(int& h, int& m, int& s, int sec), ������� ��������� ���������� 
		//������, ��������� � ������ ���, � ���������� ��� ����� ���������� (����, ������ � �������)
		int sec = 0, h = 0, m = 0, s = 0;
		sec = 1 + rand() % 86400;
		printf("%d\n", sec);
		h = sec / 3600;
		m = sec % 3600;
		m = m / 60;
		s = sec % 3600;
		s = s % 60;


		printf("����� - %d\n����� - %d\n������ - %d\n", h, m, s);




	}
			break;
	case 2: {
		//2.	�������� ������� int f(int x), ������� ��������� ����� �������� (�� ������ ���� ������)
		//� ���������� ����� � �������� �������� ����. ��������, ����������� ����� 7631, ������������ ����� 1367
		int x = 0, y1 = 0, y2 = 0, y3 = 0, y4 = 0;
		x = 1 + rand() % 9999;
		printf("%d\n", x);

		y1 = x / 1000;
		y2 = (x % 1000) / 100;
		y3 = ((x % 1000) % 100) / 10;
		y4 = (((x % 1000) % 100) % 10);

		printf("%d%d%d%d\n", y4, y3, y2, y1);




	}
			break;
	case 3: {
		//3.	��������� � ����� ��� �����, ������� ��������� �������� ����� ������� � ������ ������.
		//��������, ������ �� ��������� ����������� ����� ����� �������� �����������: 12321, 55555, 45554 � 11611. 
		//��������������: ��� �������� �� ������. �������� ������� bool f(int N), ������� ����������, �������� �� ����������� ����� ����� N �����������
		int N = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;

		printf("������� ����� �� ����� 5 ������: ");
		scanf("%d", &N);

		x1 = N / 10000;
		x2 = (N % 10000) / 1000;
		x3 = ((N % 10000) % 1000) / 100;
		x4 = (((N % 10000) % 1000) % 100) / 10;
		x5 = (((N % 10000) % 1000) % 100) % 10;

		printf("%d%d%d%d%d\n", x1, x2, x3, x4, x5);

		if (x1 == x5&&x2 == x4)
			printf("��������\n");
		else
			printf("�� ��������\n");


	}
			break;
	case 4: {
		//4.	�������, ��� ����� ����� �������� ����������� ������, ���� ��� �����������, 
		//������� 1 (�� �� ���� �����) � ����� ���� ��� �����. ��������, 6 � ����������� �����,
		//��� ��� 6=1+2+3. �������� ������� bool f(int n), ������� ����������, �������� �� �� �������� n ����������� ������. 
		//����������� ��� ������� � ���������, ������� ���������� � �������� ��� ����������� ����� � ��������� �� 1 �� 1000.

		int n = 0, i, answer = 0;

		printf("������� �����: ");
		scanf("%d", &n);

		for (i = 1; i < n; i++)

		{
			if (n % i == 0)
				answer = answer + i;
			/*	printf("%d\n", answer);*/
		}
		if (n == answer)
			printf("�����������\n");
		else
			printf("�������������\n");


	}
			break;
	case 5: {
		//5.	�������� ���������, ������� � ������� ������� rand() ������ ������ � �������� �� 2 �� 5. 
		//� ���� ��������� ����������� ����� ����� ��� ��������� 2, ������ ��� ��������� 3, � �.�. ����������� �������� switch.

		int a = 0;
		a = 1 + rand() % 5;
		printf("%d\n", a);

		switch (a)
		{
		case 1:
			printf("�������\n");
			break;
		case 2:
			printf("�������������������\n");
			break;
		case 3:
			printf("�����������������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("�������\n");
			break;
		default:
			break;
		}
	}
			break;
	case 6: {
		//����� �� ���� ������� � ����� ����� 15 �����, ����� �� 10 ������� ����� 125 �����, ����� �� 60 ������� ����� 440 �����.
		//�������� ��������� ��������� n �������. ����������, ������� ������� ������� ���� �� ������ ����������, ����� ��������� 
		//���������� ���������� ������� ���� �� ������ n, � ����� ��������� ������������� ������� � ����������.
		//������� ������: ���������� ������� n. �������� ������ � ��� ����� �����, ������ ������������ ���������� ������� �� 1, �� 10, �� 60 �������. 
		//��������, ��� ����� 129 ��������� ������ ������� 0 1 2 (2 ������ �� 60 ������� � 1 ����� �� 10 �������).
		int n = 0, x1 = 0, x2 = 0, x3 = 0;
		printf("������� ���-�� ����������� �������: ");
		scanf("%d", &n);

		x1 = n / 60;
		x2 = (n % 60) / 10;
		x3 = (n % 60) % 10;
		/*	printf("%d - %d - %d\n", x1, x2, x3 );*/

		printf("%d\t%d\t%d\n", x3, x2, x1);




	}
			break;
	case 7: {
		//7.	������ ���������� ������ ��� ������� ��������� �������: 1 ������� - 15 �����, 5 ������� - 70 �����, 10 ������� - 125 �����, 
		//20 ������� - 230 �����, 60 ������� - 440 �����. ���� ��� ������-�� ������� n ���������� ��������� �������� ������������ ������� 
		//���������� ���������, ���������� ������� �� ���������� �������, ������� ���� ������� ����� �������.

		int n = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
		printf("������� ���-�� ����������� �������: ");
		scanf("%d", &n);

		x1 = n / 60;
		x2 = (n % 60) / 20;
		x3 = ((n % 60) % 20) / 10;
		x4 = (((n % 60) % 20) % 10) / 5;
		x5 = (((n % 60) % 20) % 10) % 5;




		/*	printf("%d - %d - %d - %d - %d\n", x1, x2, x3, x4, x5);*/

		printf("%d\t%d\t%d\t%d\t%d\n", x5, x4, x3, x2, x1);
	}
			break;
	default:
		break;
	}
	goto start;
}
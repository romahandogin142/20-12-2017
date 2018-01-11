#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{

	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "Ведите задание :" << endl;
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			cout << "Ведите от 1 до 4 : ";
			cin >> nz;
			switch (nz)
			{
			case 1:
			{
				int a, b, n = 0;
				cout << "Ведите 1 число  : ";
				cin >> a;
				cout << "Ведите 2 число : ";
				cin >> b;
				if (a < b)
				{
					for (a; a <= b; a++)
					{
						cout << a << " " << endl;
						n++;
					}
					cout << "Ответ = " << n << endl;
				}

				system("pause");
			}
			break;

			case 2:
			{
				int i, n, a, b, x;
				cout << "Ведите число N (>= 2): ";
				cin >> n;
				cout << "Ведите A и B (A < B) " << endl;
				cout << "Ведите  A: ";
				cin >> a;
				cout << "Ведите B: ";
				cin >> b;

				for (i = 1; i <= n; i++)
				{
					x = a + (b - a) / (n - 1)*(i - 1);
					cout << x - sin(x) << endl;
				}
				system("pause");
			}
			break;

			case 3:
			{
	
				int x, d, an, ak, k;
				cout << "Ведите  d: ";
				cin >> d;
				an = 2;
				k = 1;
				ak = 0;
				x = 0;
				while (x < d)
				{
					ak = an;
					an = 2 + 1 / ak;
					x = abs(an - ak);
					k = k + 1;
				}
				cout << "Число AK= " << ak << " число AN= " << an << " K= " << k;
			}
			break;


			case 4:
			{
	
				int i, n = 99;
				for (i = 11; i <= n; i++)
				{
					cout << i*i << endl;
				}
				system("pause");
			}
			break;

			default:
				cout << "Повторите запрос  " << endl;
				system("pause");
				break;
			}
		}
		break;

		case 2:
		{
			cout << "Ведите 1 - 2  : ";
			cin >> nz;
			switch (nz)
			{
			case 1:
			{
				

				int n = 5, i, a, k;
				cout << "Ведите a = ";
				cin >> a;
				k = 1;
				while ((a < 0) && (k < n))
				{
					k = k + 1;
					cout << "Ведите a = ";
					cin >> a;
				}
				for (i = k; i <= n; i++)
				{
					cout << "Ведите a = ";
					cin >> a;
					a = k;
				}
				while (a < n)
				{
					k = k - 1;
					a = n;
				}
				cout << k << endl;
				system("pause");
			}
			break;

			case 2:
			{
				int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, n, j;
				int* p[18] = { &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15,&a16,&a17,&a18 };
				for (j = 0; j < 18; *p[j++] = 4 - rand() % 9);
				for (n = rand() % 17, j = 0; j < n; *p[j++] = *p[0]);

				cout << a1 << '\t' << a2 << '\t' << a3 << '\t' << a4 << '\t' << a5 << '\t' << a6 << '\t' << a7 << '\t' << a8 << '\t' << a9 << '\t' << a10 << '\t' << a11 << '\t' << a12 << '\t' << a13 << '\t' << a14 << '\t' << a15 << '\t' << a16 << '\t' << a17 << '\t' << a18 << endl;

				cout << !(a1^a1) + !(a1^a2) + !(a1^a3) + !(a1^a4) + !(a1^a5) + !(a1^a6) + !(a1^a7) + !(a1^a8) + !(a1^a9) + !(a1^a10) + !(a1^a11) + !(a1^a12) + !(a1^a13) + !(a1^a14) + !(a1^a15) + !(a1^a16) + !(a1^a17) + !(a1^a18) << endl;

				cout << !(a1^a1)
					+ !(a1^a2) * !(a1^a1)
					+ !(a1^a3) * !(a1^a1) * !(a1^a2)
					+ !(a1^a4) * !(a1^a1) * !(a1^a2) * !(a1^a3)
					+ !(a1^a5) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4)
					+ !(a1^a6) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5)
					+ !(a1^a7) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6)
					+ !(a1^a8) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7)
					+ !(a1^a9) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8)
					+ !(a1^a10) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9)
					+ !(a1^a11) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10)
					+ !(a1^a12) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10) * !(a1^a11)
					+ !(a1^a13) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10) * !(a1^a11) * !(a1^a12)
					+ !(a1^a14) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10) * !(a1^a11) * !(a1^a12) * !(a1^a13)
					+ !(a1^a15) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10) * !(a1^a11) * !(a1^a12) * !(a1^a13) * !(a1^a14)
					+ !(a1^a16) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10) * !(a1^a11) * !(a1^a12) * !(a1^a13) * !(a1^a14) * !(a1^a15)
					+ !(a1^a17) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10) * !(a1^a11) * !(a1^a12) * !(a1^a13) * !(a1^a14) * !(a1^a15) * !(a1^a16)
					+ !(a1^a18) * !(a1^a1) * !(a1^a2) * !(a1^a3) * !(a1^a4) * !(a1^a5) * !(a1^a6) * !(a1^a7) * !(a1^a8) * !(a1^a9) * !(a1^a10) * !(a1^a11) * !(a1^a12) * !(a1^a13) * !(a1^a14) * !(a1^a15) * !(a1^a16) * !(a1^a17) << endl;
				system("pause");
			}
			break;

			default:
				cout << "Неверно " << endl;
				system("pause");

			}
		}
		break;

		case 3:
		{
			cout << "Ведите от 1 до 2 : ";
			cin >> nz;
			switch (nz)
			{
			case 1:
			{

				int uo, sum = 1;
				srand(time(NULL));

				for (int i = 1; i <= 20; i++)
				{

					uo = rand() % 4 + 2;
					cout << uo << endl;

				}
				system("pause");
			}
			break;

			case 2:
			{
				

				int n = 31;
				int a = rand() % 31 + 1;
				int i, k = 1, m;
				a = 0;
				cout << "Ведите число : ";
				cin >> m;
				for (i = 2; i <= 31; i++)
				{
					cin >> a;
				}
				i = 1;

				while (i = i + 1)
				{
					k *= k;
					if (k > m)
					{
						k = m;
						i = i + 1;
					}
				}
				if (k == 0)
				{
					cout << "Ответ " << endl;
				}
				else
					k = k + 1;
				cout << "Ответ :" << k << endl;
				system("pause");
			}
			break;

			}
			break;

		}
		break;
		}
	} while (tm != 999);



}
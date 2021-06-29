#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <string.h>
#include <windows.h>


#define pi 3.141592653589793

//瞳碟 掘褻羹 
typedef struct integElem {
	int count = 500000;
	double x[6] = { 0,0,0,0,0,0 };
	double sum = 0, a = 0, b = 0, dx = 0;
} integral;

void Title() {
	printf("	  旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                                      Calculator Program                                         早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                               億誕驛 - 掏艙遵. 梯⑷熱, 濰��錳 褻                                早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     1. 餌罌翱骯            2. 鳴陝л熱 啗骯晦       3. 瞰渤高 啗骯晦       4. 雖熱高 啗骯晦     早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     5. 煎斜高 啗骯晦       6. ね饜葬橡 啗骯晦       7. 8霞熱 滲�秧�        8. 16霞熱 滲�秧�     早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     9. 睡翕模熱薄 滲�秧�   10. 寞薑衝曖 п 瓊晦     11. 棻ол熱 嘐碟      12. 鳴陝л熱 嘐碟    早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     13. 棻ол熱 薑瞳碟    14. 鳴陝л熱 薑瞳碟      15. 螃橾楝熱 e 啗骯    16. だ檜 啗骯        早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                                     0. 謙猿     17. help                                        早\n");
	printf(" 	  早                                                                                                 早\n");
	printf(" 	  曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
}

//餌罌翱骯 
int arithOper() {
	printf("\n [01] 餌罌 翱骯晦\n");
	double x, y;
	char op;
	while (1) {
		printf("\n 舒 熱蒂 殮溘п輿撮蹂 Ex) 2 4 : ");
		scanf("%lf %lf", &x, &y);
		rewind(stdin);
		printf("\n 翱骯濠蒂 殮溘п輿撮蹂 Ex) + : ");
		scanf("%c", &op);
		switch (op) {
		case '+': printf(" %.2lf + %.2lf = %.6lf\n", x, y, x + y); return 0;
		case '-': printf(" %.2lf - %.2lf = %.6lf\n", x, y, x - y); return 0;
		case '*': printf(" %.2lf * %.2lf = %.6lf\n", x, y, x * y); return 0;
		case '/':
			if (y == 0) {
				printf(" \n [ERROR] :: 0戲煎朝 釭揚 熱 橈蝗棲棻 ::\n");
				break;
			}
			else {
				printf(" %.2lf / %.2lf = %.6lf\n", x, y, x / y);
				return 0;
			}
		default: printf("澀跤脹 翱骯濠蒂 殮溘ж樟蝗棲棻.\n");
		}
	}
}

//鳴陝л熱 啗骯晦
void trigfunc() {
	printf("\n [2] 鳴陝л熱 啗骯晦\n");
	double angle;
	char tirg[4];
	char sinC[4] = "sin", cosC[4] = "cos", tanC[4] = "tan", cscC[4] = "csc", secC[4] = "sec", cotC[4] = "cot";
	printf("\n 鳴陝 л熱曖 謙盟蒂 殮溘п輿撮蹂 Ex) sin : ");
	scanf("%s", tirg);
	rewind(stdin);
	printf("\n 陝紫(◥)蒂 殮溘п輿撮蹂 Ex) 60 : ");
	scanf("%lf", &angle);
	double angle1 = angle;
	angle = angle * (pi / 180);
	if (strcmp(tirg, sinC) == 0) printf(" sin(%.2lf) = %.6lf\n", angle1, sin(angle));
	if (strcmp(tirg, cosC) == 0) printf(" cos(%.2lf) = %.6lf\n", angle1, cos(angle));
	if (strcmp(tirg, tanC) == 0) printf(" tan(%.2lf) = %.6lf\n", angle1, tan(angle));
	if (strcmp(tirg, cscC) == 0) printf(" csc(%.2lf) = %.6lf\n", angle1, 1.f / sin(angle));
	if (strcmp(tirg, secC) == 0) printf(" sec(%.2lf) = %.6lf\n", angle1, 1.f / cos(angle));
	if (strcmp(tirg, cotC) == 0) printf(" cot(%.2lf) = %.6lf\n", angle1, 1.f / tan(angle));
}

//瞰渤高 
void abss() {
	printf("\n [3] 瞰渤高 啗骯晦\n");
	double num;
	printf("\n 高擊 殮溘п輿撮蹂 Ex) 1 : ");
	scanf("%lf", &num);
	if (num < 0) {
		printf(" |%.2lf| = %.6lf\n", num, 0 - num);
	}
	else {
		printf(" |%.2lf| = %.6lf\n", num, num);
	}
	rewind(stdin);
}

//雖熱高 啗骯晦
void poww() {
	printf("\n [4] 雖熱高 啗骯晦\n");
	double x, y;
	printf("\n 壽擊 殮溘п輿撮蹂 Ex) 5 : ");
	scanf("%lf", &x);
	rewind(stdin);
	printf("\n 雖熱蒂 殮溘п輿撮蹂 : ");
	scanf("%lf", &y);
	printf(" %.2lf^%.2lf = %.6lf", x, y, pow(x, y));
}

//煎斜高 啗骯晦 
void Loge();
void Log10();

void Five_Log() {
	int input = 0;

	printf("\n [5] 煎斜高 啗骯晦\n");
	printf(" 1. 濠翱煎斜 (壽檜 e檣 煎斜)\t 2. 鼻辨煎斜 (壽檜 10檣 煎斜)\n");
	scanf("%d", &input);

	switch (input) {
	case 1:
		Loge();
		break;

	case 2:
		Log10();
		break;

	default:
		printf(" 澀跤殮溘ж樟蝗棲棻\n");
		break;
	}
}

void Loge() {
	double num;
	printf(" 濠翱煎斜曖 雖熱蒂 殮溘п輿撮蹂\n");
	scanf("%lf", &num);

	printf(" log(%lf)曖 高擎 %lf殮棲棻.\n", num, log(num));
}

void Log10() {
	double num;
	printf(" 鼻辨煎斜曖 雖熱蒂 殮溘п輿撮蹂\n");
	scanf("%lf", &num);

	printf(" log10(%lf)曖 高擎 %lf殮棲棻.\n", num, log10(num));
}

//ね饜葬橡 
unsigned long long factorial(int x) {
	if (x < 3) {
		return x;
	}
	else {
		return x * factorial(x - 1);
	}
}

void factorial2() {
	printf("\n [6] ね饜葬橡 啗骯晦\n");
	int x;
	printf(" 熱蒂 殮溘п輿撮蹂 Ex) 3 : ");
	scanf("%d", &x);
	unsigned long long n = factorial(x);
	printf(" %d! = %lld", x, n);
}

//8霞熱 滲�秧�
void Seven_Oct() {
	int num;
	printf("\n [7] 8霞熱 滲�秧槙n");
	printf(" 璋濠(薑熱)蒂 殮溘п輿撮蹂\n");
	scanf("%d", &num);
	printf(" %d曖 8霞熱 = %o\n", num, num);
}

//16霞熱 滲�秧�
void Eight_Hex() {
	int num;
	printf("\n [8] 16霞熱 滲�秧槙n");
	printf(" 璋濠(薑熱)蒂 殮溘п輿撮蹂\n");
	scanf("%d", &num);
	printf(" %d曖 16霞熱 = %X\n", num, num);
}

//睡翕模熱  
void floatPoint() {
	printf("\n [9] 睡翕模熱 滲�秧槙n");
	union {
		unsigned int y;
		float x;
	} input;
	printf(" 滲�納� 熱蒂 殮溘п輿撮蹂 Ex) 1.5 : ");
	scanf("%f", &(input.x));
	printf("\n %f曖 睡翕模熱 -> ", input.x);
	for (unsigned int m = 0x80000000; m; m >>= 1) {
		printf("%d", (m & input.y) ? 1 : 0);
	}
}

//斬曖 奢衝
void QuadraticEquation();
void CubicEquation();

void Ten_Quadratic() {
	int input = 0;

	printf("\n [10] 寞薑衝曖 п 啗骯晦\n");
	printf(" 1. 檜離寞薑衝 \t 2. 鳴離寞薑衝\n");
	scanf("%d", &input);

	switch (input) {
	case 1:
		QuadraticEquation();
		break;

	case 2:
		CubicEquation();
		break;

	default:
		printf(" \n [ERROR] :: 澀跤脹 熱蒂 殮溘ж樟蝗棲棻 ::\n");
		break;
	}
}

void QuadraticEquation() {
	double a, b, c;
	double D;
	double x, y, z;
	printf(" ax^2 + bx + c = 0曖 п蒂 掘ж溥堅 м棲棻\n");
	printf(" 啗熱 a, b, c曖 高擊 殮溘п輿撮蹂\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	D = b * b - (4 * a * c);
	printf(" っ滌衝 D = %lf \n", D);

	if (D > 0) //斬檜 2偃橾 陽 
	{
		x = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
		y = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
		printf(" 舒偃曖 斬擎 %lf諦 %lf殮棲棻 \n", x, y);
	}

	else if (D == 0) //斬檜 1偃橾 陽
	{
		x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		printf(" 醞斬擎 %lf殮棲棻 \n", x);
	}

	else if (D < 0) //D陛 0爾棻 濛戲嘎煎 斬擎 橈棻.
	{
		y = (-b / (2.0 * a));
		printf("%lf", abs(D));
		z = sqrt(abs((long)(D))) / (2.0 * a);
		if (y == 0)
		{
			printf(" 舒 ъ斬% lfi, %lfi 殮棲棻\n", z, -z);
		}

		else
		{
			printf(" 舒 ъ斬 %lf% + lfi, %lf% + lfi 殮棲棻\n", y, z, y, -z);
		}
	}

}

void CubicEquation() {
	double a, b, c;
	double p, q;
	double D;
	double x, y, z;

	printf(" x^3 + ax^2 + bx + c = 0曖 п蒂 掘ж溥堅 м棲棻");
	printf(" 啗熱 a, b, c曖 高擊 殮溘п輿撮蹂\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	p = (-a * a / 3.0 + b) / 3.0;
	q = (2.0 * a * a * a / 27.0 - a * b / 3.0 + c) / 2.0;

	D = p * p * p + q * q;
	printf(" っ滌衝 D = %lf \n", D);

	if (D < 0) {
		x = -2.0 * sqrt(-p) * cos(1.0 / 3.0 * atan(sqrt(-D) / q)) - a / 3.0;
	}

	else if (D == 0)
	{
		x = -2.0 * pow(q, 1.0 / 3.0) - a / 3.0;
	}

	else {
		if (p < 0) {
			x = -pow(q + sqrt(D), 1.0 / 3.0) - pow(q - sqrt(D), 1.0 / 3.0) - a / 3.0;
		}

		else if (p == 0) {
			x = -pow(2.0 * q, 1.0 / 3.0) - a / 3.0;
		}

		else {
			x = pow(-q + sqrt(D), 1.0 / 3.0) - pow(q + sqrt(D), 1.0 / 3.0) - a / 3.0;
		}
	}

	c = (a + x) * x + b;
	b = a + x;
	a = 1.0;
	D = b * b - 4.0 * a * c;

	if (D > 0) {
		y = (-b - sqrt(D)) / (2.0 * a);
		z = (-b + sqrt(D)) / (2.0 * a);
		printf(" 撮褒斬擎 %lf, %lf, %lf 殮棲棻\n", x, y, z);

	}

	else if (D == 0) {
		y = -b / (2.0 * a);
		printf(" ж釭曖 褒斬 %lf諦 醞斬 %lf 殮棲棻\n", x, y);
	}

	else {
		y = (-b / (2.0 * a));
		z = sqrt(abs((long)(D))) / (2.0 * a);
		if (y == 0)
		{
			printf(" ж釭曖 褒斬 %lf諦 舒 ъ斬% lfi, %lfi 殮棲棻\n", x, z, -z);
		}

		else
		{
			printf(" ж釭曖 褒斬 %lf諦 舒 ъ斬 %lf% + lfi, %lf% + lfi 殮棲棻\n", x, y, z, y, -z);
		}
	}
}

//棻о衝, 鳴陝л熱 嘐碟
void diff() {
	printf("\n [11] 棻ол熱 嘐碟 啗骯晦\n");
	double x[6] = { 0,0,0,0,0,0 };
	double a, b;
	for (int i = 0; i < 6; i++) {
		if (i == 5) printf(" 鼻熱о曖 啗熱蒂 殮溘п輿撮蹂 : ");
		else printf(" %d離 о曖 啗熱蒂 殮溘п輿撮蹂 : ", -i + 5);
		scanf("%lf", &x[i]);
	}
	printf("d/dx(");
	for (int i = 0; i < 6; i++) {
		if (x[i] != 0.f) {
			if (i == 0) printf("%lfx^5", x[0]);
			else if (i == 5) printf(" + %lf", x[5]);
			else printf(" + %lfx^%d", x[i], -i + 5);
		}
	}
	printf(") = ");
	for (int i = 0; i < 5; i++) {
		if (x[i] != 0.f) {
			if (i == 0) printf("%lfx^4", 5 * x[0]);
			else if (i == 4) printf(" + %lf", x[4]);
			else printf(" + %lfx^%d", (-i + 5) * x[i], -i + 4);
		}
	}
}

void diff2() {
	printf("\n [12] 鳴陝л熱 嘐碟 啗骯晦\n");
	double x[6] = { 0,0,0,0,0,0 };
	int select;
	printf(" 1. 餌檣л熱 嘐碟\n2. 囀餌檣л熱 嘐碟\n摹鷗 :");
	scanf("%d", &select);
	for (int i = 0; i < 6; i++) {
		if (i == 5) printf(" 鼻熱о曖 啗熱蒂 殮溘ж撮蹂: ");
		else printf(" %d離 о曖 啗熱蒂 殮溘ж撮蹂: ", -i + 5);
		scanf("%lf", &x[i]);
	}
	if (select == 1) {
		printf("d/dx(sin(");
		for (int i = 0; i < 6; i++) {
			if (x[i] != 0.f) {
				if (i == 0) printf("%lfx^5", x[0]);
				else if (i == 5) printf(" + %lf", x[5]);
				else printf(" + %lfx^%d", x[i], -i + 5);
			}
		}
		printf(")) = ");
		printf(" cos(");
		for (int i = 0; i < 6; i++) {
			if (x[i] != 0.f) {
				if (i == 0) printf("%lfx^5", x[0]);
				else if (i == 5) printf(" + %lf", x[5]);
				else printf(" + %lfx^%d", x[i], -i + 5);
			}
		}
		printf(") * (");
		for (int i = 0; i < 5; i++) {
			if (x[i] != 0.f) {
				if (i == 0) printf("%lfx^4", 5 * x[0]);
				else if (i == 4) printf(" + %lf", x[4]);
				else printf(" + %lfx^%d", (-i + 5) * x[i], -i + 4);
			}
		}
		printf(")");
	}
	else if (select == 2) {
		printf("d/dx(cos(");
		for (int i = 0; i < 6; i++) {
			if (x[i] != 0.f) {
				if (i == 0) printf("%lfx^5", x[0]);
				else if (i == 5) printf(" + %lf", x[5]);
				else printf(" + %lfx^%d", x[i], -i + 5);
			}
		}
		printf(")) = ");
		printf(" -sin(");
		for (int i = 0; i < 6; i++) {
			if (x[i] != 0.f) {
				if (i == 0) printf("%lfx^5", x[0]);
				else if (i == 5) printf(" + %lf", x[5]);
				else printf(" + %lfx^%d", x[i], -i + 5);
			}
		}
		printf(") * (");
		for (int i = 0; i < 5; i++) {
			if (x[i] != 0.f) {
				if (i == 0) printf("%lfx^4", 5 * x[0]);
				else if (i == 4) printf(" + %lf", x[4]);
				else printf(" + %lfx^%d", (-i + 5) * x[i], -i + 4);
			}
		}
		printf(")");
	}
}

//棻о衝 啗熱 殮溘
void inputCoef(integral* integral) {
	for (int i = 0; i < 6; i++) {
		if (i == 5) printf(" 鼻熱о曖 啗熱蒂 殮溘п輿撮蹂 : ");
		else printf(" %d離о曖 啗熱蒂 殮溘п輿撮蹂 : ", -i + 5);
		scanf("%lf", &integral->x[i]);
	}
}

//瞳碟 啗骯 
void calSum(double* x, integral* integral, int type = 0) {
	for (int i = 0; i < integral->count; i++) {
		double resultA = (*x) * (pow(integral->a, 5)) + (*(x + 1)) * (pow(integral->a, 4)) + (*(x + 2)) * (pow(integral->a, 3)) + (*(x + 3)) * (pow(integral->a, 2)) + (*(x + 4)) * (integral->a) + *(x + 5);
		double resultB = (*x) * (pow(integral->a + integral->dx, 5)) + (*(x + 1)) * (pow(integral->a + integral->dx, 4)) + (*(x + 2)) * (pow(integral->a + integral->dx, 3)) + (*(x + 3)) * (pow(integral->a + integral->dx, 2)) + (*(x + 4)) * ((integral->a + integral->dx)) + *(x + 5);
		if (type == 1) {
			resultA = sin(resultA);
			resultB = sin(resultB);
		}
		else if (type == 2) {
			resultA = cos(resultA);
			resultB = cos(resultB);
		}
		integral->sum += (resultA + resultB) / 2 * integral->dx;
		integral->a += integral->dx;
	}
}

//棻о衝 薑瞳碟 
void polyIntegral() {
	printf("\n [13] 棻о衝 薑瞳碟 啗骯晦\n");
	integral poly;
	inputCoef(&poly);
	printf(" 瞳碟 掘除擊 殮溘п輿撮蹂 Ex) [2,4] -> 2 4 : ");
	scanf("%lf %lf", &poly.a, &poly.b);
	poly.dx = (poly.b - poly.a) / poly.count;
	calSum(poly.x, &poly);
	printf("%.5lf", poly.sum);
}

//鳴陝л熱 薑瞳碟
void triIntegral() {
	printf("\n [14] 鳴陝л熱 薑瞳碟 啗骯晦\n");
	int select;
	integral tri;
	printf(" 1. 餌檣л熱 2. 囀餌檣 л熱 : ");
	scanf("%d", &select);
	inputCoef(&tri);
	printf(" 瞳碟 掘除擊 殮溘п輿撮蹂 Ex) [0,3.141591] -> 0 3.141592 : ");
	scanf("%lf %lf", &tri.a, &tri.b);
	tri.dx = (tri.b - tri.a) / tri.count;
	if (select == 1) calSum(tri.x, &tri, 1);
	else calSum(tri.x, &tri, 2);
	printf("%.5lf", tri.sum);
}

//螃橾楝熱 啗骯
void Fifteen_e() {
	int num, i;
	double j, k;
	k = 1;

	printf("\n [15] 螃橾楝熱 e 啗骯晦殮棲棻\n");
	printf(" 橡葆釭 啗骯й梱蹂? : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		j = 1 / double(factorial(i));
		k = k + j;
	}
	printf(" 螃橾楝曖 熱朝 %lf 殮棲棻 \n", k);
}

//だ檜 啗骯
void Sixteen_Pie() {
	double PI = 0;
	double temp = 1;
	double p = -1;
	int num, i;

	printf("\n [16] だ檜 啗骯晦殮棲棻\n");
	printf(" 橡葆釭 啗骯й梱蹂? : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		p *= -1;
		PI += p * 1.0 / temp;
		temp += 2;
	}

	printf(" だ檜朝 %lf 殮棲棻 \n", 4 * PI);
}

//help 詭景
void setColor(int i) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void helpMenu() {
	printf("        旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("        早                                                                                                     早\n");
	printf("        早                      ﹥      ﹥      ﹥﹥﹥﹥﹥      ﹥              ﹥﹥﹥﹥                       早\n");
	printf("        早                      ﹥      ﹥      ﹥              ﹥              ﹥     ﹥                      早\n");
	printf("        早                      ﹥      ﹥      ﹥              ﹥              ﹥     ﹥                      早\n");
	printf("        早                      ﹥﹥﹥﹥﹥      ﹥﹥﹥﹥﹥      ﹥              ﹥﹥﹥﹥                       早\n");
	printf("        早                      ﹥      ﹥      ﹥              ﹥              ﹥                             早\n");
	printf("        早                      ﹥      ﹥      ﹥              ﹥              ﹥                             早\n");
	printf("        早                      ﹥      ﹥      ﹥﹥﹥﹥﹥      ﹥﹥﹥﹥﹥      ﹥                             早\n");
	printf("        早                                                                                                     早\n");
	printf("        曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
}

void menu() {
	printf("        旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("        早                                                                                                     早\n");
	printf("        早                    ﹥        ﹥      ﹥﹥﹥﹥﹥      ﹥        ﹥      ﹥      ﹥                   早\n");
	printf("        早                    ﹥﹥    ﹥﹥      ﹥              ﹥﹥      ﹥      ﹥      ﹥                   早\n");
	printf("        早                    ﹥  ﹥﹥  ﹥      ﹥              ﹥  ﹥    ﹥      ﹥      ﹥                   早\n");
	printf("        早                    ﹥   ﹥   ﹥      ﹥﹥﹥﹥﹥      ﹥   ﹥   ﹥      ﹥      ﹥                   早\n");
	printf("        早                    ﹥        ﹥      ﹥              ﹥    ﹥  ﹥      ﹥      ﹥                   早\n");
	printf("        早                    ﹥        ﹥      ﹥              ﹥      ﹥﹥      ﹥      ﹥                   早\n");
	printf("        早                    ﹥        ﹥      ﹥﹥﹥﹥﹥      ﹥        ﹥        ﹥﹥﹥                     早\n");
	printf("        早                                                                                                     早\n");
	printf("        曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
}

int MenuSelect();

void helpRun() {
	int input = 0;

	while ((input = MenuSelect()) != 0) {
		switch (input) {
		case 1:
			printf(" 檜匙擎 餌罌翱骯擊 м棲棻. 試盪, 餌罌翱骯й 舒 熱蒂 殮溘м棲棻. 斜 ��, 翱骯濠蒂 殮溘嫡嬴 唸婁高檜 轎溘腌棲棻. 翱骯濠陛   釭援晦橾 唳辦, 試盪 殮溘и 高擊 釭醞縑 殮溘и 高戲煎 釭敞棲棻.\n");
			break;
		case 2:
			printf(" 檜匙擎 鳴陝л熱蒂 啗骯м棲棻. 試盪, 鳴陝л熱曖 謙盟蒂 摹鷗м棲棻. 斜 ��, 寰縑 菟橫陞 陝紫(◥)蒂 殮溘嫡嬴 唸婁高檜 轎溘  腌棲棻.\n");
			break;
		case 3:
			printf(" 檜匙擎 瞰渤高擊 啗骯м棲棻. 瞰渤高擊 掘й 高擊 殮溘ж賊 斜 熱曖 瞰渤高檜 轎溘腌棲棻.\n");
			break;
		case 4:
			printf(" 檜匙擎 雖熱高擊 啗骯м棲棻. 試盪, 壽擊 殮溘м棲棻. 斜 ��, 雖熱蒂 殮溘嫡嬴 唸婁高檜 轎溘腌棲棻.");
			break;
		case 5:
			printf(" 檜匙擎 煎斜高擊 啗骯м棲棻. 試盪, 鼻辨煎斜檣雖 濠翱煎斜檣雖 摹鷗м棲棻. 斜 ��, 霞熱蒂 殮溘嫡嬴 唸婁高檜 轎溘腌棲棻.\n");
			break;
		case 6:
			printf(" 檜匙擎 ね饜葬橡擊 啗骯м棲棻. ね饜葬橡擊 掘й 高擊 殮溘ж賊 斜 熱曖 ね饜葬橡高檜 轎溘腌棲棻.\n");
			break;
		case 7:
			printf(" 檜匙擎 10霞熱(薑熱)蒂 8霞熱煎 滲�納桭炴�. 8霞熱煎 滲�納� 10霞熱(薑熱)高擊 殮溘ж賊 斜 熱曖 8霞熱高檜 轎溘腌棲棻.\n");
			break;
		case 8:
			printf(" 檜匙擎 10霞熱(薑熱)蒂 16霞熱煎 滲�納桭炴�. 16霞熱煎 滲�納� 10霞熱(薑熱)高擊 殮溘ж賊 斜 熱曖 16霞熱高檜 轎溘腌棲棻.\n");
			break;
		case 9:
			printf(" 檜匙擎 10霞熱蒂 睡翕模熱薄寞衝戲煎 滲�納桭炴�. 睡翕模熱薄 寞衝戲煎 滲�納� 10霞熱高擊 殮溘ж賊 斜 熱曖 睡翕模熱薄 寞衝檜 轎溘腌棲棻.\n");
			break;
		case 10:
			printf(" 檜匙擎 寞薑衝曖 п蒂 瓊蝗棲棻. 試盪, 檜離寞薑衝檣雖 鳴離寞薑衝檣雖 摹鷗м棲棻.(鳴離寞薑衝橾 唳辦, 3離о曖 啗熱朝 1檜棻. ) 斜 ��, 陝 о曖 啗熱蒂 殮溘ж賊 斜 寞薑衝曖 っ滌衝曖 唸婁諦 п陛  轎溘腌棲棻.\n");
			break;
		case 11:
			printf(" 檜匙擎 棻ол熱蒂 嘐碟м棲棻. 陝о曖 啗熱蒂 離滔煎 殮溘м棲棻.(5離о睡攪 鼻熱о 牖戲煎) 斜楝賊, 檜 л熱曖 嘐碟脹 衝檜  轎溘腌棲棻.\n");
			break;
		case 12:
			printf(" 檜匙擎 鳴陝л熱蒂 嘐碟м棲棻. 試盪, sinл熱檣雖 cosл熱檣雖 摹鷗м棲棻. 斜 ��, 鳴陝л熱 寰曖 衝曖 陝о曖 啗熱蒂 離滔煎  殮溘м棲棻.(5離о睡攪 鼻熱о 牖戲煎) 斜楝賊, 檜 л熱曖 嘐碟脹 衝檜 轎溘腌棲棻.\n");
			break;
		case 13:
			printf(" 檜匙擎 棻ол熱曖 薑瞳碟 高擊 啗骯м棲棻. 譆渠 5離о梱雖曖 啗熱諦 瞳碟 掘除擊 殮溘嫡堅, 餌棻葬笛 熱纂 瞳碟擊 �倏踿� 高  擊 轎溘м棲棻.\n");
			break;
		case 14:
			printf(" 檜匙擎 鳴陝л熱曖 薑瞳碟 高擊 啗骯м棲棻. 譆渠 5離о梱雖曖 啗熱諦 瞳碟 掘除擊 殮溘嫡堅[sin(f(x)) 笛], 餌棻葬笛 熱纂 瞳  碟擊 �倏踿� 高擊 轎溘м棲棻.\n");
			break;
		case 15:
			printf(" 檜匙擎 螃橾楝熱蒂 啗骯м棲棻. 奩犒僥曖 奩犒 �蝦鷏� 殮溘嫡擎 菴, ね饜葬橡擊 �倏踿� 纔橾楝 晝熱曖 ⑽鷓煎 螃橾楝熱蒂 啗骯  п 轎溘м棲棻.\n");
			break;
		case 16:
			printf(" 檜匙擎 だ檜高擊 啗骯м棲棻. 奩犒僥曖 奩犒 �蝦鷏� 殮溘嫡擎 菴, 塭檜Щ棲隴陛 薑葬и 啗骯衝擊 檜辨п 錳輿徽擊 轎溘м棲棻.\n");
			break;
		default:
			printf(" \n [ERROR] :: 澀跤脹 熱蒂 殮溘ж樟蝗棲棻 ::\n");
			break;
		}
		printf("\n ≦Press any key to continue≦\n");
		getch();
	}
	setColor(7);
	menu();
	Title();
}

void HelpTitle() {
	printf("	  旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                                             Help Menu                                           早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                                 億誕驛 - 掏艙遵. 梯⑷熱, 濰��錳 褻                              早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     1. 餌罌翱骯            2. 鳴陝л熱 啗骯晦       3. 瞰渤高 啗骯晦       4. 雖熱高 啗骯晦     早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     5. 煎斜高 啗骯晦       6. ね饜葬橡 啗骯晦       7. 8霞熱 滲�秧�        8. 16霞熱 滲�秧�     早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     9. 睡翕模熱薄 滲�秧�   10. 寞薑衝曖 п 瓊晦     11. 棻ол熱 嘐碟      12. 鳴陝л熱 嘐碟    早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早     13. 棻ол熱 薑瞳碟    14. 鳴陝л熱 薑瞳碟      15. 螃橾楝熱 e 啗骯    16. だ檜 啗骯        早\n");
	printf("	  早                                                                                                 早\n");
	printf("	  早                                           0. 給嬴陛晦                                           早\n");
	printf(" 	  早                                                                                                 早\n");
	printf(" 	  曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
}

//詭景 摹鷗 
int MenuSelect() {
	int input = 0;
	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("早    詭景蒂 摹鷗п輿撮蹂    早\n曲收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
	printf(" => ");
	scanf("%d", &input);
	rewind(stdin);
	while (input != 0) {
		if (input == 1) return 1;
		else if (input == 2) return 2;
		else if (input == 3) return 3;
		else if (input == 4) return 4;
		else if (input == 5) return 5;
		else if (input == 6) return 6;
		else if (input == 7) return 7;
		else if (input == 8) return 8;
		else if (input == 9) return 9;
		else if (input == 10) return 10;
		else if (input == 11) return 11;
		else if (input == 12) return 12;
		else if (input == 13) return 13;
		else if (input == 14) return 14;
		else if (input == 15) return 15;
		else if (input == 16) return 16;
		else if (input == 17) return 17;
		else {
			return 99;
		}
		return 0;
	}
}

//詭景 褒ч 
void MenuRun() {
	int input = 0;

	while ((input = MenuSelect()) != 0) {
		switch (input) {
		case 1:
			arithOper();
			break;

		case 2:
			trigfunc();
			break;

		case 3:
			abss();
			break;

		case 4:
			poww();
			break;

		case 5:
			Five_Log();
			break;

		case 6:
			factorial2();
			break;

		case 7:
			Seven_Oct();
			break;

		case 8:
			Eight_Hex();
			break;

		case 9:
			floatPoint();
			break;

		case 10:
			Ten_Quadratic();
			break;

		case 11:
			diff();
			break;

		case 12:
			diff2();
			break;

		case 13:
			polyIntegral();
			break;

		case 14:
			triIntegral();
			break;

		case 15:
			Fifteen_e();
			break;

		case 16:
			Sixteen_Pie();
			break;
		case 17:
			setColor(3);
			helpMenu();
			HelpTitle();
			helpRun();
			break;
		default:
			printf(" \n [ERROR] :: 澀跤脹 熱蒂 殮溘ж樟蝗棲棻 ::\n");
			break;
		}
		printf("\n ≦Press any key to continue≦\n");
		getch();

		// 檜勘 厥戲賊 �飛橉� 雖錶餵棲渡 
		system("cls");
		menu();
		Title();
	}
}

//詭檣 л熱  
int main() {
	menu();
	Title();
	MenuRun();
	return 0;
}

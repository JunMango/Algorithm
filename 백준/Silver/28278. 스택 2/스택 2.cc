#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
/*
28278_스택
5020KB	232ms
*/
#include <cstdio>

const int LM = 1000000;
int st[LM], size, n, op, x;

int main() {
#ifdef _WIN32
	freopen("input.txt", "r", stdin);
#endif // _WIN32
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &op);
		switch (op) {
		case 1:
			scanf("%d", &x);
			st[++size] = x;
			break;
		case 2:
			if (size) printf("%d\n", st[size--]);
			else printf("-1\n");
			break;
		case 3:
			printf("%d\n", size);
			break;
		case 4:
			if (!size) printf("1\n");
			else printf("0\n");
			break;
		case 5:
			if (size) printf("%d\n", st[size]);
			else printf("-1\n");
			break;
		}
	}
	return 0;
}
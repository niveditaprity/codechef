#include <cstdio>

#define AP 26
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int parts;
		scanf("%d", &parts);
		printf("%c %c %c\n",((360%parts)==0)?'y':'n',(parts<=360)?'y':'n',(parts<=AP)?'y':'n');
	}
}

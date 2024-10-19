#include <stdio.h>
int main(){
	int rpt;
	char sem[23];
	scanf("%d",&rpt);
	for(int i=0;i<rpt;i++){
		scanf("%s",sem);
		switch(sem[0]){
			case 'A':
				if(sem[1]=='l')
					puts("204");
				else
					puts("302");
				break;
			case 'C':
				puts("B101");
				break;
			case 'D':
				puts("207");
				break;
			case 'T':
	
				puts("105");
				break;
			case 'S':
				puts("501");
				break;
			case 'N':
				puts("303");
				break;
			default:
				puts("E");
				break;
		}
	}
	return 0;
}
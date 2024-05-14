#include <stdio.h>

int main(void) {
    int sz,amt=0;
	int nums[101];
    scanf("%d",&sz);
    for(int i=0; i<sz; i++)
    	scanf("%d", &nums[i]);
    for(int i=0;i<sz;i++){
		int k=0;
		if(nums[i]==1)
			continue;
		for(int j=2;j<nums[i];j++){
			if(!(nums[i]%j))
				k++;
		}
		if(!(k))
			amt++;
	}
	printf("%d\n",amt);

    return 0;
}

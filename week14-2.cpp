///week14-2.cpp
///UVA11063 B2-Sequence Part1: Input, Part2: Output
///Part 3:bigger and bigger, Part 4: tabel[now], Part 5: for-for, Part 6: tabel[now] to check
#include <stdio.h>
int main(){
	int a[100];
	int N, t=1;
	while( scanf("%d", &N) == 1){ ///Part 1
		int bad = 0; ///     not bad
		for(int i=0; i<N; i++){ ///Part 1: Input
			scanf("%d", &a[i]); ///Part 1: Input
			///Part 3:bigger and bigger
			if(i>0) if(a[i-1] >= a[i]) bad = 1;
		}
		int tabel[20002] = {}; /// Part4:tabel
		for(int i=0; i<N; i++){ /// Part5:for loop
			for(int j=i; j<N; j++){ ///Part5:for loop
				int now = a[i] + a[j];
				/// Part6:tabel[now] to check
				if(tabel[now]>0) bad = 1;
				tabel[now]++;
			}
		}
		///Part 2: Output
		if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n",t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
		t++;
	}
}

# include <bits/stdc++.h>

void towerOfHanoi(int diskNumber, int from, int to, int aux){
	if (diskNumber == 1)	{
		printf("%d %d\n", from, to);
		return;
	}
	towerOfHanoi(diskNumber - 1, from, aux, to);
	printf("%d %d\n", from, to);
	towerOfHanoi(diskNumber - 1, aux, to, from);
}

int main(){
	int n;
    scanf("%d", &n);
    printf("%d\n", (int) pow(2, n) - 1);
	towerOfHanoi(n, 1, 3, 2); 
	return 0;
}
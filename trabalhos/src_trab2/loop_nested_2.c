int main() {

int i,j;
int sum = 0;
int a[2];
for (i=0; i < 10000; i++) {
    for (j=0; j < 100000; j++) {
	a[j%2] = j*i;
    	if (a[(i+1)%2]%2) sum += a[(i+1)%2];
    }
}
return sum;

} 

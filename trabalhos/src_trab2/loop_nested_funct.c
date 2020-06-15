int f(int a) {
 int sel=0;
 if ( a >  3 ) sel = 5;
 if ( a < 40000 ) sel = 4;
 if ( a%3 == 2 ) sel = 3;
 
 switch ( sel) {
    case 3: return a+1;
    case 4: return a-1;
    case 5: return 2*a;
    default: return a;
 }
}


int main() {

int i,j;
int sum = 0;
int a[2];
for (i=0; i < 10000; i++) {
    for (j=0; j < 100000; j++) {
	a[j%2] = j*i;
    	if (a[(i+1)%2]%2) sum += f(a[(i+1)%2]);
        else sum -= f(a[(i+1)%2]);
    }
}
return sum;

} 

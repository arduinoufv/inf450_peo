int main() {

int i;
int sum = 0;
for (i=0; i < 1000000000; i++) {
    if ( i > 0 ) 
    	sum += i;
    else 
    	sum -= i;
}
return sum;

} 

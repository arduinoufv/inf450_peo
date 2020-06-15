int main() {

int i;
int sum = 0;
int a[2];
for (i=0; i < 1000000000; i++) {
    a[i%2] = i;
    sum += a[(i+1)%2];
}
return sum;

} 

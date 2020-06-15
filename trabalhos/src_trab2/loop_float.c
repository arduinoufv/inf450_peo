int main() {

int i;
float sum = 0;
float a[2];
for (i=0; i < 1000000000; i++) {
    a[i%2] = i/2.0;
    sum += a[(i+1)%2];
}
return i;

} 

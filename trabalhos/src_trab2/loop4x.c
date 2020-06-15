int main() {

int i;
int sum = 0;
for (i=0; i < 250000000; i++) {
    sum += i;
    sum += i+1;
    sum += i+2;
    sum += i+3;
}
return sum;

} 

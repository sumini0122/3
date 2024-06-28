int main(void) {
int i, sum1, sum2;
sum2 = 0;
sum1 = 0;
  // 반복문으로 합을 구하기
printf("다시 수를 하나 입력하세요:");
scanf("%d", &i);
if (i % 2==0) {
    for (int k = 0; k<i/2; k++) {
        sum1 += (1 + i);  // sum = sum + (1+i);
    }
}
else if (i % 2 == 1) {
    for (int p = 0; p<i/2; p++) {
        sum1 += (1 + i);
    }
    sum2 = (i/2)+1;
}
printf("%d", sum1+sum2);
}
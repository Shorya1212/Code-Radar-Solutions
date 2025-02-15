#include<stdio.h>
int main(){
    int num1; num2; num3; average;
    scanf("%d %d %d",&num1,&num2,&num3);
    int sum = num1 + num2 + num3;
    float average = float(sum)/3;
    printf("average: %.2f\n",average);
    return 0;
}
#include<stdio.h>
int main()
{
    int ar[100], arsum[100], i, j, sum=0, n, low, upper;
    printf("Take n:");
    scanf("%d", &n);
    printf("Take %d numbers:", n);
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
        arsum[i]=sum;
    }
    for(i=0; i<n; i++){
        printf("%d ", ar[i]);
    }
    printf("\n lower bound=");
    scanf("%d", &low);
    printf("\nupper bound=");
    scanf("%d", &upper);
    if(low >=1 && upper <=n){
        sum=arsum[upper-1]-arsum[low-1-1];
        printf("\nSum is: %d\n", sum);
    }
}

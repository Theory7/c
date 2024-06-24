#include<stdio.h>
#include<math.h>
int main(){
    float ans;
    const float pi = 3.14; // pi
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    ans = (powf(radius, 2) + 1e-9);
    printf("%f * %f = %f", pi, ans, pi * ans);
    printf("\nPress Enter to Exit : ");
    fflush(stdout);
    getchar(); getchar();
    return 0;
}
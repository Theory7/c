#include<stdio.h>
#include<math.h>
int main(){
    float ans,radius;
    const float pi = 3.14; //pi
    printf("Enter radius: ");
    scanf("%f", &radius);
    ans = (powf(radius, 2) + 1e-9);
    printf("%f * %f = %f", pi, ans, pi * ans);
    printf("\nPress Enter to Exit : ");
    fflush(stdout);
    getchar(); getchar();
    return 0;
}
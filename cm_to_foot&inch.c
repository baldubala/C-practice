#include <stdio.h>
int main() {
    int cm=0;
    scanf("%d",&cm);
    int inch1 = cm*12/30.48;
    int foot = inch1/12;
    int inch = inch1%12;
    printf("%d %d\n",foot,inch);
    return 0;
}

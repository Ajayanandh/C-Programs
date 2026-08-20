#include <stdio.h>
int main() {
    int patients[100];
    int i = 0;
    char input[100];
    while (1) {
     fgets(input, sizeof(input), stdin);

        if (input[0] == '\n')
            break;

      sscanf(input, "%d", &patients[i]);
        i++;
    }
    int sal=0;
    for (int j = 0; j < i; j++) {
     if(patients[j]>0&&patients[j]<=17){
        sal=sal+200;
     }
    else if(patients[j]<=40){
        sal=sal+400;
     }
     else if(patients[j]<=120){
        sal=sal+300;
     }

    }
    printf("%d",sal);
    return 0;
}
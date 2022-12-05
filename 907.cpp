#include <stdio.h>

int main(){
    int k;
    switch (k)
    {
    case 1 :
    case 2 :
        j = 2*k-1;
        break;
    case 3 :
    case 5 :
        j = 3*k-1;
        break;
    case 4 :
        j=4*k-1;
        break;
    case 6 :
    case 7 :
    case 8 :
        j=k-2;
        break;
    default:
        break;
    }
    return 0;
}

j = -3;
for (i = 0; i < 3 ; i++) {
    if(j==0 || j==1){
        j--;
    }else if(j==-2){
        j+=2;
    }else{
        j=0;
    }
    if (j > 0) 
        i=2;
    else
        j = 3 - i;
}
    switch (j + 2) {
    case 3:
    case 2: j--;
    break;
    case 0: j += 2; break;
    default: j = 0;
}

j = -3;
for (i = 0; i < 3; i++) {
switch (j + 2) {
case 3:
case 2: j--;
break;
case 0: j += 2; break;
default: j = 0;
}
if (j > 0) break;
j = 3 - i
}
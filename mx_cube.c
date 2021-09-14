#include <unistd.h>

void mx_printchar(char c);

void mx_cube(int n) {
    int num = 0;
    int buf = 0;
    int buf2 = 1;

    if (n <= 1) {
        return;
    }

    if (n % 2 == 0) {
        buf = 1;
        buf2 = 0;
    }

    char line[n * 2 + 2];
    line[0] = '+';

    char side_line[n * 2 + 2];
    side_line[0] = '|';

    char slash_line[n * 2 + 2];
    slash_line[0] = '/';
        
    for (int i = 1; i <= n * 2 + 1; i++) {
        slash_line[i] = ' ';
        line[i] = '-';
        side_line[i] = ' ';
    }
    
    line[n * 2 + 1] = '+';
    side_line[n * 2 + 1] = '|';
    slash_line[n * 2 + 1] = '/';
    

    for (int i = 0; i <= n / 2 + 1; i++) {
        
        for (int j = n - n / 2 + buf; j > i; j--) {
            mx_printchar(' ');
        }
        
        if (i == 0 || i == n / 2 + 1 ) {
            for (int k = 0; k < n * 2 + 2; k++) {
                mx_printchar(line[k]);
            }
        } else {
            for (int k = 0; k < n * 2 + 2; k++) {
                mx_printchar(slash_line[k]);  
            }
        }
        
        for (int s = 1; s < i; s++) 
            mx_printchar(' ');
        
        if (i > 0) 
            mx_printchar('|');
            
        mx_printchar('\n');
    }
    
    
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n * 2 + 2; j++) {
            mx_printchar(side_line[j]);
        }
        
        if (i  >= n / 2 + buf2) {
                num++;
        }
            
        for (int k = n / 2; k > num ; k--) {
           
            mx_printchar(' ');
            
        }
        
        if (i < (n - (n / 2 + 1))) {
            mx_printchar('|');
        } else if (i > (n - (n / 2 + 1))) {
            mx_printchar('/');
        } else {
            mx_printchar('+');
        }
        
        mx_printchar('\n');
    }
    
    for (int i = 0; i < n * 2 + 2; i++) {
        mx_printchar(line[i]);
    }
    mx_printchar('\n');
}


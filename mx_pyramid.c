void mx_printchar(char c);
void mx_pyramid(int n);

void mx_pyramid(int n) {
    if (n < 2 || n % 2 != 0) {
        return;
    }
    int space = n - 1;
    int distance = 0;
    int between = 0;
    int i = 0;
    while (i < n){
        int j = 0;
        while (j < (n * 2)){
            if (i < (n / 2)) {
                if (j < space) {
                    mx_printchar(' ');
                } else if (j == (space)) {
                    mx_printchar('/');
                } else if (j == (space + distance + between + 1)) {
                    mx_printchar('\\');
                    distance++;
                    between++;
                    mx_printchar('\n');
                    break;
                } else if (j == space + distance){
                    mx_printchar('\\');
                } else if ((j > space) && (j < (space + distance + between + 1))){
                    mx_printchar(' ');
                }
            } else if (i == n - 1){
                if (j < space) {
                    mx_printchar(' ');
                } else if (j == (space)) {
                    mx_printchar('/');
                } else if (j == (space + distance + between)) {
                    mx_printchar('|');
                    distance++;
                    between--;
                    mx_printchar('\n');
                    break;
                } else if (j == space + distance){
                    mx_printchar('\\');
                } else if ((j > space) && (j < (space + distance + between))){
                    mx_printchar('_');
                }
            } else /*if (i >= ((n / 2) - 1))*/ {
                if (j < space) {
                    mx_printchar(' ');
                } else if (j == (space)) {
                    mx_printchar('/');
                } else if (j == (space + distance + between)) {
                    mx_printchar('|');
                    distance++;
                    between--;
                    mx_printchar('\n');
                    break;
                } else if (j == space + distance){
                    mx_printchar('\\');
                } else if ((j > space) && (j < (space + distance + between))){
                    mx_printchar(' ');
                }
            }
            j++;
        }
        space--;
        distance++;
        i++;
    }
}

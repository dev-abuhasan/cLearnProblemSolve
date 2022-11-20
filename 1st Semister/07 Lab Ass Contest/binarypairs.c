#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, T_time=0, N, results[105];
    scanf("%d ", &T_time);
    char N_str[105][1005];

    for(i=0; i<T_time; i++)
    {
        scanf("%d ", &N);
        for(j=0; j<N; j++)
            scanf("%c ", &N_str[i][j]);

        results[i] = 0;
        for(j=1; j<N; j++)
        {
            if(N_str[i][j-1] == '0' && N_str[i][j] == '1')
                results[i] = results[i] + 1;
            else if(N_str[i][j-1] == '1' && N_str[i][j] == '0')
                results[i] = results[i] + 1;
            else
                results[i] = results[i];
        }
    }

    for(i=0; i<T_time; i++)
    {
        printf("%d \n", results[i]);
    }

    return 0;
}


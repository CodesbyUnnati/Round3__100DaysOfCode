#include <bits/stdc++.h>
using namespace std;

void comparison(int N, int A[], int M, int C[])
{
    for (int j = 0; j < M; j++)
    {
        int cnt = 0;

        for (int i = 0; i < N; i++)
        {
            if (C[j] == A[i])
            {
                cnt++;
            }
        }

        if (cnt)
        {
            cout << "Happy Haloween!" << endl;
        }

        else
        {
            cout << "Tricky!" << endl;
        }
    }

}
int main()
{

    int N, M;

    cin >> N;

    int A[N] = {0}; // Array declaration should be done properly with exact space allocation.

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> M;

    int C[M] = {0};

    for (int j = 0; j < M; j++)
    {
        cin >> C[j];
    }

    comparison(N, A, M, C);
    return 0;
}

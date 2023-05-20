
int towerOfHanoi(int n, int from_rod, int to_rod,
                  int aux_rod)
{
    if (n == 0) {
        return 0;
    }
  
        towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
        printf("Move disk %d from rod %d to rod %d\n", n, from_rod, to_rod);
        towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
    
}

int main()
{
  int N;
    N = 3;

    // Rods are represented by integers 1, 2, and 3
    towerOfHanoi(N, 1, 3, 2);
    return 0;
}

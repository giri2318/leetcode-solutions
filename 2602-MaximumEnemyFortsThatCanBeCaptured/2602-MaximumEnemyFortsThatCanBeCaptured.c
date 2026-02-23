// Last updated: 2/23/2026, 5:42:29 PM
int captureForts(int* forts, int fortsSize) {
    int max = 0;

    for (int i = 0; i < fortsSize; i++)
     {
        if (forts[i] == 1 || forts[i] == -1) 
        {
            for (int j = i + 1; j < fortsSize; j++)
             {
                if (forts[j] == 1 || forts[j] == -1)
                 {
                    if (forts[i] != forts[j]) 
                    {
                        int c = j - i - 1;
                        if (c > max) 
                        {
                            max = c;
                        }
                    }
                    break; 
                }
            }
        }
    }

    return max;
}
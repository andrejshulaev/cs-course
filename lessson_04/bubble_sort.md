Алгоритм на псевдокоде:

```
Initialize n = Length of Array

BubbleSort(Array, n)
{
    for i = 0 to n-2
    {
        for j = 0 to n-2
        {
            if Array[j] > Array[j+1]
            {
                swap(Array[j], Array[j+1])
            }
        }
    }
}
```

Визуализация:

```
https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
https://visualgo.net/en/sorting
```
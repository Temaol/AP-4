#include <stdio.h>

#define MAX 50
#define MAXARR 3
int kilk;

void Input(int* arr);
int SearchInArr(int* arr, int number, int begin, int end);

int main() {
    int arr[MAX], begin=0, end=0, numb, index;
    int matrix[MAXARR][MAXARR];
    printf("Введіть шукане число\n");
    scanf("%d", &numb);
    Input(arr);
 
    end =  kilk;
    
    index = SearchInArr(arr, numb, begin, end);
    printf("Індекс = %d\n", index);
    
    printf("Введіть елементи матриці\n");
       for(int i=0; i < 3; i++)
       {
           for(int j=0; j < 3; j++)
           {
               scanf("%d", &matrix[i][j]);
           }
       }
    
    int EndRow = 2;
    
    index = SearchInArr(matrix[0], numb, begin, EndRow);
    printf("Індекс в першому рядку = %d\n", index);
    index = SearchInArr(matrix[1], numb, begin, EndRow);
    printf("Індекс в другому рядку = %d\n", index);
    index = SearchInArr(matrix[2], numb, begin, EndRow);
    printf("Індекс в третьому рядку = %d\n", index);
    
}


int SearchInArr(int* arr, int number, int begin, int end)
{
    if(begin > end)
    {
    return 0;
    }
    if(arr[(begin + end) / 2] == number)
    {
        return (end + begin) / 2 + 1;
    }
    if(arr[(begin + end) / 2] > number)
    {
        return SearchInArr(arr, number,  begin, begin + (end + begin) / 2-1);
    }
    else
    {
        return SearchInArr(arr, number,  begin + (end + begin) / 2+1, end);
    }
}

void Input(int* arr)
{
    printf("Введіть кількість елементів\n");
      scanf("%d", &kilk);
      
    printf("Введіть елементи\n");
     for(int i=0; i < kilk; i++ )
     {
         scanf("%d", &arr[i] );
     }
     
}

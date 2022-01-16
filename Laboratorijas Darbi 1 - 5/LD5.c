
#include <stdio.h>
#include <string.h>

void swap(char *xp, char *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(char arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
       // Last i elements are already in place  
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
/* Function to print an array */
void printArray(char arr[], int size)
{
    int i;
    for (i=1; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
}

/*void modaArray(int arr[], char arr2[], int size){
	
	
}*/

double averageArray(char arr[], int size){
	
	
	int i, sum = 0;
    for (i=1; i < size; i++){
    	sum += arr[i];
	}
	return sum/((size-1)*1.0);
}

void medianArray(char arr[], int size){
	
	
	if((size)%2 == 0){
		 printf("Mediana: %d\n", arr[(size)/2]);
	}
	else{
		printf("Median: %.3f\n", (arr[(size)/2]+arr[(size)/2+1])/(2*1.0));
	}
}

void histogram(char arr[], int size){
	
	int i, element = 1, count = 0, max = 0;
	int freq[100];
	char arr2[100];
	char ref = arr[1];
	for(i = 1; i < strlen(arr)+1; i++){
		if(arr[i] == ref){
			arr2[element] = arr[i];
			count++;
		}
		else{
			freq[element] = count;
			element++;
			arr2[element] = arr[i];
			count = 1;
			freq[element] = count;
			ref = arr[i];
		}
	}
	for(i = 1; i < element; i++){
		printf("%c %d\n", arr2[i], freq[i]);
	}
	printf("\n");

	for(i = 1; i < element; i++){
		if(freq[i] >= max){
			max = freq[i];
		}
	}

	for(i = 1; i < element; i++){
		if(freq[i] == max){
			printf("moda: %c  skaits: %d\n", arr2[i], freq[i]);
		}
	}
	
}
 
// Driver program to test above functions
int main()
{
    int i, m;
    //fgetc(stdin);
    char arr[100];
    printf("Aizpildi masivu: ");
    
    fgets(arr, sizeof(arr), stdin);
    puts(arr);
    
    int n = strlen(arr);
    bubbleSort(arr, n);

 
    printf("Sorted array: ");
    puts(arr);
    
    printArray(arr, strlen(arr));
    printf("\n");
    printf("Minimala vertiba: %d\n", arr[1]);
    printf("Maksimala vertiba: %d\n", arr[strlen(arr)-1]);
    printf("Videjais: %.3f\n", averageArray(arr, strlen(arr)));
    medianArray(arr, strlen(arr));
    histogram(arr, strlen(arr));
    
    return 0;
}

/Koda beigās ir kods lai iztestētu sākotnējā koda vērtības!/
	
	
#include <stdio.h>
#include <string.h>

void swap(char *xo, char *yo)
{
    int temp = *xo;
    *xo = *yo;
    *yo = temp;
}
 
void bubbleSort(char arr[], int n)
{
   int x, y;
   for (x = 0; x < n-1; x++)     
 
       for (y = 0; y < n-x-1; y++)
           if (arr[y] > arr[y+1])
              swap(&arr[y], &arr[y+1]);
}
 
void printArray(char arr[], int size)
{
    int x;
    for (x=1; x < size; x++)
        printf("%d ", arr[x]);
    printf("\n");
    
}


double averageArray(char arr[], int size){
	
	
	int x, sum = 0;
        for (x=1; x < size; x++){
    	sum += arr[x];
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
	
	int x, element = 1, count = 0, max = 0;
	int freq[100];
	char arr2[100];
	char ref = arr[1];
	for(x = 1; x < strlen(arr)+1; x++){
		if(arr[x] == ref){
			arr2[element] = arr[x];
			count++;
		}
		else{
			freq[element] = count;
			element++;
			arr2[element] = arr[x];
			count = 1;
			freq[element] = count;
			ref = arr[x];
		}
	}
	for(x = 1; x < element; x++){
		printf("%c %d\n", arr2[x], freq[x]);
	}
	printf("\n");

	for(x = 1; x < element; x++){
		if(freq[x] >= max){
			max = freq[x];
		}
	}

	for(x = 1; x < element; x++){
		if(freq[x] == max){
			printf("moda: %c  skaits: %d\n", arr2[x], freq[x]);
		}
	}
	
}
 
int main()
{
    int x, m;
    char arr[100];
    printf("Ievadīt vērtības masīvā: ");
    
   	 fgets(arr, sizeof(arr), stdin);
   	 puts(arr);
    
   	 int n = strlen(arr);
   	 bubbleSort(arr, n);
 
    printf("Sakārtots masīvs: ");
    puts(arr);
    
	    printArray(arr, strlen(arr));
	    printf("\n");
	    printf("min: %d\n", arr[1]);
	    printf("max: %d\n", arr[strlen(arr)-1]);
	    printf("avg: %.3f\n", averageArray(arr, strlen(arr)));
	    medianArray(arr, strlen(arr));
	    histogram(arr, strlen(arr));
    
    return 0;
}

#include<stdio.h>

//Liat Excel buat Konsep

void merge(int arr[], int low, int mid, int high ){
	int sizeLeft = mid - low + 1; // Buat yang kiri
	int sizeRight = high - mid; // Buat yang kanan
	
	int leftArr[sizeLeft], rightArr[sizeRight];
	for(int i = 0; i < sizeLeft; i++){
		
		leftArr[i] = arr[low+i];
	}
	for(int i = 0; i < sizeRight ; i++){
		rightArr[i] = arr[mid + i + 1];
	}
	int i = 0, j = 0, k = low;
	while(i < sizeLeft && j < sizeRight)
		if (leftArr[i]< rightArr[j]){
			arr[k] = leftArr[i];
			i++;
			k++;
		}
		else{
			arr[k] = rightArr[j];
			j++;
			k++;
		}
		while(i < sizeLeft){
		arr[k] = leftArr[i]; // Buat kanan jika sisa ( yang kanan tidak ada perbandingan dngn kiri )
		i++;
		k++;
		}
		while(j < sizeRight){
		arr[k] = rightArr[j];
		j++;
		k++;	
	
	}	
	

	
}



void mergeSort(int arr[],int low, int high){
	if (low >= high) return;// Balik ke rumus int main
	
	
	
	int mid = low + ( high - low ) / 2; // Rumus mid yang ada di Excel
	mergeSort(arr, low, mid); // Buat bagi yang kiri
	mergeSort(arr, mid + 1, high); // Buat bagi yang kanan
	
	merge(arr, low, mid, high); // Manggil void merge
	
	
}

int partition() //Nentuin looping yang index pindah ke kanan ( Liat Excel ) Terus lanjut pisah kiri kanan lagi 
	int pivot = arr[high];
	
	int index = low - 1;
	
	for(int i = low; i < high; i++){
		if(arr[i] <= pivot){
			index++;
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
			
			
		}
		
	}
	int temp = arr[high];
	arr[high] = arr[index + 1];
	arr[index + 1] = temp;

	return index + 1;

void quickSort(int arr[], int low, int high){
	if(low >= high ) return; 
	
	int partIndex = partition(arr, low, high);
	quickSort(arr, low, partIndex - 1);
	quickSort(arr, partIndex + 1, high);
	
}

void printArr( int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	puts("");
	
}

int main(){
		
	int arr[]={7,3,4,2,1,6,5};
	puts("Sebelum sorting");
	printArr(arr, 7 );
	//mergeSort(arr, 0, 6);
	quickSort(arr, 0, 6)
	puts("Setelah sorting");
	printArr(arr, 7);
	
	return 0;
}

int arr[] = { 1, 2, 3, 4, 5 };

int count(void) {
   int i, total=0;
   for(i=0; i<5; i++) {
     total += arr[i];
   }
   return total;
}

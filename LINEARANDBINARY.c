#include <stdio.h> 

//I declare, upon my honor, that I did this machine problem assignment by myself using online resources from the following 
//(please site the online sources). 
//Further, my solution is not a copy from the aforementioned sources. Finally, I did not use any LLM (chatgpt, gemini, claude, etc.) for this.


int main(){

    int t = 0;
    int n;
    int array[20];  

    // INPUT t
    scanf("%i", &t);

    for(int i = 0; i < t; i++){ // loops for test cases
    // INPUT n
        do {
            scanf("%i", &n);
        } while (n < 5 || n > 20); 
    
    // PROCESS LINEAR SEARCH
        for (int j = 0; j < n; j++){ // loops for array input
            scanf("%i", &array[j]);
        }

        int linear = 0; // counter for linear search
        int flag = 0; // flag to check if a match is found

        for(int k = 0; k < n; k++){ // loops for linear search
            linear++; // increment linear search counter
            if (array[k] == k){ // check if the value matches its index
                flag = 1;
                break;
            } else {
                continue; 
            }
        }

        if (flag == 1){
            printf("YES %i\n", linear);
        } else {
            printf("NO %i\n", linear);
        }

        // SUB-LINEAR/BINARY

        int min = 0;
        int max = n - 1;
        int binary = 0; // counter for binary search
        int found = 0; // flag to check if a match is found

        while (min <= max){ // loops for binary search
            binary++; // increment binary search counter
            int mid = (min + max) / 2; // calculate mid index
            if (array[mid] == mid){ // check if the value matches its index
                found = 1;
                break;
            } else if (array[mid] < mid){ // if value is less than index, search right half
                min = mid + 1;
            } else { // if value is greater than index, search left half
                max = mid - 1;
            }
        }
        if (found == 1){
            printf("YES %i\n", binary);
        } else {
            printf("NO %i\n", binary);
        }
    }
}
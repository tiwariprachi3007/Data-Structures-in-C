//current ==key  -- found
// current>key    -- left
//current<key     ---down


#include<stdio.h>
int main(){
    int n,key;
    int arr[100][100];
    printf("Enter size of atrix:");
    scanf("%d",&n);

    printf("Enter matrix elements:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    };

    printf("Enter element to search:");
    scanf("%d",&key);

    //start from top-right corner 
    int i=0;
    int j=n-1;
    int found=0;

    while(i<n &&j>=0){
        if(arr[i][j]==key){
            found=1;
            break;
        }
        else if (arr[i][j]>key){
            j--;       //move left
        }
        else {
            i++;
        }

    }
    if(found){
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
    return 0;
}
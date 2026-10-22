#include <stdio.h>
#include <unistd.h> // universal standard
#include <fcntl.h> /// file control

int main()
{
    int ret=0;
    
    ret=unlink("Demo.txt");
    if(ret==-1){
        printf("Unable to delete the file");
        return -1;
    }
    else{
        printf("File gets successfully deleted");
    }
    return 0;
}
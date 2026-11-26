 #include <stdio.h>
 
 int main()
 {
    int lenght;
    int breadth;
    printf("Enter the length of the rectangle");
    scanf("%d", &lenght);
    printf("Enter the breadth of the rectangle"); 
    scanf("%d", &breadth);
    int area = lenght * breadth;    
    printf("The area of the rectangle is %d", area);
    
    return 0;
 }                                                             
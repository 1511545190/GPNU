#include <stdio.h>
#include <string.h>
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
int main(void)
{
    struct Books book1,book2;

    strcpy(book1.title," C programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C programming Tutorial");
    //*book1.author = "sdfsf";  不可
    book1.book_id = 123212;

    printf("%s",book1.title);
    printf("\nbook1 author %s",book1.author);
    printf("book 1 subject:%s\n",book1.subject);
    printf("%d",book1.book_id);

    /* char string[100];
    *string = "232"; */


    
    
    return 0;
}
#include<stdio.h>

struct Article {

    int article_number;
    int quantity;
    char description[20];
};

void Print(struct Article article) {

    printf("Article number: %d\n", article.article_number);
    printf("Quantity: %d\n", article.quantity);
    printf("Description: %s\n", article.description);
}

int main() {

    struct Article article1 = {1, 10, "Article 1"};

    Print(article1);

    return 0;

}

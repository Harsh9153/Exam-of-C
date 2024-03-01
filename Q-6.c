#include <stdio.h>


struct mobiles {
    char company_name[50],color[20],model[50];
    int price;
};

void main() {
	int n;
	printf("Enter size of object =");
	scanf("%d",&n);
	
    struct mobiles s[n];

    
    for (int i = 0; i < n; i++) {
//        printf("\nEnter details of mobile %d: \n", i+1);
        printf("Enter company name: ");
        scanf("%s",&s[i].company_name);
        printf("Enter color: ");
        scanf("%s",&s[i].color);
        printf("Enter model: ");
        scanf("%s",&s[i].model);
        printf("Enter price: ");
        scanf("%d",&s[i].price);
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        printf("\nDetails of mobile %d: \n", i+1);
        printf("Company name: %s\n",s[i].company_name);
        printf("Color: %s\n",s[i].color);
        printf("Model: %s\n",s[i].model);
        printf("Price: %d\n",s[i].price);
    }


}
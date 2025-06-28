#include <stdio.h>

int bill(int, int);

int bill(int x, int y) {

    return x*y;
}

int main() {

    int choice, choice2, items, quantity, ibill = 0, iDbill = 0, payable = 0, totalbill = 0;
    int a1 = 350, a2 = 1200, a3 = 1500, a4 = 500, a5 = 2000;
    int b1 = 18000, b2 = 55000, b3 = 2500, b4 = 3000, b5 = 21000;
    int c1 = 1500, c2 = 800, c3 = 1600, c4 = 550, c5 = 950;
    int d1 = 80, d2 = 180, d3 = 120, d4 = 90, d5 = 160;

    printf(" ======== Welcome to our Mall ========\n");

    do {

    printf("===== Choose your item catagorie ======\n");
    printf("1. Clothings.\n");
    printf("2. Electronics.\n");
    printf("3. Grocceries.\n");
    printf("4. Snacks.\n");
    printf("5. Confirm Order.\n");

    printf("Choose your catagorie : ");

    if(scanf("%d", &choice) != 1) {

        printf("Invalid choice.\n");
        return 1;
    }

    else if (choice < 1 || choice > 5) {

        printf("Wait till new catagories are added :D.\n");
        return 1;
    }

    switch (choice) {

        case 1:

        printf("1. Plain White T-Shirt - 350 BDT.\n");
        printf("2. Blue Baggy Jeans - 1200 BDT\n");
        printf("3. Black Hoodie - 1500\n");
        printf("4. Graphic T-Shirt - 500\n");
        printf("5. Denim Jacket - 2000 BDT\n");

        printf("Choose you product : ");

        if (scanf("%d", &choice2) != 1) {

            printf("Invalid choice.\n");
            return 1;
        }

        else if (choice2 < 1 || choice2 > 5) {

            printf("Wait till we add new products :D.\n");
            return 1;
        }

        printf("Enter quantitiy : ");

        if(scanf("%d", &quantity) != 1) {

            printf("Invalid Input.\n");
            return 1;
        }

        else if (quantity < 0) {

            printf("Invalid Input.\n");
            return 1;
        }

        switch (choice2) {

            case 1:

            ibill = bill(a1, quantity);
            break;

            case 2:

            ibill = bill(a2, quantity);
            break;

            case 3:

            ibill = bill(a3, quantity);
            break;

            case 4:

            ibill = bill(a4, quantity);
            break;

            case 5:

            ibill = bill(a5, quantity);
            break;

        } 
        
        totalbill += ibill;
    }

    switch (choice) {

        case 2:

        printf("1. Smartphone (Samsung A14) - 18,000 BDT\n");
        printf("2. Laptop (HP i5, 8GB RAM) - 55,000 BDT\n");
        printf("3. Bluetooth Earbuds (Realme) - 2,500 BDT\n");
        printf("4. Smartwatch (Xiaomi Mi Band 8) - 3,000 BDT\n");
        printf("5. LED TV (32 Walton) - 21, 000 - BDT\n");

        printf("Choose you product : ");

        if(scanf("%d", &choice2) != 1) {

            printf("Invalid Input.\n");
            return 1;
        }

        else if (choice2 < 1 || choice2 > 5) {

            printf("Wait till we add new products :D.\n");
            return 1;
        }

        printf("Enter quantity : ");

        if (scanf("%d", &quantity) != 1) {

            printf("Invalid choice.\n");
            return 1;
        }

        switch (choice2) {

            case 1:

            ibill = bill(b1, quantity);
            break;

            case 2:

            ibill = bill(b2, quantity);
            break;

            case 3:

            ibill = bill(b3, quantity);
            break;

            case 4:

            ibill = bill(b4, quantity);
            break;

            case 5:

            ibill = bill(b5, quantity);
            break;
        }

        totalbill += ibill;

    }

    switch (choice) {

        case 3:

        printf("1. Premium Basmati Rice (5kg) - 1,500 BDT\n");
        printf("2. Organic Lentils (2kg) - 800 BDT\n");
        printf("3. Imported Olive Oil (1L) - 1,600 BDT\n");
        printf("4. Farm Fresh Eggs (12 pcs) - 550 BDT\n");
        printf("5. Japanese Sweet Potatoes (1kg) - 950 BDT\n");

        printf("Choose you product : ");

        if(scanf("%d", &choice2) != 1) {

            printf("Invalid Input.\n");
            return 1;
        }

        else if (choice2 < 1 || choice2 > 5) {

            printf("Wait till we add new products :D.\n");
            return 1;
        }

        printf("Enter quantity : ");

        if (scanf("%d", &quantity) != 1) {

            printf("Invalid choice.\n");
            return 1;
        }

        switch (choice2) {

            case 1:

            ibill = bill(c1, quantity);
            break;

            case 2:

            ibill = bill(c2, quantity);
            break;

            case 3:

            ibill = bill(c3, quantity);
            break;

            case 4:

            ibill = bill(c4, quantity);
            break;

            case 5:

            ibill = bill(c5, quantity);
            break;
        }

        totalbill += ibill;

    }

    switch (choice) {

        case 4:

        printf("1. Mr. Twist Chips (large) - 80 BDT\n");
        printf("2. Cadbury Dairy Milk (100g) - 180 BDT\n");
        printf("3. Pran Chanachur (500g) - 120 BDT\n");
        printf("4. Oreo Biscuits (pack) - 90 BDT\n");
        printf("5. Danish Mini Cake (6 pcs) - 160 BDT\n");

        printf("Choose you product : ");

        if(scanf("%d", &choice2) != 1) {

            printf("Invalid Input.\n");
            return 1;
        }

        else if (choice2 < 1 || choice2 > 5) {

            printf("Wait till we add new products :D.\n");
            return 1;
        }

        printf("Enter quantity : ");

        if (scanf("%d", &quantity) != 1) {

            printf("Invalid choice.\n");
            return 1;
        }

        switch (choice2) {

            case 1:

            ibill = bill(d1, quantity);
            break;

            case 2:

            ibill = bill(d2, quantity);
            break;

            case 3:

            ibill = bill(d3, quantity);
            break;

            case 4:

            ibill = bill(d4, quantity);
            break;

            case 5:

            ibill = bill(d5, quantity);
            break;
        }

        totalbill += ibill;

    }
    
    } while (choice != 5);

    if (totalbill >= 2000) {

        iDbill = totalbill * 0.20;
        payable = totalbill - iDbill;
    }

    else if (totalbill >= 1500) {

        iDbill = totalbill * 0.10;
        payable = totalbill - iDbill;
    }

    else if (totalbill >= 1000) {

        iDbill = totalbill * 0.05;
        payable = totalbill - iDbill;
    }

    else if (totalbill < 1000) {

        payable = totalbill;
    }

    else {

        printf("No discount is applied.\n");
    }

    printf("   =========== Cash Memo ============\n");
    printf("||    Total bill : %d - BDT             ||\n", totalbill);
    printf("||    Applied discount : %d - BDT       ||\n", iDbill);
    printf("||    Total payable : %d - BDT          ||\n", payable);
    printf("||  Thank you for shopping with us :D   ||\n");
    printf("==========================================\n");

    printf("       Thanks for visiting us :D.\n       ");

    return 0;
}

//My first major project in C :D

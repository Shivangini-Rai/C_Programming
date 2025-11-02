#include <stdio.h>

int main() {
    double costPrice, sellingPrice, profit, loss, profitPercent, lossPercent;
        printf("Enter cost price: ");
    scanf("%lf", &costPrice);
    
    printf("Enter selling price: ");
    scanf("%lf", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercent = (profit / costPrice) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercent);
    } else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        lossPercent = (loss / costPrice) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercent);
    } else {
        printf("No profit, no loss.\n");
    }
    
    return 0;
}

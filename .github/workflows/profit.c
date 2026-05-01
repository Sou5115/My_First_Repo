#include <stdio.h>

int main(void)
{
    int salary;                // 給料
    int balance_payday;        // 給料日の残高
    int balance_before_payday; // 給料日前の残高

    // ノーカウント支出の内訳
    int cash_received;         // 受け取る現金
    int family_payment;        // 家に収めているお金
    int investment;            // 投資金
    int business_trip;         // 出張料金

    int no_count_expense;      // ノーカウント支出合計

    int actual_expense;        // 実際の支出
    int counted_expense;       // ノーカウント除いた支出

    int profit;                // 実際の利益
    int counted_profit;        // ノーカウント除いた利益

    printf("その月の給料を入力してください: ");
    scanf("%d", &salary);

    printf("給料日の残高を入力してください: ");
    scanf("%d", &balance_payday);

    printf("給料日前の残高を入力してください: ");
    scanf("%d", &balance_before_payday);

    printf("\n--- ノーカウント支出（受け取る現金、家に収めているお金、投資金、出張料金）---\n");

    printf("受け取る現金: ");
    scanf("%d", &cash_received);

    printf("家に収めているお金: ");
    scanf("%d", &family_payment);

    printf("投資金: ");
    scanf("%d", &investment);

    printf("出張料金: ");
    scanf("%d", &business_trip);

    // 合計
    no_count_expense = cash_received + family_payment + investment + business_trip;

    // 計算
    actual_expense = balance_payday - balance_before_payday;
    counted_expense = actual_expense - no_count_expense;

    profit = salary - actual_expense;
    counted_profit = salary - counted_expense;

    // 出力
    printf("\n--- 計算結果 ---\n");
    printf("給料: %d円\n", salary);
    printf("実際の支出: %d円\n", actual_expense);

    printf("\nノーカウント支出（内訳）:\n");
    printf("  受け取る現金: %d円\n", cash_received);
    printf("  家に収めているお金: %d円\n", family_payment);
    printf("  投資金: %d円\n", investment);
    printf("  出張料金: %d円\n", business_trip);
    printf("  合計: %d円\n", no_count_expense);

    printf("\nノーカウント支出を除いた支出: %d円\n", counted_expense);

    printf("\n実際の利益: %d円\n", profit);
    printf("ノーカウント支出を除いた利益: %d円\n", counted_profit);

    return 0;
}
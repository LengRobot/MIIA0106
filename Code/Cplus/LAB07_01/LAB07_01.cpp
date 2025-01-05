#include <iostream>
using namespace std;

// ¿Ñ§¡ìªÑ¹ÊÓËÃÑºÊÅÑº¤èÒ¢Í§µÑÇá»ÃÊÍ§µÑÇâ´Âãªé¾ÍÂ¹ìàµÍÃì
void swapValues(int* a, int* b) {
    int temp = *a;  // à¡çº¤èÒ¢Í§µÑÇá»Ã a äÇéã¹µÑÇá»ÃªÑèÇ¤ÃÒÇ
    *a = *b;        // à»ÅÕèÂ¹¤èÒ¢Í§ a ãËéà·èÒ¡Ñº¤èÒ¢Í§ b
    *b = temp;      // à»ÅÕèÂ¹¤èÒ¢Í§ b ãËéà·èÒ¡Ñº¤èÒªÑèÇ¤ÃÒÇ
}

int main() {
    int x, y;

    // ÃÑº¤èÒ¨Ò¡¼Ùéãªé
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;

    // áÊ´§¤èÒ¡èÍ¹¡ÒÃÊÅÑº
    cout << "\nBefore swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // àÃÕÂ¡¿Ñ§¡ìªÑ¹à¾×èÍÊÅÑº¤èÒ
    swapValues(&x, &y);

    // áÊ´§¤èÒËÅÑ§¡ÒÃÊÅÑº
    cout << "\nAfter swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

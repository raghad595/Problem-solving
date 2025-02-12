//D
//#include <iostream>
//using namespace std;
//int main()
//{
//    int arr[5];
//    const int pass = 1999;
//    for (int i = 0; i < 5; i++) {
//        do {
//            cin >> arr[i];
//        } while (arr[i] < 1000 || arr[i]>9999);
//    }
//    for (int i = 0; i < 5; i++) {
//        if (arr[i] == pass) {
//            cout << "Correct";
//            break;
//        }
//        else
//            cout << "Wrong" << endl;
//    }
//    return 0;
//}
//H
//#include <iostream>
//using namespace std;
//bool prime(int x) {
//    if (x == 2)
//        return true;
//    if (x == 1 || x == 0)
//        return false;
//    for (int i = 2; i < x; i++) {
//        if (x % i == 0)
//            return false;
//    }
//    return true;
//}
//int main()
//{
//    int x;
//    cin >> x;
//    (prime(x)) ? cout << "YES" : cout << "NO";
//    return 0;
//}
//I
//#include <iostream>
//using namespace std;
//int main() {
//    int x, y[100], i = 0, reversed = 0, original;
//    cin >> x;
//    original = x; // Store the original number for comparison later
//    while (x % 10 == 0)
//        x /= 10;
//    while (x != 0) {
//        y[i] = x % 10;
//        reversed = reversed * 10 + y[i]; // Build the reversed number
//        x /= 10;
//        i++;
//    }
//    cout <<  reversed << endl;
//    if (original == reversed) {
//        cout << "Palindorme." << endl;
//    }
//    else {
//        cout << "Not Palindorme." << endl;
//    }
//    return 0;
//}
//j
//#include <iostream>
//using namespace std;
//bool prime(int x) {
//    if (x == 2)
//        return true;
//    if (x == 1 || x == 0)
//        return false;
//    for (int i = 2; i < x; i++) {
//        if (x % i == 0)
//            return false;
//    }
//    return true;
//}
//int main()
//{
//    int x;
//    cin >> x;
//    for (int i = 1; i <= x; i++) {
//        if (prime(i))
//            cout << i << " ";
//    }
//    return 0;
//}
//L
//#include<iostream>
//using namespace std;
//int GCD(int big, int small) {
//	int r, r1;
//	if (big % small == 0)
//		return small;
//	r1 = small * (int)(big / small);
//	r = big - r1;
//	return GCD(small, r);
//}
//void swap(int* x, int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main() {
//	int b, s;
//	cout << "Enter GCD Two Numbers: ";
//	cin >> b >> s;
//	int* x = &b;
//	int* y = &s;
//	if (*y > *x)
//		swap(*y, *x);
//	cout << GCD(b, s);
//}

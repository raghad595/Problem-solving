////A
//#include <iostream>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    cout << "Hello, " << s;
//    return 0;
//}
//B
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    char a[100];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << endl;
//    }
//    return 0;
//}
//E
//#include<iostream>
//#include<iomanip>
//#include<math.h>
//using namespace std;
//int main()
//{
//    const double PI = 3.141592653;
//    float r;
//    cin >> r;
//    while (r < 1 || r > 100) {
//        cout << "R [1, 100], Try again!";
//        cin >> r;
//    }
//    double area = PI * pow(r, 2);
//    cout << fixed << setprecision(9) << area;
//}
// F
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    while ((n < 0 || n > pow(10, 8)) || (m < 0 || m > pow(10, 8))) {
//        cin >> n >> m;
//    }
//    int sum = (n % 10) + (m % 10);
//    cout << sum;
//    return 0;
//}
//G
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    int n, sum = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += i;
//    }
//    cout << sum;
//    return 0;
//}
//H
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    float div = a / b;
//    int ceil = int(div + 1);
//    int floor = int(div);
//    int round = ((div - (int)div) >= 5) ? int(div + 1) : int(div);
//    cout << "Ceil: " << ceil << "\nFloor: " << floor << "\nRound: " << round;
//    return 0;
//}
//K
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    int a[3], max, min;
//    for (int i = 0; i < 3; i++)
//        cin >> a[i];
//    min = max = a[0];
//    for (int i = 0; i < 3; i++) {
//        if (a[i] > max)
//            max = a[i];
//        if (a[i] < min)
//            min = a[i];
//    }
//    cout << min << " " << max;
//    return 0;
//}
//L
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    string a, b;
//    string x, y;
//    cin >> a >> b;
//    cin >> x >> y;
//    (b == y) ? cout << "ARE BROTHERS" : cout << "ARE NOT BROTHERS";
//    return 0;
//}
//M
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    char x;
//    cin >> x;
//    if ((int)x < 65)
//        cout << "IS DIGIT";
//    else if ((int)x < 97)
//        cout << "ALPHA\n" << "IS CAPITAL";
//    else
//        cout << "ALPHA\n" << "IS SMALL";
//    return 0;
//}
//N
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    char x;
//    cin >> x;
//    if ((int)x < 65)
//        cout << "IS DIGIT";
//    else if ((int)x < 97)
//        cout << char(x + 32);
//    else
//        cout << char(x - 32);
//    return 0;
//}
//R
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//    int n, d, m, y;
//    cin >> n;
//    y = n / 365;
//    n %= 365;
//    m = n / 30;
//    n %= 30;
//    d = n;
//    cout << y << " years\n" << m << " months\n" << d << " days";
//    return 0;
//}
//T
//#include <iostream>
//using namespace std;
//int main() {
//    // Read the input numbers
//    int A, B, C;
//    cin >> A >> B >> C;

    // Sort the numbers in ascending order manually
//    int tmp;
//    if (A > B) {
//        tmp = A;
//        A = B;
//        B = tmp;
//    }
//    if (B > C) {
//        tmp = B;
//        B = C;
//        C = tmp;
//    }
//    if (A > B) {
//        tmp = A;
//        A = B;
//        B = tmp;
//    }
//
//    // Print the sorted numbers followed by a blank line
//    cout << A << endl;
//    cout << B << endl;
//    cout << C << endl;
//    cout << endl;
//
//    // Print the numbers in the sequence they were read
//    cout << C << endl;
//    cout << B << endl;
//    cout << A << endl;
//
//    return 0;
//}
//U
//#include <iostream>
//using namespace std;
//int main() {
//	float n;
//	cin >> n;
//	float x = n - (int)n;
//	(x == 0) ? cout << "int\n" << (int)n : cout << "float\n" << (int)n << "  " << x;
//	return 0;
//}
//V
//#include <iostream>
//using namespace std;
//int main() {
//	int x, y;
//	char op;
//	cin >> x >> op >> y;
//	switch (op) {
//	case'<':
//		(x < y) ? cout << "Right" : cout << "Wrong";
//		break;
//	case'>':
//		(x > y) ? cout << "Right" : cout << "Wrong";
//		break;
//	case'=':
//		(x = y) ? cout << "Right" : cout << "Wrong";
//		break;
//	default:
//		cout << "wrong sign";
//	}
//	return 0;
//}
//W
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main() {
//	int a, b, c;
//	char op, eq;
//	do {
//		cin >> a >> op >> b >> eq >> c;
//	} while (a < 0 || b < 0 || a>100 || b>100 || c<pow(-10, 5) || c>pow(10, 5) || eq != '=');
//	switch (op) {
//	case'+':
//		(a + b == c) ? cout << "Yes" : cout << a << "+" << b << "=" << (a + b);
//		break;
//	case'-':
//		(a - b == c) ? cout << "Yes" : cout << a << "-" << b << "=" << (a - b);
//		break;
//	case'*':
//		(a * b == c) ? cout << "Yes" : cout << a << "x" << b << "=" << (a * b);
//		break;
//	default:
//		cout << "wrong sign";
//	}
//	return 0;
//}
//X
/*
*/
//Y
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c, d;
//	do {
//		cin >> a >> b >> c >> d;
//	} while (a < 2 || b < 2 || c < 2 || d < 2 || a > pow(10, 9) || b > pow(10, 9) || c > pow(10, 9) || d > pow(10, 9));
//	int m = a * b * c * d;
//	cout << (m / 10) % 10;
//	cout << m % 10;
//	return 0;
//}
//Z
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main() {
//	int a, b, c, d;
//	do {
//		cin >> a >> b >> c >> d;
//	} while (a < 1 || b < 1 || c < 1 || d < 1 || a > pow(10, 7) || b > pow(10, 12) || c > pow(10, 7) || d > pow(10, 12));
//	(pow(a, b) > pow(c, d)) ? cout << "Yes" : cout << "No";
//	return 0;
//}
//contest 1
//A
//#include <iostream>
//using namespace std;
//int main() {
//	float x, p;
//	do {
//		cin >> x >> p;
//	} while (x < 1 || p < 1 || x > 99 || p > 4 * pow(10, 4));
//	float rp = p / (1 - (x / 100));
//	cout << rp;
//	return 0;
//}
//B
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, k;
//	cout << "Enter No. for memo, momo, result: ";
//	do {
//		cin >> a >> b >> k;
//	} while (a < 1 || b < 1 || k < 1 || a > pow(10, 18) || b > pow(10, 18) || k > pow(10, 18));
//	if (a % k == 0 && b % k == 0)
//		cout << "Both";
//	else if (a % k != 0 && b % k != 0)
//		cout << "No One";
//	else if (a % k == 0 && b % k != 0)
//		cout << "Memo";
//	else if (a % k != 0 && b % k == 0)
//		cout << "Momo";
//	return 0;
//}
//D: error
//#include <iostream>
//#include <cmath>
//using namespace std;
//bool check(int a, int b, int c, int d) {
//    if (a + b * c == d || a * b + c == d || a + b - c == d || a - b + c == d || a * b - c == d || a - b * c == d)
//        return true;
//    else
//        return false;
//}
//int main() {
//    int a, b, c, d;
//    do {
//        cin >> a >> b >> c >> d;
//    } while (a < pow(-10, 9) || a > pow(10, 9) || b < pow(-10, 9) || b > pow(10, 9) || c < pow(-10, 9) || c > pow(10, 9) ||
//        d < pow(-10, 18) || d > pow(10, 18));
//
//    bool result = check(a, b, c, d);
//    (result) ? cout << "YES" : cout << "NO";
//    return 0;
//}
//E
//#include <iostream>
//using namespace std;
//void swap(int& l, int& r) {
//    int tmp = l;
//    l = r;
//    r = tmp;
//}
//bool check(int l, int r) {
//    int ecount = 0, ocount = 0;
//    if (l > r)
//        swap(l, r);
//    for (int i = l; i <= r; i++)
//        (i % 2 == 0) ? ecount++ : ocount++;
//    bool x = (ecount == ocount) ? true : false;
//    cout << ecount << " " << ocount << endl;
//    return x;
//}
//int main() {
//    int a, b;
//    do {
//        cin >> a >> b;
//    } while (a < 0 || a>100 || b < 0 || b>100);
//    (check(a, b)) ? cout << "YES" : cout << "NO";
//    return 0;
//}
//F
//#include <iostream>
//using namespace std;
//string convertBinary(int dec) {
//    string bnum = "";
//    /*float decpart = dec - (int)dec;
//    int intpart = (int)dec;*/
//    do {
//        if (dec % 2 == 0)
//            bnum = "0" + bnum;
//        else
//            bnum = "1" + bnum;
//        dec /= 2;
//    } while (dec != 0);
//    if (bnum.size() < 32) {
//        int length = 32 - bnum.size();
//        for(int i=0;i<length;i++)
//            bnum = "0" + bnum;
//    }
//    /*bnum += ".";
//    for (int i = 0; i < 3; i++) {
//        decpart *= 2;
//        if ((int)decpart == 0)
//            bnum += "0";
//        else
//            bnum += "1";
//        decpart -= (int)decpart;
//    }*/
//    return bnum;
//}
//string sumBinary(int x, int y) {
//    string a = convertBinary(x);
//    string b = convertBinary(y);
//    string res = "00000000000000000000000000000000";
//    bool carry = false;
//    for (int i = 31; i >= 0; i--) {
//        if (a[i] == '1' && b[i] == '1') {
//            res[i] = carry ? '1' : '0';
//            carry = true;
//        }
//        else if (a[i] == '0' && b[i] == '0') {
//            res[i] = carry ? '1' : '0';
//            carry = false;
//        }
//        else if ((a[i] == '0' && b[i] == '1') || (b[i] == '0' && a[i] == '1')) {
//            res[i] = carry ? '0' : '1';
//        }
//    }
//    return res;
//}
//int convertDecimal(const string& binary) {
//    int dec = 0;
//    //int power = 1;
//    int p = 0;
//    for (int i = binary.size() - 1; i >= 0; i--) {
//        if (binary[i] == '1')
//            dec += pow(2, p);
//        p++;
//            //dec += power;
//        //power *= 2;
//    }
//    return dec;
//}
//int main() {
//    int x, y;
//    cin >> x >> y;
//    string binary = sumBinary(x, y);
//    cout << x << " = " << convertBinary(x) << endl;
//    cout << "+\n";
//    cout << y << " = " << convertBinary(y) << endl;
//    cout << "=\n";
//    cout << convertDecimal(binary) << " = " << sumBinary(x, y) << endl;
//    return 0;
//}
//
//G
//#include <iostream>
//using namespace std;
//int main() {
//    int n, m, k, count = 0;
//    cout << "Enter eyes, mouth, bodies no. prespectivly: ";
//    cin >> n >> m >> k;
//    while (n >= 0 || k >= 0 || (m == 0 && n >= 2)) {
//        if (m == 0 && n >= 2) {
//            n--;
//        }
//        count++;
//        n--; k--; m--;
//    }
//    cout << count;
//    return 0;
//}
//H
//#include <iostream>
//using namespace std;
//int main() {
//    double n, k, a;
//    do {
//        cin >> n >> k >> a;
//    } while (n > 2147483647 || n < 1 || k > 2147483647 || k < 1 || a > 2147483647 || a < 1);
//    double res = (n * k) / a;
//    if (res - (int)res != 0.0)
//        cout << "double";
//    else {
//        if (res > 2147483647 || res < -2147483647) {
//            cout << "long long";
//        }
//        else {
//            cout << "int";
//        }
//    }
//    return 0;
//}
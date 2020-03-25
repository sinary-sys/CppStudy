#include <iostream>

using namespace std;
int a, b, c, d;

double func(double x) //����
{
    return a * x * x * x - b * x * x + c * x - d;
}

double func1(double x) //������
{
    return 3 * a * x * x - 2 * b * x + c;
}

int Newton(double &x, double precision, int maxcyc) //��������
{
    double x1, x0;

    x0 = x;
    for (int k = 0; k < maxcyc; k++) {
        if (func1(x0) == 0.0)//��ͨ����ֵ����������ֵΪ0
        {
            cout << "���������е���Ϊ0!" << endl;

            return 0;
        }
        x1 = x0 - func(x0) / func1(x0);//����ţ�ٵ�������
        if (fabs(x1 - x0) < precision || fabs(func(x1)) < precision) //�ﵽ��������
        {
            x = x1; //���ؽ��
            return 1;
        } else //δ�ﵽ��������
        {
            x0 = x1; //׼����һ�ε���
        }
    }

    cout << "������������Ԥ�ڣ�" << endl;//���������ﵽ����û�дﵽ����
    return 0;
}

int main() {
    double x, precision;
    int maxcyc = 0;
    int a = 0, b = 0, c = 0, d = 0;
    cout << "���뷽�̵�ϵ��abcd" << endl;
    cin >>a >>b >> c >> d;
    cout << "�����ʼֵx0" << endl;
    cin >> x;
    cout << "��������������" << endl;
    cin >> maxcyc;
    cout << "����Ҫ��ľ���" << endl;
    cin >> precision;
    if (Newton(x, precision, maxcyc) == 1) //����������ֵΪ1
    {
        cout << "�õ㸽���ĸ�Ϊ" << x << endl;
    } else //����������ֵΪ0
    {
        cout << "����ʧ��" << endl;
    }
    return 0;
}

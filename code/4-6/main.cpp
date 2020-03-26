#include <iostream>

using namespace std;


double func(double x) //����
{
    return 1 * x * x * x - 2 * x * x + 3 * x - 4;
}

double func1(double x) //������
{
    return 3 * 1 * x * x - 2 * 2 * x + 3;
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

#include <iostream>

int main()
{
	//if���� switch���� ����
	// switch���� �Ѱ��� ��Ȳ�� ���� ��찡 ������ �� �ַ� ��� ex)���� ���� ������ �ٸ��� �Ѵٰ� ���� �� ����ϸ� if������ ��������
	
	float result;
	float num1;
	float num2;
	int cal;
	std::string initial;

	std::cout << "����1�� �Է����ֽʽÿ�. \n";
	std::cin >> num1;

	std::cout << "����2�� �Է����ֽʽÿ�. \n";
	std::cin >> num2;

	std::cout << "�����ڸ� �Է����ֽʽÿ�. \n";
	std::cin >> initial;

	if (initial == "+")
	{
		cal = 1;
	}
	else if (initial == "-")
	{
		cal = 2;
	}
	else if (initial == "*")
	{
		cal = 3;
	}
	else if (initial == "/")
	{
		cal = 4;
	}


	switch (cal)
	{
		case 1  :
			result = num1 + num2;
			std::cout << "����� " << result << " �Դϴ�.";
			break;
		case 2 :
			result = num1 - num2;
			std::cout << "����� " << result << " �Դϴ�.";
			break;
		case 3 :
			result = num1 * num2;
			std::cout << "����� " << result << " �Դϴ�.";
			break;
		case 4:
			result = num1 / num2;
			std::cout << "����� " << result << " �Դϴ�.";
			break;
	}
	
	return 0;
}
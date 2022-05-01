#include "EqualityChecker_DiffWordType.h"

int main()
{
	EChecker_DiffWT::InitChecker(
		"./dic/irregular_nouns.txt",
		"./dic/irregular_verbs.txt",
		"./dic/prefix.txt",
		"./dic/suffix.txt"
	);

	printf("�����������ʣ������ж������Ƿ��Ӧͬһ��ԭ��\n");
	while (true)
	{
		const int size = 512;
		char p[2][size] = { {0},{0} };
		scanf_s("%s%s", p[0], size, p[1], size);
		if (EChecker_DiffWT::CheckWordsEquality(p[0], p[1]))
		{
			printf(">> same\n");
		}
		else
		{
			printf(">> not same\n");
		}
	}

	return 0;
}


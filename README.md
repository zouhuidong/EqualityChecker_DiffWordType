# EqualityChecker_DiffWordType
同词异形简易判断器；可以根据不同词形的单词，判断它们是否对应同一个原形单词

根据测试，可以正确判断大部分单词，但是对于短单词的判断正确率略低于长单词

该库需要加载 dic 中的词典文件，它们来自网络。

**调用示例**
```cpp
#include "EqualityChecker_DiffWordType.h"

int main()
{
	EChecker_DiffWT::InitChecker(
		"./dic/irregular_nouns.txt",
		"./dic/irregular_verbs.txt",
		"./dic/prefix.txt",
		"./dic/suffix.txt"
	);

	printf("输入两个单词，程序将判断它们是否对应同一个原形\n");
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
```

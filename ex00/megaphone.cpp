#include <iostream>
#include <cctype>

// int main(int argc, char **argv) {
// 	if (argc > 1) {  // コマンドライン引数がある場合
// 		for (int i = 1; i < argc; i++) {
// 			for (char *p = argv[i]; *p; p++) {
// 				std::cout << (char)toupper(*p);  // 大文字に変換して出力
// 			}
// 		}
// 		std::cout << std::endl;
// 	} else {  // コマンドライン引数がない場合
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	}
// 	return 0;
// }


int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				// std::cout << toupper(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	return (0);
}

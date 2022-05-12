#include	"minishell.h"

int main(void)
{
	char	*cmd;
	int		i;

	i = 0;
	while (1)
	{
	cmd = readline("prompt > ");
	read_command(cmd);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:40:38 by jkollner          #+#    #+#             */
/*   Updated: 2023/01/05 11:50:58 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	https://codereview.stackexchange.com/questions/280715/client-server-communications-through-unix-signals-in-c
	SIGUSER1 can only send one bit at a time.
	THe string needs to be chopped up into characters and they have to be turned into a list of bits?/ a mask ?
	The bits need to be send one by one and after one bit a signal need to be send to the server to get / receive the send bit.
	In the server the bits need to be put together / collected until the stopping signal is received.
	When the client hits the end of the message it needs to send the stopping signal and return to an inp
	Singaling for it that it should receive and also if it should stop receiving

	Quetions:
		- Is there a need to send a "stop" signal after every bit or can it just be one start and one finish signal ?
		-

	Needed functions:
		- char to binary / or stirng to char to binary (depends of size)
		- receive handler to give in the sigset (still unclear)
		- sending mehtode (client)
		- receiving methode (server) (needed ?)
	*/

int	main(int args, char *argv[])
{
	if (args != 3)
		return (-1);
	if (argv[1] <= 0)
		return (-1);
}


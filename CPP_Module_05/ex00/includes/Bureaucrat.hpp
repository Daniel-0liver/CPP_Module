/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:58:15 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/17 22:57:46 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Bureaucrat
{
private:
	std::string const	_name;
	int 				_grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	std::string const	getName() const;
	int 				getGrade() const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Winner.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:41:52 by junoh             #+#    #+#             */
/*   Updated: 2022/11/12 15:22:37 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    replaceString(std::string& line, std::string s1, std::string s2){
    std::string::size_type idx(0);  
    
    while (1){
        idx = line.find(s1, idx);
        if (idx == std::string::npos)
            break;
        line.erase(idx, s1.length());
        line.insert(idx, s2);
        idx += s2.length();
    }
    return ; 
}

int main(int argc, char *argv[])
{
    if (argc != 4 || argv[2][0] == '\0', argv[3][0] = '\0'){
        std::cout << "Wrong argument!" << std::endl;
        return (1);
    }
    std::ifstream inFile;
    
    inFile.open(std::string(argv[1]));
    if (inFile.fail()){
        std::cout << "Can't open the file" << std::endl;
        inFile.close();
        return (1);
    }
    std::string line;
    std::ofstream outFile;
    std::getline(inFile, line, '\0');
	if (!line.compare("")){
		std::cout << "Empty Line" << std::endl;
		return (1);
	}
    replaceString(line, std::string(argv[2]), std::string(argv[3]));
    outFile.open(std::string(argv[1]) + ".replace");
    outFile << line;
    inFile.close();
    outFile.close();
}

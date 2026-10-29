/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:20:35 by mael-hou          #+#    #+#             */
/*   Updated: 2026/08/25 20:25:19 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void printTest(char const *label, bool result, bool expected) {
    std::cout << label << ": " << (result == expected ? "OK" : "KO")
        << " (" << (result ? "true" : "false") << ")" << std::endl;
}

int main(void) {
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 4);

    printTest("inside", bsp(a, b, c, Point(1, 1)), true);
    printTest("outside", bsp(a, b, c, Point(3, 3)), false);
    printTest("edge ab", bsp(a, b, c, Point(2, 0)), false);
    printTest("edge bc", bsp(a, b, c, Point(2, 2)), false);
    printTest("edge ca", bsp(a, b, c, Point(0, 2)), false);
    printTest("vertex a", bsp(a, b, c, a), false);
    printTest("vertex b", bsp(a, b, c, b), false);
    printTest("vertex c", bsp(a, b, c, c), false);
    printTest("degenerate", bsp(a, Point(1, 1), Point(2, 2), Point(1, 1)), false);
    printTest("clockwise", bsp(a, c, b, Point(1, 1)), true);
    printTest("counter-clockwise", bsp(a, b, c, Point(1, 1)), true);
    return (0);
}

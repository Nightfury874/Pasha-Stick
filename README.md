# Pasha-Stick

﻿Pasha has a wooden stick of some positive integer length n. He wants to perform exactly three cuts to get four parts of the stick.
Each part must have some positive integer length and the sum of these lengths will obviously be n.

Pasha likes rectangles but hates squares, so he wonders, 
how many ways are there to split a stick into four parts so that it's possible to form a rectangle using these parts, but is impossible to form a square.

Your task is to help Pasha and count the number of such ways. Two ways to cut the stick are considered distinct if there exists some integer x,
 such that the number of parts of length x in the first way differ from the number of parts of length x in the second way.

Input:
The first line of the input contains a positive integer n (1 ≤ n ≤ 2·109) — the length of Pasha's stick.

Output:
The output should contain a single integer — the number of ways to split Pasha's stick into four parts of positive integer length 
so that it's possible to make a rectangle by connecting the ends of these parts, but is impossible to form a square.

---------------------------------------------------------------------------------

x has to be divided into four parts - a, b, a,b. x = 2(a + b)

If x is not an even number, then the number of rectangles is 0.

It is sufficient to count the number of times we can find (a + b) = x/2. We just replicate the same division on the other other x/2 stick.
Let x, be an even number. We must find the number of unordered pairs (a, b) such that (a + b) = x/2, where a is not equal to b.

This is the number of integers upto (x/2)/2 = x/4 [ (1, x/2-1), (2, x/2 - 2) .... (x/4 - 1, x/4 + 1), (x/4, x/4)]

If x is a multiple of 4, then the last pair is (x/4, x/4) which has to be discounted.
Otherwise, it is (x/4 - 1, x/4 + 1)

So, in three cases - 
1. x is an odd number - 0
2. x is an even number, but not a multiple of 4 - x/4
3. x is a multiple of 4 - x/4 - 1
